#
#BSD 3-Clause License
#
#
#
#Copyright 2022 fortiss, Neuromorphic Computing group
#
#
#All rights reserved.
#
#
#
#Redistribution and use in source and binary forms, with or without
#
#modification, are permitted provided that the following conditions are met:
#
#
#
#* Redistributions of source code must retain the above copyright notice, this
#
#  list of conditions and the following disclaimer.
#
#
#
#* Redistributions in binary form must reproduce the above copyright notice,
#
#  this list of conditions and the following disclaimer in the documentation
#
#  and/or other materials provided with the distribution.
#
#
#
#* Neither the name of the copyright holder nor the names of its
#
#  contributors may be used to endorse or promote products derived from
#
#  this software without specific prior written permission.
#
#
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#
#AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#
#IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
#
#FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#
#DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#

from copy import deepcopy
import itertools
import numpy as np
import torch
import torch.nn as nn
from torch.optim import Adam
from torch.utils.tensorboard import SummaryWriter
import gym
import gym_env
from tqdm import tqdm
import pickle

import sys
import os
sys.path.append(os.getcwd())

from RL.popsan.replay_buffer_norm import ReplayBuffer
from RL.popsan.popsan import SquashedGaussianPopSpikeActor
from RL.popsan.core_cuda import MLPQFunction


class SpikeActorDeepCritic(nn.Module):

    def __init__(self, observation_space, action_space,
                 encoder_pop_dim, decoder_pop_dim, mean_range, std, spike_ts, device,
                 hidden_sizes=(256, 256), activation=nn.ReLU):
        super().__init__()

        obs_dim = observation_space.shape[0]
        act_dim = action_space.shape[0]
        act_limit = action_space.high[0]

        # build policy and value functions
        self.popsan = SquashedGaussianPopSpikeActor(obs_dim, act_dim, encoder_pop_dim, decoder_pop_dim, hidden_sizes,
                                                    mean_range, std, spike_ts, act_limit, device)
        self.q1 = MLPQFunction(obs_dim, act_dim, hidden_sizes, activation)
        self.q2 = MLPQFunction(obs_dim, act_dim, hidden_sizes, activation)

    def act(self, obs, batch_size, deterministic=False):
        with torch.no_grad():
            a, _ = self.popsan(obs, batch_size, deterministic, False)
            a = a.to('cpu')
            return a.numpy()


