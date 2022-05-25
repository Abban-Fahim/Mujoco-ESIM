import mujoco
import mujoco_viewer
import os
import time
import numpy as np
from utils.read_cfg import get_mjc_xml

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)

print(data.qpos)

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

    print(data.qpos)