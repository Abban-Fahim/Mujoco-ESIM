from typing import Generator
from .CartesianController import CartesianController
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
import numpy as np
from gym import spaces
import mujoco
from scipy.spatial.transform import Rotation as R


from utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat
from utils.kinematics import forwardKinSite, forwardKinJacobianSite


class CartisianPDController(CartesianController):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    kp=3.,
                    kd=None,
                    # action_scale=1.,
                    # action_limit=1.,
                    site_name='ee_site',
                    # controlled_joints=None,
                    # set_velocity=False,
                    # keep_finite=False
                    ):

        super(CartisianPDController, self).__init__(sim_model, sim_data, kp, kd, site_name)


    def set_gains(self, kp, kd):
        self.kp = kp
        if kd is None:
            self.kd = 2 * np.sqrt(kp)

        else:
            self.kd = kd

    def set_action(self, action):
        '''
        Set the setpoint.
        '''
        self.scale = 1
        action = action * self.scale

        dx = action[0:3].astype(np.float64)
        dr = action[3:6].astype(np.float64)

        self.pos_set = dx
        self.quat_set = quatAdd(np.array([1., 0., 0., 0.]), dr)
        # self.sim_qpos_set = action

    def get_torque(self):
        '''
        Update the PD setpoint and compute the torque.
        '''
        
        J = self.Jac()
        perr = self.pose_error()
        qvel = self.sim_data.qvel

        # http://www.diag.uniroma1.it/deluca/rob2_en/13_CartesianControl.pdf
        # slide 3 elastic
        # torque = J.T @ (self.kp * perr) + self.kd *qvel
        # slide 6 visco-elactic
        # visco-elastic with null space projections
        dperr = J @ qvel
        print()
        # torque = self.right_pseudo_Jac(eps=0) @ (self.kp * perr + self.kd *dperr) - self.null_space_proj_m(eps=0) @ qvel
        torque = self.right_pseudo_Jac(eps=0) @ (self.kp * perr + self.kd *dperr)


        # gravity compensation
        G = self.sim_data.qfrc_bias

        # Sum the torques.
        out_torque = torque + G
        self.sim_data.ctrl = out_torque

        pos, mat = forwardKinSite(self.sim_model, self.sim_data, self.site_name, recompute=False)
        quat = mat2Quat(mat)
        # eul = R.from_matrix(mat.reshape(3,3)).as_euler('xyz')


        
        return torque
