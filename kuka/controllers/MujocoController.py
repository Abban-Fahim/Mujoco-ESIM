from .Controller import Controller

class MujocoController(Controller):
    '''
    An abstract base class for low level controllers.
    '''

    # def __init__(self, sim_model, sim_data):
    #     super(MujocoController, self).__init__(sim_model, sim_data)

    def __init__(self, sim_model, sim_data):
        self.sim_model, self.sim_data = sim_model, sim_data

        # Get the position, velocity, and actuator indices for the model.
        self.init_indices()

        
    def init_indices(self): 
        self.sim_qpos_idx = range(self.sim_model.nq)
        self.sim_qvel_idx = range(self.sim_model.nv)
        self.sim_actuators_idx = range(self.sim_model.nu)
        self.sim_joint_idx = range(self.sim_model.nu)


    