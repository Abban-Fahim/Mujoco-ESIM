from typing import Generator
from .ElasticCartesianPDController import ElasticCartesianPDController
from .JointPDController import JointPDController
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, eul2quat, quat2eul

import numpy as np
from gym import spaces
import mujoco
from scipy.spatial.transform import Rotation as R


from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat
from utils.kinematics import forwardKinSite, forwardKinJacobianSite


class NullSpaceElasticCartesianPDController(ElasticCartesianPDController, JointPDController):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    kp=300,
                    kd=None,
                    null_space_damping=10,
                    null_space_stiffness=100,
                    site_name='ee_site',
                    ):

        super(NullSpaceElasticCartesianPDController, self).__init__(sim_model, sim_data, kp, kd, site_name)
    
    def controlLaw(self):
        return ElasticCartesianPDController.controlLaw(self) + self.null_space_proj_m() @ JointPDController.controlLaw(self)
    

    def null_space_proj_m(self):
        J = self.Jac()

        # p = 1 - J^T * (J^+)^T
        projection_matrix = np.eye(7) - J.T @ self.left_pseudo_Jac(eps=1e-6).T

        return projection_matrix
    
