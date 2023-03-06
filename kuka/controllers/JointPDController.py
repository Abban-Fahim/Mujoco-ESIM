from typing import Generator
from .JointController import JointController
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
import numpy as np
from gym import spaces
import mujoco
from scipy.spatial.transform import Rotation as R


from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat
from utils.kinematics import forwardKinSite, forwardKinJacobianSite


class JointPDController(JointController):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    kp=3,
                    kd=None,
                    site_name='ee_site'
                    ):

        super(JointPDController, self).__init__(sim_model, sim_data, kp, kd)

        self.site_name = site_name

        # Initialize setpoint.
        self.sim_qpos_set = sim_data.qpos[self.sim_qpos_idx].copy()
        self.sim_qvel_set = np.zeros(len(self.sim_qvel_idx))

    def set_action(self, action):
        '''
        Set the setpoint.
        '''

        self.sim_qpos_set = action

    def get_torque(self):
        '''
        Update the PD setpoint and compute the torque.
        '''

        # calculate errors
        jerr = self.joint_error()
        djerr = self.joint_vel_error()

        # PD law
        torque = self.kp * jerr + self.kd * djerr

        # gravity compensation
        G = self.sim_data.qfrc_bias

        # Sum the torques.
        out_torque = torque + G
        self.sim_data.ctrl = out_torque
        
        return out_torque
    
    def set_gains(self, kp, kd):
        self.kp = kp
        if kd is None:
            # calc kd for critically damped 
            mass = kuka_subtree_mass(self.sim_model)
            print(kd, kp, mass)
            self.kd = 2 * np.sqrt(mass * kp)
        else:
            self.kd = kd
