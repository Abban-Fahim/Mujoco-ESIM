import os

import numpy as np
from gym import spaces
import mujoco

import sys
sys.path.append("..")

#from gym_kuka_mujoco.envs.assets import kuka_asset_dir
from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, eul2quat, quat2eul
from utils.kinematics import forwardKinSite, forwardKinJacobianSite
from .MujocoController import MujocoController
#from . import register_controller
from utils.mujoco_utils import get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices, kuka_subtree_mass


class NullSpaceCartesianPDController(MujocoController):
    '''
    An inverse dynamics controller that used PD gains to compute a desired acceleration.
    '''

    def __init__(self,
                 sim_model, sim_data,
                 site_name='ee_site',
                 stiffness=None,
                 damping='auto',
                 null_space_damping=10,
                 null_space_stiffness=100,
                ):
        super(NullSpaceCartesianPDController, self).__init__(sim_model, sim_data)

        mujoco.mj_forward(sim_model, sim_data)

        self.nominal_qpos = np.zeros(7)

        self.site_name = site_name
        self.pos_set = None
        self.quat_set = None

        # Default stiffness and damping in cartesian space
        if stiffness is None:
            # self.stiffness = np.array([1000.0, 1000.0, 1000.0, 1000.3, 1000.3, 1000.3])
            self.stiffness = np.array([300.0, 300.0, 300.0, 200.0, 200.0, 200.0])
            # self.stiffness = np.array([700.0, 700.0, 700.0, 700.0, 700.0, 700])
            # self.stiffness = np.array([10.0, 10.0, 10.0, 10.0, 10.0, 10.0])
        else:
            self.stiffness = np.ones(6)*stiffness

        if damping=='auto':
            self.damping = 2 * np.sqrt(self.stiffness)

        else:
            self.damping = 2*np.sqrt(self.stiffness)*damping

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

        return id_torque

    def fk(self):
        pos, mat = forwardKinSite(self.sim_model, self.sim_data, self.site_name, recompute=False)
        quat = mat2Quat(mat)
        pose = np.append(pos, quat2eul(quat))
        return pose

    def pose_error(self):
        if self.pos_set is None or self.self.quat_set is None:
            raise ValueError("Function set_action was not called first")

        # Compute the pose difference.
        pos, mat = forwardKinSite(self.sim_model, self.sim_data, self.site_name, recompute=False)
        quat = mat2Quat(mat)
        
        dx = self.pos_set - pos
        dr = subQuat(self.quat_set, quat) # Original
        dframe = np.concatenate((dx,dr))
        return dframe

    def Jac(self):
        jpos, jrot = forwardKinJacobianSite(self.sim_model, self.sim_data, self.site_name, recompute=False)
        J = np.vstack((jpos, jrot)) # full jacobian
        return J

    def right_pseudo_Jac(self, eps=0):
        J = self.Jac()
        
        pJ = J.T @ np.linalg.inv(J @ J.T + eps*np.eye(6)) 
        return pJ

    def left_pseudo_Jac(self, eps=0):
        J = self.Jac()
        
        pJ = np.linalg.inv(J.T @ J + eps*np.eye(7)) @ J.T
        return pJ

    def null_space_proj_m(self):
        J = self.Jac()

        # p = 1 - J^T * (J^+)^T
        projection_matrix = np.eye(7) - J.T @ self.left_pseudo_Jac(eps=1e-6).T

        return projection_matrix

    def impedance_controller(self):
        # desired behaviour 
        J = self.Jac()
        cartesian_acc_des = self.stiffness*self.pose_error() - self.damping * (J @ self.sim_data.qvel[self.sim_qvel_idx])

        # impedance control
        impedance_control = self.right_pseudo_Jac(eps=1e-6) @ cartesian_acc_des
        return impedance_control

    def null_space_controller(self):
        # ns = kn * (qn - q) -  dn * dq
        null_space_control = self.null_space_stiffness * (self.nominal_qpos - self.sim_data.qpos[self.sim_qpos_idx]) - self.null_space_damping*self.sim_data.qvel[self.sim_qvel_idx]
        return null_space_control

    def gym_action_space(self, pos_limit, rot_limit):
        # Construct the action space.
        high_pos = pos_limit*np.ones(3)
        low_pos = -high_pos
        high_rot = rot_limit*np.ones(3)
        low_rot = -high_rot

        high = np.concatenate((high_pos, high_rot))
        low = np.concatenate((low_pos, low_rot))
        self.action_space = spaces.Box(low, high, dtype=np.float32)

    def force_feedback(self):
        r_pseudo_J = self.right_pseudo_Jac()

        # solve: tau = (Jac)^T * F
        return r_pseudo_J.T @ self.sim_data.qfrc_constraint