class PopsanTrainer:

    def __init__(self, env, actor_critic=SpikeActorDeepCritic, ac_kwargs=dict(), gamma=0.99,
              polyak=0.995, popsan_lr=1e-4, q_lr=1e-3, alpha=0.2, batch_size=100,
              use_cuda=True) -> None:
        
        # Set device
        if use_cuda:
            device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        else:
            device = torch.device("cpu")

        self.gamma = gamma
        self.alpha = alpha
        self.batch_size = batch_size
        self.device = device
        self.polyak = polyak
        
        # Create actor-critic module and target networks
        self.ac = actor_critic(env.observation_space, env.action_space, **ac_kwargs)
        self.ac_targ = deepcopy(self.ac)
        self.ac.to(device)
        self.ac_targ.to(device)

        # List of parameters for both Q-networks (save this for convenience)
        self.q_params = itertools.chain(self.ac.q1.parameters(), self.ac.q2.parameters())

        # List of parameters for PopSAN parameters (save this for convenience)
        self.popsan_params = itertools.chain(self.ac.popsan.encoder.parameters(),
                                        self.ac.popsan.snn.parameters(),
                                        self.ac.popsan.decoder.parameters())
        
        # Set up optimizers for policy and q-function
        self.popsan_mean_optimizer = Adam(self.popsan_params, lr=popsan_lr)
        self.pi_std_optimizer = Adam(self.ac.popsan.log_std_network.parameters(), lr=q_lr)
        self.q_optimizer = Adam(self.q_params, lr=q_lr)

        # Freeze target networks with respect to optimizers (only update via polyak averaging)
        for p in self.ac_targ.parameters():
            p.requires_grad = False
            
        

    def update(self, data):
        # First run one gradient descent step for Q1 and Q2
        self.q_optimizer.zero_grad()
        loss_q, q_info = self.compute_loss_q(data)
        loss_q.backward()
        self.q_optimizer.step()

        # Freeze Q-networks so you don't waste computational effort 
        # computing gradients for them during the policy learning step.
        for p in self.q_params:
            p.requires_grad = False

        # Next run one gradient descent step for pi.
        self.popsan_mean_optimizer.zero_grad()
        self.pi_std_optimizer.zero_grad()
        loss_pi, pi_info = self.compute_loss_pi(data)
        loss_pi.backward()
        self.popsan_mean_optimizer.step()
        self.pi_std_optimizer.step()

        # Unfreeze Q-networks so you can optimize it at next DDPG step.
        for p in self.q_params:
            p.requires_grad = True

        # Finally, update target networks by polyak averaging.
        with torch.no_grad():
            for p, p_targ in zip(self.ac.parameters(), self.ac_targ.parameters()):
                # NB: We use an in-place operations "mul_", "add_" to update target
                # params, as opposed to "mul" and "add", which would make new tensors.
                p_targ.data.mul_(self.polyak)
                p_targ.data.add_((1 - self.polyak) * p.data)
                

    # Set up function for computing SAC pi loss
    def compute_loss_pi(self, data):
        o = data['obs']
        pi, logp_pi = self.ac.popsan(o, self.batch_size)
        q1_pi = self.ac.q1(o, pi)
        q2_pi = self.ac.q2(o, pi)
        q_pi = torch.min(q1_pi, q2_pi)

        # Entropy-regularized policy loss
        loss_pi = (self.alpha * logp_pi - q_pi).mean()

        # Useful info for logging
        pi_info = dict(LogPi=logp_pi.to('cpu').detach().numpy())

        return loss_pi, pi_info
    
     # Set up function for computing Spike-SAC Q-losses
    def compute_loss_q(self, data):
        o, a, r, o2, d = data['obs'], data['act'], data['rew'], data['obs2'], data['done']

        q1 = self.ac.q1(o,a)
        q2 = self.ac.q2(o,a)

        # Bellman backup for Q functions
        with torch.no_grad():
            # Target actions come from *current* policy
            a2, logp_a2 = self.ac.popsan(o2, self.batch_size)

            # Target Q-values
            q1_pi_targ = self.ac_targ.q1(o2, a2)
            q2_pi_targ = self.ac_targ.q2(o2, a2)
            q_pi_targ = torch.min(q1_pi_targ, q2_pi_targ)
            backup = r + self.gamma * (1 - d) * (q_pi_targ - self.alpha * logp_a2)

        # MSE loss against Bellman backup
        loss_q1 = ((q1 - backup)**2).mean()
        loss_q2 = ((q2 - backup)**2).mean()
        loss_q = loss_q1 + loss_q2

        # Useful info for logging
        q_info = dict(Q1Vals=q1.to('cpu').detach().numpy(),
                      Q2Vals=q2.to('cpu').detach().numpy())

        return loss_q, q_info

    def get_action(self, o, deterministic=False):
        return self.ac.act(torch.as_tensor(o, dtype=torch.float32, device=self.device), 1,
                      deterministic)
    
    def save(self, model_dir, model_idx, epoch):
        torch.save(self.ac.popsan.state_dict(),
                        model_dir + '/' + "model" + str(model_idx) + "_e" + str(epoch) + '.pt')
        
    def printStatistics(self):
        print("Learned Mean for encoder population: ")
        print(self.ac.popsan.encoder.mean.data)

        print("Learned STD for encoder population: ")
        print(self.ac.popsan.encoder.std.data)

# def spike_sac(env_fn, actor_critic=SpikeActorDeepCritic, ac_kwargs=dict(), seed=0,
#               steps_per_epoch=10000, epochs=100, replay_size=int(1e6), gamma=0.99,
#               polyak=0.995, popsan_lr=1e-4, q_lr=1e-3, alpha=0.2, batch_size=100, start_steps=10000,
#               update_after=1000, update_every=50, num_test_episodes=10, max_ep_len=1000,
#               save_freq=5, norm_clip_limit=3, norm_update=50, tb_comment='', model_idx=0, use_cuda=True):

