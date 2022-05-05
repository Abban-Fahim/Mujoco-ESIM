import mujoco_py
import os
import time
import numpy as np
from controllers.pd_controller_copy import PDController
from controllers.inverse_dynamics_controller_copy import InverseDynamicsController

mj_path = mujoco_py.utils.discover_mujoco()
#xml_path = 'gym-kuka-mujoco/gym_kuka_mujoco/envs/assets/full_peg_insertion_experiment.xml'
#xml_path = 'kuka/envs/assets/full_kuka_no_collision.xml'
xml_path = 'kuka/envs/assets/full_kuka_INRC3.xml'
model = mujoco_py.load_model_from_path(xml_path)
sim = mujoco_py.MjSim(model)

print(sim.data.qpos)
# [0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0.]

viewer = mujoco_py.MjViewer(sim)
controller=PDController(sim, gravity_comp_model_path="/envs/assets/full_kuka_INRC3.xml")
#controller=InverseDynamicsController(sim, model_path="full_kuka_INRC3.xml")


TEST=np.deg2rad([-10,0,0,0,0,0,0])
HOME=np.deg2rad([-90,0,0,90,0,-90,0])
ROBOT_HOME=np.deg2rad([-90,0,0,90,0,-90,0])
APPROACH=np.deg2rad([-96.20, -40.67, 0, 76.07, 0, -63.29, -6.28])
INSERTION=np.deg2rad([-94.99, -41.79, 0, 77.17, 0,-61.03, -5.01])

viapoints=[INSERTION, APPROACH, ROBOT_HOME,  HOME]
#viapoints=[HOME]
viapoint=viapoints.pop()

t_0=time.time()
#t=t_0-time.time()

#while(t-t_0<4):
while (True):
    t=-t_0+time.time()
    viewer.render()
    x=100*np.sin(t)
    torque=np.ones(7)*x
    #viapoint=np.zeros(7)
    #print(t)
    if (t>5):
        t_0=time.time()
        if len(viapoints):
            viapoint=viapoints.pop()
            print(t)
            print("Current viapoint "+str(viapoint))
    #print("Current viapoint "+str(viapoint))
    controller.set_action(np.asarray(viapoint))
    torque=controller.get_torque()
    sim.data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    #print("Joint Values:"+str(sim.data.qpos))
    #print("Torques      "+str(torque))
    print("Actions      "+str(sim.data.ctrl))
    sim.step()
    #sim.step()
    