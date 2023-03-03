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
                    site_name='ee_site',
                    # controlled_joints=None,
                    kp=3,
                    kd=None,
                    # set_velocity=False,
                    # keep_finite=False
                    ):

        super(JointPDController, self).__init__(sim_model, sim_data, kp, kd)

        # self.set_velocity = set_velocity
        self.site_name = site_name

        # Get the position, velocity, and actuator indices for the model.
        self.init_indices()

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
