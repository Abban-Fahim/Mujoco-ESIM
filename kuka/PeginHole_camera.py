import mujoco
import mujoco_viewer
import os
import time
import numpy as np


xml_path = 'kuka/envs/assets/full_kuka_INRC3_camera.xml'
model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)

t_0=time.time()
t=t_0-time.time()

while (True):
    
    t=time.time()
    viewer.render()
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)
    print(data.qpos)