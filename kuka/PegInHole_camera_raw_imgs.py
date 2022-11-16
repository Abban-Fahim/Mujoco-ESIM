#
#BSD 3-Clause License
#
#
#
#Copyright 2022 fortiss, Neuromorphic Computing group
#
#
#All rights reserved.
#
#
#
#Redistribution and use in source and binary forms, with or without
#
#modification, are permitted provided that the following conditions are met:
#
#
#
#* Redistributions of source code must retain the above copyright notice, this
#
#  list of conditions and the following disclaimer.
#
#
#
#* Redistributions in binary form must reproduce the above copyright notice,
#
#  this list of conditions and the following disclaimer in the documentation
#
#  and/or other materials provided with the distribution.
#
#
#
#* Neither the name of the copyright holder nor the names of its
#
#  contributors may be used to endorse or promote products derived from
#
#  this software without specific prior written permission.
#
#
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#
#AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#
#IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
#
#FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#
#DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#


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
save_path = "/home/palinauskas/Documents/mujoco-eleanor/img"
save_path_original = save_path + "/original/seq0/imgs"
save_path_subtracted = save_path + "/subtracted/seq0/imgs"
save_path_events = save_path + "/events2/seq0/imgs"
xml_path = 'kuka/envs/assets/full_kuka_INRC3_mounted_camera.xml'


model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)

t_0 = time.time()
t = 0

step = 0
while (step < sim_steps) or test_camera_on:
    if not test_camera_on:
        viewer.render(overlay_on=False)
        viewer.capture_frame(camera_id, path=save_path_original)
    else:
        viewer.render(overlay_on=overlay_on)
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)
    t = time.time() - t_0
    step += 1
