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
                    controlled_joints=None,
                    kp=300,
                    kd=None,
                    set_velocity=False,
                    ):

        super(JointController, self).__init__(sim_model, sim_data)

        self.set_velocity = set_velocity

        # Get the position, velocity, and actuator indices for the model.
        self.init_indices(controlled_joints)
        
        # PD parameters
        self.set_gains(kp, kd)

        # Initialize setpoint.
        self.sim_qpos_set = sim_data.qpos[self.sim_qpos_idx].copy()
        self.sim_qvel_set = np.zeros(len(self.sim_qvel_idx))
        
    def init_indices(self, controlled_joints): 
        if controlled_joints is not None:
            self.sim_qpos_idx = get_qpos_indices(self.sim_model, controlled_joints)
            self.sim_qvel_idx = get_qvel_indices(self.sim_model, controlled_joints)
            self.sim_actuators_idx = get_actuator_indices(self.sim_model, controlled_joints)
            self.sim_joint_idx = get_joint_indices(self.sim_model, controlled_joints)
        else:
            self.sim_qpos_idx = range(self.sim_model.nq)
            self.sim_qvel_idx = range(self.sim_model.nv)
            self.sim_actuators_idx = range(self.sim_model.nu)
            self.sim_joint_idx = range(self.sim_model.nu)

    def set_gains(self, kp, kd):
        
        self.kp = kp
        if kd is None:
            # calc kd for critically damped 
            mass = kuka_subtree_mass(self.sim_model)
            self.kd = 2 * np.sqrt(mass * kp)
        else:
            self.kd = kd

    def joint_error(self):
        return self.sim_qpos_set - self.sim_data.qpos[self.sim_qpos_idx]

    def joint_vel_error(self):
        return self.sim_qvel_set - self.sim_data.qvel[self.sim_qvel_idx]