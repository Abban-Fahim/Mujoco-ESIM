import mujoco
import mujoco_viewer
import os
import time
import numpy as np
import itertools

# parameter
test_camera_on = False
camera_id = 0
overlay_on = True
save_path = "/home/palinauskas/Documents/mujoco-eleanor/img"
save_path_original = save_path + "/original/seq0/imgs"
save_path_subtracted = save_path + "/subtracted/seq0/imgs"
save_path_events = save_path + "/events/seq0/imgs"
xml_path = 'kuka/envs/assets/full_kuka_INRC3_camera.xml'




model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)

t_0 = time.time()
t = 0

t_list = []
# while (True):
while (t < 3) or test_camera_on:
    if not test_camera_on:
        # viewer.capture_frame(camera_id, path=save_path_original)
        viewer.capture_event_prototype(camera_id, path=save_path_subtracted)
        viewer.render(overlay_on=False)
    else:
        viewer.render(overlay_on=overlay_on)
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)
    # print(data.qpos)
    t = time.time() - t_0
    # t_list.append(t)
    print(t)

# dt_list = list(itertools.accumulate(t_list, lambda x, y: y - x))
# dt_list = [y - x for x, y in zip(t_list[:-1], t_list[1:])]

# print("dt_list", dt_list)

# print("fps", len(dt_list)/sum(dt_list))