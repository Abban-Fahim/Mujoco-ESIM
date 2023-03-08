import os

import numpy as np
from gym import spaces
import mujoco

import sys
sys.path.append("..")

#from gym_kuka_mujoco.envs.assets import kuka_asset_dir
from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, eul2quat, quat2eul
from utils.kinematics import forwardKinSite, forwardKinJacobianSite
from .ViscoElasticCartesianPDController import ViscoElasticCartesianPDController
from .JointPDController import JointPDController
#from . import register_controller
from utils.mujoco_utils import get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices, kuka_subtree_mass


class NullSpaceViscoElasticCartesianPDController(ViscoElasticCartesianPDController, JointPDController):
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
        super(NullSpaceViscoElasticCartesianPDController, self).__init__(sim_model, sim_data, kp, kd, site_name)
    
    def controlLaw(self):
        return ViscoElasticCartesianPDController.controlLaw(self) + self.null_space_proj_m() @ JointPDController.controlLaw(self)
    

    def null_space_proj_m(self):
        J = self.Jac()

        # p = 1 - J^T * (J^+)^T
        projection_matrix = np.eye(7) - J.T @ self.left_pseudo_Jac(eps=1e-6).T

        return projection_matrix

