from .base_controller import BaseController
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
import numpy as np
from gym import spaces
import mujoco


class CartisianPDController(BaseController):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    action_scale=1.,
                    action_limit=1.,
                    controlled_joints=None,
                    kp=3.,
                    kd="auto",
                    set_velocity=False,
                    keep_finite=False):

        super(CartisianPDController, self).__init__(sim_model, sim_data)

        self.set_velocity = set_velocity

        # Get the position, velocity, and actuator indices for the model.
        self.init_indices(controlled_joints)

        # gym
        self.gym_action_space(action_limit, action_scale, keep_finite)
        
        # PD parameters
        self.set_gains(kp, kd)

        # Initialize setpoint.
        self.sim_qpos_set = sim_data.qpos[self.sim_qpos_idx].copy()
        self.sim_qvel_set = np.zeros(len(self.sim_qvel_idx))
    
        
    def init_indices(self, controlled_joints): 
        if controlled_joints is not None:
            self.sim_qpos_idx = get_qpos_indices(self.sim_model, controlled_joints)
            self.sim_qvel_idx = get_qvel_indices(self.sim_model, controlled_joints)
            self.sim_actuators_idx = get_actuator_indices(self.sim_model, controlled_joints)
            self.sim_joint_idx = get_joint_indices(self.sim_model, controlled_joints)
        else:
            self.sim_qpos_idx = range(self.sim_model.nq)
            self.sim_qvel_idx = range(self.sim_model.nv)
            self.sim_actuators_idx = range(self.sim_model.nu)
            self.sim_joint_idx = range(self.sim_model.nu)

    def gym_action_space(self, action_limit, action_scale, keep_finite):
        self.action_scale = action_scale

        low = self.sim_model.jnt_range[self.sim_joint_idx, 0]
        high = self.sim_model.jnt_range[self.sim_joint_idx, 1]

        low[self.sim_model.jnt_limited[self.sim_joint_idx] == 0] = -np.inf
        high[self.sim_model.jnt_limited[self.sim_joint_idx] == 0] = np.inf
        
        if keep_finite:
            # Don't allow infinite bounds (necessary for SAC)
            low[not np.isfinite(low)] = -3.
            high[not np.isfinite(high)] = 3.

        low = low*action_limit
        high = high*action_limit

        self.action_space = spaces.Box(low, high, dtype=np.float32)

    def set_gains(self, kp, kd):
        
        self.kp = kp
        if kd == 'auto':
            # calc kd for critically damped 
            # kd = 2 * sqrt(kp * m)
            mass = kuka_subtree_mass(self.sim_model)
            self.kd = 2 * np.sqrt(mass * kp)

        else:
            self.kd = kd

    def set_action(self, action):
        '''
        Set the setpoint.
        '''
        nq = len(self.sim_qpos_idx)
        nv = len(self.sim_qvel_idx)

        self.sim_qpos_set = self.action_scale * action[:nq]
        if self.set_velocity:
            self.sim_qvel_set = self.action_scale * action[nq:nv]

    def get_torque(self):
        '''
        Update the PD setpoint and compute the torque.
        '''
        self.sim_data.qacc = self.kp * self.joint_error() + self.kd * self.joint_vel_error()
        mujoco.mj_inverse(self.sim_model, self.sim_data)
        id_torque = self.sim_data.qfrc_inverse[self.sim_actuators_idx].copy()

        # Sum the torques.
        return id_torque

    def joint_error(self):
        return self.sim_qpos_set - self.sim_data.qpos[self.sim_qpos_idx]

    def joint_vel_error(self):
        return self.sim_qvel_set - self.sim_data.qvel[self.sim_qvel_idx]