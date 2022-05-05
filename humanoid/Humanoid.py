import mujoco_py
import os
import time

mj_path = mujoco_py.utils.discover_mujoco()
xml_path = os.path.join(mj_path, 'model', 'humanoid.xml')
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
    #sim.step()
    print(sim.data.qpos)