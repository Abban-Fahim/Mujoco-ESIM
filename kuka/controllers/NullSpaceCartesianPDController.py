import os

import numpy as np
from gym import spaces
import mujoco

import sys
sys.path.append("..")

#from gym_kuka_mujoco.envs.assets import kuka_asset_dir
from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, eul2quat, quat2eul
from utils.kinematics import forwardKinSite, forwardKinJacobianSite
from .CartesianController import CartesianController
#from . import register_controller
from utils.mujoco_utils import get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices, kuka_subtree_mass


class NullSpaceCartesianPDController(CartesianController):
    '''
    An inverse dynamics controller that used PD gains to compute a desired acceleration.
    '''

    def __init__(self,
                 sim_model, sim_data,
                 kp = 300, kd=None,
                 null_space_damping=10,
                 null_space_stiffness=100,
                 site_name='ee_site',
                ):
        super(NullSpaceCartesianPDController, self).__init__(sim_model, sim_data, kp, kd, site_name)

        self.nominal_qpos = np.zeros(7)

        # self.site_name = site_name

        self.null_space_damping = null_space_damping
        self.null_space_stiffness = null_space_stiffness

    def set_action(self, action):
        '''
        Set the setpoint.
        '''
        dx = action[0:3].astype(np.float64)
        dr = action[3:6].astype(np.float64)

        self.pos_set = dx
        self.quat_set = eul2quat(dr)

    def get_torque(self):
        '''
        Update the impedance control setpoint and compute the torque.
        '''
        projection_matrix = self.null_space_proj_m()
        self.sim_data.qacc = self.impedance_controller() + projection_matrix @ self.null_space_controller()

        mujoco.mj_inverse(self.sim_model, self.sim_data)
        id_torque = self.sim_data.qfrc_inverse[self.sim_actuators_idx].copy()

        self.sim_data.ctrl = id_torque

        return id_torque

    def null_space_proj_m(self):
        J = self.Jac()

        # p = 1 - J^T * (J^+)^T
        projection_matrix = np.eye(7) - J.T @ self.left_pseudo_Jac(eps=1e-6).T

        return projection_matrix

    def impedance_controller(self):
        # desired behaviour 
        J = self.Jac()
        cartesian_acc_des = self.kp*self.pose_error() - self.kd * (J @ self.sim_data.qvel[self.sim_qvel_idx])

        # impedance control
        impedance_control = self.right_pseudo_Jac(eps=0) @ cartesian_acc_des
        return impedance_control

    def null_space_controller(self):
        # ns = kn * (qn - q) -  dn * dq
        null_space_control = self.null_space_stiffness * (self.nominal_qpos - self.sim_data.qpos[self.sim_qpos_idx]) - self.null_space_damping*self.sim_data.qvel[self.sim_qvel_idx]
        return null_space_control

    def set_gains(self, kp, kd):
        self.kp = kp
        if kd is None:
            self.kd = 2 * np.sqrt(kp)

        else:
            self.kd = kd