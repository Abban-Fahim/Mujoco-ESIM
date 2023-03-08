from .MujocoPDController import MujocoPDController
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
import numpy as np
from gym import spaces



class JointController(MujocoPDController):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    kp=3.0,
                    kd=None,
                    ):

        super(JointController, self).__init__(sim_model, sim_data, kp, kd)

        # Initialize setpoint.
        self.sim_qpos_set = sim_data.qpos[self.sim_qpos_idx].copy()
        self.sim_qvel_set = np.zeros(len(self.sim_qvel_idx))

    def joint_error(self):
        return self.sim_qpos_set - self.sim_data.qpos[self.sim_qpos_idx]

    def joint_vel_error(self):
        return self.sim_qvel_set - self.sim_data.qvel[self.sim_qvel_idx]
    
    def error(self):
        return self.joint_error()