import mujoco
import mujoco_viewer
import os
import time
import numpy as np



## mj_path = mujoco.utils.discover_mujoco()
#xml_path = 'gym-kuka-mujoco/gym_kuka_mujoco/envs/assets/full_peg_insertion_experiment.xml'
#xml_path = 'kuka/envs/assets/full_kuka_no_collision.xml'
xml_path = 'kuka/envs/assets/full_kuka_INRC3.xml'
model = mujoco.MjModel.from_xml_path(xml_path)
## sim = mujoco.MjSim(model)
data = mujoco.MjData(model)

# print(sim.data.qpos)
print(data.qpos)
# [0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0. 0.]

# ctx = mujoco.GLContext(600, 400)
# ctx.make_current()
# window = ctx._context


## viewer = mujoco.MjViewer(data)
viewer = mujoco_viewer.MujocoViewer(model, data)

t_0=time.time()
t=t_0-time.time()

#while(t-t_0<4):
while (True):
    
    t=time.time()
    viewer.render()
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    mujoco.mj_step(model, data)
    ## sim.step()
    #sim.step()
    print(data.qpos)