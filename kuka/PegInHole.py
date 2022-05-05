import mujoco_py
import os
import time
import numpy as np

mj_path = mujoco_py.utils.discover_mujoco()
#xml_path = 'gym-kuka-mujoco/gym_kuka_mujoco/envs/assets/full_peg_insertion_experiment.xml'
#xml_path = 'kuka/envs/assets/full_kuka_no_collision.xml'
xml_path = 'kuka/envs/assets/full_kuka_INRC3.xml'
model = mujoco_py.load_model_from_path(xml_path)
sim = mujoco_py.MjSim(model)

print(sim.data.qpos)
# [0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0.]

viewer = mujoco_py.MjViewer(sim)
t_0=time.time()
t=t_0-time.time()

#while(t-t_0<4):
while (True):
    t=time.time()
    viewer.render()
    x=100*np.sin(t)
    torque=np.ones(7)*x
    sim.data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    sim.step()
    #sim.step()
    print(sim.data.qpos)