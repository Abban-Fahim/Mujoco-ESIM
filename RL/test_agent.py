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


import torch
from tqdm import tqdm
import numpy as np
import gym
import gym_env
import math
import pickle
import cv2
from gym.wrappers.monitoring.video_recorder import VideoRecorder

import sys
import os
sys.path.append(os.getcwd())

from RL.popsan_classic.sac_cuda_norm2 import SpikeActorDeepCritic
from RL.popsan_classic.replay_buffer_norm import ReplayBuffer



env_name = "InvertedPendulum-v4"
param_path = "params/spike-sac_sac-popsan-InvertedPendulum-v4-encoder-dim-10-decoder-dim-10_0/model0_e5.pt"
rb_param_path = "params/spike-sac_sac-popsan-InvertedPendulum-v4-encoder-dim-10-decoder-dim-10_0/replay_buffer0_e5.p"

use_cuda = True


num_test_episodes = 10
max_ep_len = 200

ac_kwargs = dict(hidden_sizes=[256, 256],
                     encoder_pop_dim=10,
                     decoder_pop_dim=10,
                     mean_range=(-3, 3),
                     std=math.sqrt(0.15),
                     spike_ts=5,
                     device=torch.device('cuda'))

replay_size = int(1e6)
norm_clip_limit = 3
norm_update = 50



# Set device
if use_cuda:
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
else:
    device = torch.device("cpu")


env = gym.make(env_name, render_mode="rgb_array")



obs_dim = env.observation_space.shape[0]
act_dim = env.action_space.shape[0]


ac = SpikeActorDeepCritic(env.observation_space, env.action_space, **ac_kwargs)
ac.popsan.load_state_dict(torch.load(param_path))
ac.to(device)

f = open(rb_param_path, "rb")
replay_buffer = pickle.load(f)        


def get_action(o, deterministic=False):
        return ac.act(torch.as_tensor(o, dtype=torch.float32, device=device), 1,
                      deterministic)


def test_agent(env):
        ###
        # compuate the return mean test reward
        ###
        print("testing env...")
        test_reward_sum = 0
        for j in tqdm( range(num_test_episodes) ):
            o, d, ep_ret, ep_len = env.reset(), False, 0, 0
            o = o[0]
            while not(d or (ep_len == max_ep_len)):
                # Take deterministic actions at test time 
                a = get_action(replay_buffer.normalize_obs(o), True)
                a = a.flatten()
                o, r, d, _, info = env.step(a)
                ep_ret += r
                ep_len += 1

            test_reward_sum += ep_ret

        print("done testing env")
        average_reward = test_reward_sum / num_test_episodes
        print("Average reward:", average_reward)
        return average_reward


def render_agent(env):
        ###
        # compuate the return mean test reward
        ###
        try:
            os.mkdir("./clip")
            print("Directory clip Created")
        except FileExistsError:
            print("Directory clip already exists")

        print("rendering env...")

        video_recorder = VideoRecorder(env, f"clip/{env_name}_clip.mp4", enabled=True)

        test_reward_sum = 0
        for j in tqdm( range(num_test_episodes) ):
            o, d, ep_ret, ep_len = env.reset(), False, 0, 0
            o = o[0]
            while not(d or (ep_len == max_ep_len)):
                env.unwrapped.render()
                video_recorder.capture_frame()
                # Take deterministic actions at test time 
                a = get_action(replay_buffer.normalize_obs(o), True)
                a = a.flatten()
                o, r, d, _, info = env.step(a)


                ep_ret += r
                ep_len += 1
            test_reward_sum += ep_ret

        video_recorder.close()

        print("done rendering env")
        return test_reward_sum / num_test_episodes

# test_agent(env)
render_agent(env)
