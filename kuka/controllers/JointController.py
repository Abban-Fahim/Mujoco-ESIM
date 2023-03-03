from .Controller import Controller
from utils.mujoco_utils import kuka_subtree_mass, get_qpos_indices, get_qvel_indices, get_actuator_indices, get_joint_indices
import numpy as np
from gym import spaces



class JointController(Controller):
    '''
    A base for all joint based controllers
    '''

    def __init__(self,
                    sim_model, sim_data,
                    kp=300,
                    kd=None,
                    ):

        super(JointController, self).__init__(sim_model, sim_data)

        # Get the position, velocity, and actuator indices for the model.
        self.init_indices()
        
        # PD parameters
        self.set_gains(kp, kd)

        # Initialize setpoint.
        self.sim_qpos_set = sim_data.qpos[self.sim_qpos_idx].copy()
        self.sim_qvel_set = np.zeros(len(self.sim_qvel_idx))
        
    def init_indices(self): 
        self.sim_qpos_idx = range(self.sim_model.nq)
        self.sim_qvel_idx = range(self.sim_model.nv)
        self.sim_actuators_idx = range(self.sim_model.nu)
        self.sim_joint_idx = range(self.sim_model.nu)

    def set_gains(self, kp, kd):
        self.kp = kp
        if kd is None:
            # calc kd for critically damped 
            mass = kuka_subtree_mass(self.sim_model)
            print(kd, kp, mass)
            self.kd = 2 * np.sqrt(mass * kp)
        else:
            self.kd = kd

    def joint_error(self):
        return self.sim_qpos_set - self.sim_data.qpos[self.sim_qpos_idx]

    def joint_vel_error(self):
        return self.sim_qvel_set - self.sim_data.qvel[self.sim_qvel_idx]