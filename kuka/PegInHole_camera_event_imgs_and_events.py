import mujoco
import mujoco_viewer
import os
import time
import numpy as np
import itertools

# parameter
cp = 0.5
cn = 0.1


simulation_time = 1000
sim_steps = 10
test_camera_on = False
camera_id = 0
overlay_on = True
# save_path = "/home/palinauskas/Documents/mujoco-eleanor/img"
# save_path_original = save_path + "/original/seq0/imgs"
# save_path_subtracted = save_path + "/subtracted/seq0/imgs"
# save_path_events = save_path + "/events_mujoco/seq0"
xml_path = 'kuka/envs/assets/full_kuka_INRC3_mounted_camera.xml'


model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)
viewer.init_esim(contrast_threshold_negative=0.9, contrast_threshold_positive=0.9, refractory_period_ns=100)

t_0 = time.time()
t = 0

step = 0
while (step < sim_steps) or test_camera_on:
    if not test_camera_on:
        viewer.render(overlay_on=False)

        timestamp = data.time        
        print(timestamp)
        
        viewer.capture_event(camera_id, timestamp, save_it=True, path="gen_events")
    else:
        viewer.render(overlay_on=overlay_on)
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)
    t = time.time() - t_0
    step += 1
