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
import time
import numpy as np
import yaml
from yaml.loader import SafeLoader
import sys,os
from utils.read_cfg import get_mjc_xml
from math import sin, cos

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)

print(data.qpos)

t = data.time

# kuka_link_1 pos="0 0 0.1575"
# kuka_link_2 pos="0 0 0.2025"
# kuka_link_3 pos="0 0.2045 0"
# kuka_link_4 pos="0 0 0.2155"
# kuka_link_5 pos="0 0.1845 0"
# kuka_link_6 pos="0 0 0.2155"
# kuka_link_7 pos="0 0.081 0"

def fk7(qpos):
    tt1, tt2, tt3, tt4, tt5, tt6, tt7 = qpos
    d0 = 0.1575
    d1 = 0.2025
    d3 = 0.2045 + 0.2155
    d5 = 0.1845 + 0.2155
    d71 = 0.081

    x = d3*sin(tt2)*cos(tt1) + d5*(-(-sin(tt1)*sin(tt3) + cos(tt1)*cos(tt2)*cos(tt3))*sin(tt4) + sin(tt2)*cos(tt1)*cos(tt4)) + d71*((((-sin(tt1)*sin(tt3) + cos(tt1)*cos(tt2)*cos(tt3))*cos(tt4) + sin(tt2)*sin(tt4)*cos(tt1))*cos(tt5) + (-sin(tt1)*cos(tt3) - sin(tt3)*cos(tt1)*cos(tt2))*sin(tt5))*sin(tt6) - ((-sin(tt1)*sin(tt3) + cos(tt1)*cos(tt2)*cos(tt3))*sin(tt4) - sin(tt2)*cos(tt1)*cos(tt4))*cos(tt6))

    y = d3*sin(tt1)*sin(tt2) + d5*(-(sin(tt1)*cos(tt2)*cos(tt3) + sin(tt3)*cos(tt1))*sin(tt4) + sin(tt1)*sin(tt2)*cos(tt4)) + d71*((((sin(tt1)*cos(tt2)*cos(tt3) + sin(tt3)*cos(tt1))*cos(tt4) + sin(tt1)*sin(tt2)*sin(tt4))*cos(tt5) + (-sin(tt1)*sin(tt3)*cos(tt2) + cos(tt1)*cos(tt3))*sin(tt5))*sin(tt6) - ((sin(tt1)*cos(tt2)*cos(tt3) + sin(tt3)*cos(tt1))*sin(tt4) - sin(tt1)*sin(tt2)*cos(tt4))*cos(tt6))

    z = d0 + d1 + d3*cos(tt2) + d5*(sin(tt2)*sin(tt4)*cos(tt3) + cos(tt2)*cos(tt4)) + d71*(((-sin(tt2)*cos(tt3)*cos(tt4) + sin(tt4)*cos(tt2))*cos(tt5) + sin(tt2)*sin(tt3)*sin(tt5))*sin(tt6) - (-sin(tt2)*sin(tt4)*cos(tt3) - cos(tt2)*cos(tt4))*cos(tt6))
    return np.array([x, y, z])

name = "fk7"
body_id = mujoco.mj_name2id(model, mujoco.mjtObj.mjOBJ_BODY, name)


print(body_id, model.body_pos[body_id])
# print(mujoco.mj_id2name(model, mujoco.mjtObj.mjOBJ_BODY, 0))


while (True):
    viewer.render()

    model.body_pos[body_id][:3] = fk7(data.qpos)
    
    x=100*np.sin(t)
    torque=np.ones(7)*x
    data.ctrl[:] = np.clip(torque, -300, 300)
    mujoco.mj_step(model, data)

    # print(data.qpos)
    t = data.time