class SpikeSAC():
    def __init__(self, env_name, actor_critic=SpikeActorDeepCritic, ac_kwargs=dict(), seed=0,
              steps_per_epoch=1000, epochs=10, replay_size=int(1e6), gamma=0.99,
              polyak=0.995, popsan_lr=1e-4, q_lr=1e-3, alpha=0.2, batch_size=100, start_steps=1000,
              update_after=1000, update_every=50, num_test_episodes=10, max_ep_len=100,
              save_freq=5, norm_clip_limit=3, norm_update=50, tb_comment='', model_idx=0, use_cuda=True) -> None:
        
        # Set device
        if use_cuda:
            device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        else:
            device = torch.device("cpu")

        torch.manual_seed(seed)
        np.random.seed(seed)

        # self.gamma = gamma
        # self.alpha = alpha
        self.batch_size = batch_size
        self.device = device
        self.num_test_episodes = num_test_episodes
        self.max_ep_len = max_ep_len
        # self.polyak = polyak
        self.tb_comment = tb_comment
        self.model_idx = model_idx
        self.steps_per_epoch = steps_per_epoch
        self.epochs = epochs
        self.start_steps = start_steps
        self.update_after = update_after
        self.update_every = update_every
        self.save_freq = save_freq

        env_fn = lambda: gym.make(env_name)
        self.env, self.test_env = env_fn(), env_fn()
        obs_dim = self.env.observation_space.shape
        act_dim = self.env.action_space.shape[0]

        # Action limit for clamping: critically, assumes all dimensions share the same bound!
        act_limit = self.env.action_space.high[0]

        self.trainer = PopsanTrainer(self.env, actor_critic, ac_kwargs, gamma,
              polyak, popsan_lr, q_lr, alpha, batch_size, use_cuda)

        # Experience buffer
        self.replay_buffer = ReplayBuffer(obs_dim=obs_dim, act_dim=act_dim, size=replay_size,
                                    clip_limit=norm_clip_limit, norm_update_every=norm_update)

        self.model_dir = "./params/spike-sac_" + tb_comment + "_" + str(model_idx)
        param_dir = "./params"
        self.createFolder(self.model_dir)
        self.createFolder(param_dir)


        # Save parameters
        with open(self.model_dir + "/training_parameters.txt", "w") as f:
            f.write("env_name " + env_name + "\n")
            f.write("ac_kwargs " + str(ac_kwargs) + "\n")
            f.write("steps_per_epoch " + str(steps_per_epoch) + "\n")
            f.write("epochs " + str(epochs) + "\n")
            f.write("replay_size " + str(replay_size) + "\n")
            f.write("gamma " + str(gamma) + "\n")
            f.write("polyak " + str(polyak) + "\n")
            f.write("popsan_lr " + str(popsan_lr) + "\n")
            f.write("q_lr " + str(q_lr) + "\n")
            f.write("alpha " + str(alpha) + "\n")
            f.write("batch_size " + str(batch_size) + "\n")
            f.write("start_steps " + str(start_steps) + "\n")
            f.write("update_after " + str(update_after) + "\n")
            f.write("update_every " + str(update_every) + "\n")
            f.write("num_test_episodes " + str(num_test_episodes) + "\n")
            f.write("max_ep_len " + str(max_ep_len) + "\n")
            f.write("save_freq " + str(save_freq) + "\n")
            f.write("norm_clip_limit " + str(norm_clip_limit) + "\n")
            f.write("norm_update " + str(norm_update) + "\n")
            f.write("tb_comment " + str(tb_comment) + "\n")
            f.write("model_idx " + str(model_idx) + "\n")
            f.write("use_cuda " + str(use_cuda) + "\n")

        self.writer = SummaryWriter(comment="_" + self.tb_comment + "_" + str(self.model_idx))
        self.save_test_reward = []
        self.save_test_reward_steps = []

    def createFolder(self, path):
        try:
            os.mkdir(path)
            print("Directory ", path, " Created")
        except FileExistsError:
            print("Directory ", path, " already exists")
        
    def test_agent(self):
        ###
        # compuate the return mean test reward
        ###
        test_reward_sum = 0
        for j in tqdm( range(self.num_test_episodes) ):
            o, d, ep_ret, ep_len = self.test_env.reset(), False, 0, 0
            o = o[0]
            while not(d or (ep_len == self.max_ep_len)):
                # Take deterministic actions at test time 
                a = self.trainer.get_action(self.replay_buffer.normalize_obs(o), True)
                a = a.flatten()
                o, r, d, _, info = self.test_env.step(a)
                ep_ret += r
                ep_len += 1
            test_reward_sum += ep_ret
        return test_reward_sum / self.num_test_episodes
    
    
    def run(self):
         ###
        # add tensorboard support and save rewards
        # Also create dir for saving parameters
        ###
        
        # Prepare for interaction with environment
        total_steps = self.steps_per_epoch * self.epochs
        o, ep_ret, ep_len = self.env.reset(), 0, 0
        o = o[0]

        # Main loop: collect experience in env and update/log each epoch
        for t in tqdm( range(total_steps), desc ="Total progress" ):
            
            # Until start_steps have elapsed, randomly sample actions
            # from a uniform distribution for better exploration. Afterwards, 
            # use the learned policy. 
            if t > self.start_steps:
                a = self.trainer.get_action(self.replay_buffer.normalize_obs(o))
            else:
                a = self.env.action_space.sample()

            # Step the env
            a = a.flatten()
            o2, r, d, _, info = self.env.step(a)
            ep_ret += r
            ep_len += 1

            # Ignore the "done" signal if it comes from hitting the time
            # horizon (that is, when it's an artificial terminal signal
            # that isn't based on the agent's state)
            d = False if ep_len==self.max_ep_len else d

            # Store experience to replay buffer
            self.replay_buffer.store(o, a, r, o2, d)

            # Super critical, easy to overlook step: make sure to update 
            # most recent observation!
            o = o2

            if self.isEpidodeEnd(d, ep_len):
                self.endOfEpisodeHandling(ep_ret, t)

            if self.isUpdateRequired(t):
                self.popsanUpdateHandling()

            if self.isEpochEnd(t):
                # Test the performance of the deterministic version of the agent.
                test_mean_reward = self.test_agent()
                self.writer.add_scalar(self.tb_comment + '/Test-Mean-Reward', test_mean_reward, t + 1)
                print("Model: ", self.model_idx, " Steps: ", t + 1, " Mean Reward: ", test_mean_reward)

                epoch = (t+1) // self.steps_per_epoch
                if self.isSaveRequired(epoch):
                    self.save(epoch)


    def isEpidodeEnd(self, d, ep_len):
        return d or (ep_len == self.max_ep_len)

    def endOfEpisodeHandling(self, ep_ret, t):
        self.writer.add_scalar(self.tb_comment + '/Train-Reward', ep_ret, t + 1)
        o, ep_ret, ep_len = self.env.reset(), 0, 0
        o = o[0]

    def isUpdateRequired(self, t):
        return t >= self.update_after and t % self.update_every == 0

    def popsanUpdateHandling(self):
        for j in range(self.update_every):
            batch = self.replay_buffer.sample_batch(self.device, self.batch_size)
            self.trainer.update(data=batch)
    
    def isEpochEnd(self, t):
        return (t+1) % self.steps_per_epoch == 0
    
    def isSaveRequired(self, epoch):
        return (epoch % self.save_freq == 0) or (epoch == self.epochs)
    
    def save(self, epoch):
        self.trainer.save(self.model_dir, self.model_idx, epoch)
        self.replay_buffer.save(self.model_dir, self.model_idx, epoch)

        self.trainer.printStatistics()
        print("Weights saved in ", self.model_dir)


