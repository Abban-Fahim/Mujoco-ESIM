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

import sys
import os
sys.path.append(os.getcwd())

import mujoco
import mujoco_viewer
import os
import time
import numpy as np
# from controllers.NullSpaceViscoElasticCartesianPDController import NullSpaceViscoElasticCartesianPDController
from kuka.utils.read_cfg import get_mjc_xml, get_jposes, get_cposes, get_cerr_lim, get_jerr_lim
from kuka.utils.kinematics import current_ee_position

from kuka.controllers.ElasticCartesianPDController import ElasticCartesianPDController
from kuka.pathPlanner.CubicPathPlanner import CubicPolyPathGenerator
import matplotlib.pyplot as plt

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)


viewer = mujoco_viewer.MujocoViewer(model, data)
controller = ElasticCartesianPDController(model, data)

planner = CubicPolyPathGenerator(6)

# init first position
jposes = get_jposes()
cposes = get_cposes()

data.qpos = jposes["HOME_Q"]

viapoints = ["TEST1", "LOOK", "TEST2", "LOOK","TEST1", "LOOK", "TEST2", "LOOK","TEST1", "LOOK", "TEST2", "HOME"]

viapoint = viapoints.pop()
poses = {}
poses.update(jposes)
poses.update(cposes)

last_viapoint = viapoint
path = planner.genPath(0, 1, poses[last_viapoint], poses[viapoint])
controller.set_action(poses[viapoint])


t = data.time
tt = t
err_limit = get_cerr_lim()

plot_data = []

speed = 3

while (True):
    viewer.render()

    # controller.set_action(poses[viapoint])
    pose = path.atTime(t)
    controller.set_action(pose)
    torque = controller.get_torque()
    
    mujoco.mj_step(model, data)
    t = data.time

    print(pose)

    # viapoint change when the last viapoint is reached
    error = controller.error()
    err_norm = np.linalg.norm(error)
    if err_limit > err_norm  and viapoints:
        last_viapoint = viapoint
        viapoint = viapoints.pop()
        tt = data.time
        path = planner.genPath(tt, tt+speed, poses[last_viapoint], poses[viapoint])
        print(last_viapoint, " -> ", viapoint)

    # print(t, tt, tt+10)
    # print("norm error", err_norm)
    # print("error", error)
    # print("Current viapoint", viapoint)
    # print("Joint Values:", data.qpos)

    

    # if t%1 < 0.004:
    #     plot_data.append(pose[0])
    #     plt.plot(plot_data)
    #     plt.pause(0.005)