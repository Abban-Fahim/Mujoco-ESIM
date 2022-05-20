import mujoco
import mujoco_viewer
import time
import numpy as np
import yaml
from yaml.loader import SafeLoader
import sys,os
from utils.read_cfg import get_mjc_xml

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)

print(data.qpos)

t = data.time

while (True):
    viewer.render()
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)

    print(data.qpos)
    t = data.time