if __name__ == '__main__':
    import math
    import argparse

    parser = argparse.ArgumentParser()
    parser.add_argument('--env', type=str, default='InvertedPendulum-v4')
    parser.add_argument('--encoder_pop_dim', type=int, default=10)
    parser.add_argument('--decoder_pop_dim', type=int, default=10)
    parser.add_argument('--encoder_var', type=float, default=0.15)
    parser.add_argument('--start_model_idx', type=int, default=0)
    parser.add_argument('--num_model', type=int, default=1)
    parser.add_argument('--epochs', type=int, default=10)
    args = parser.parse_args()

    START_MODEL = args.start_model_idx
    NUM_MODEL = args.num_model
    AC_KWARGS = dict(hidden_sizes=[256, 256],
                     encoder_pop_dim=args.encoder_pop_dim,
                     decoder_pop_dim=args.decoder_pop_dim,
                     mean_range=(-3, 3),
                     std=math.sqrt(args.encoder_var),
                     spike_ts=5,
                     device=torch.device('cuda'))
    COMMENT = "sac-popsan-" + args.env + "-encoder-dim-" + str(AC_KWARGS['encoder_pop_dim']) + \
              "-decoder-dim-" + str(AC_KWARGS['decoder_pop_dim'])
    for num in range(START_MODEL, START_MODEL + NUM_MODEL):
        seed = num * 10

        ss = SpikeSAC(args.env, actor_critic=SpikeActorDeepCritic, ac_kwargs=AC_KWARGS,
                  popsan_lr=1e-4, gamma=0.99, seed=seed, epochs=args.epochs,
                  norm_clip_limit=3.0, tb_comment=COMMENT, model_idx=num)
        # spike_sac(args.env, actor_critic=SpikeActorDeepCritic, ac_kwargs=AC_KWARGS,
        #           popsan_lr=1e-4, gamma=0.99, seed=seed, epochs=args.epochs,
        #           norm_clip_limit=3.0, tb_comment=COMMENT, model_idx=num)
        ss.run()

