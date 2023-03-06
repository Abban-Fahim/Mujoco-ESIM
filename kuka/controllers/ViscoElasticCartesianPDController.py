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
from .JointPDController import JointPDController
#from . import register_controller
from utils.mujoco_utils import get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices, kuka_subtree_mass


class ViscoElasticCartesianPDController(CartesianController):
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
        super(ViscoElasticCartesianPDController, self).__init__(sim_model, sim_data, kp, kd, site_name)

        self.nominal_qpos = np.zeros(7)

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
        self.sim_data.qacc = self.controlLaw()

        mujoco.mj_inverse(self.sim_model, self.sim_data)
        id_torque = self.sim_data.qfrc_inverse[self.sim_actuators_idx].copy()

        self.sim_data.ctrl = id_torque

        return id_torque
    
    # http://www.diag.uniroma1.it/deluca/rob2_en/13_CartesianControl.pdf
    # slide 6 visco-elactic
    def controlLaw(self):
        # return self.viscoElasticImpedance_controller() + self.null_space_proj_m() @ self.null_space_controller()
        return self.right_pseudo_Jac(eps=1e-6) @ (self.kp*self.pose_error() - self.kd * (self.Jac() @ self.sim_data.qvel))

    def set_gains(self, kp, kd):
        self.kp = kp
        if kd is None:
            self.kd = 2 * np.sqrt(kp)
        else:
            self.kd = kd