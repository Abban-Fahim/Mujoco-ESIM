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
from controllers.joint_pd_controller import JointPDController
from utils.read_cfg import get_mjc_xml, get_jposes, get_jerr_lim

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)
controller = JointPDController(model, data, kp=np.array([200, 600, 200, 500, 50, 50, 0.5]), kd=np.array([40, 60, 5, 35, 5, 5, 0.01]))

poses = get_jposes()

data.qpos = poses["HOME_Q"]
print(data.qpos)

# viapoints = ["INSERTION_Q", "APPROACH_Q", "ROBOT_HOME_Q",  "HOME_Q", "TEST_Q", "INIT_Q"]
viapoints = ["TEST_Q", "APPROACH_Q", "HOME_Q"]
viapoint = viapoints.pop()

t = data.time
err_limit = get_jerr_lim()

while (True):
    viewer.render()

    # viapoint change when the last viapoint is reached
    err = np.linalg.norm(controller.joint_error())
    if err_limit > err  and viapoints:
        viapoint = viapoints.pop()

    controller.set_action(poses[viapoint])
    # data.site("des_pose").xpos = poses[viapoint][:3]
    # print("des_pose", data.site("des_pose").xpos)
    torque = controller.get_torque()
    # data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    mujoco.mj_step(model, data)
    t = data.time

    # data.site("des_pose").xpos = [0.06823274, 0.62719928, 0.36782649]
    # data.site("des_pose").xmat = [2.42251520e-05,  7.07545557e-01, -7.06667732e-01,  4.17127271e-05]
    # print("des_pose", data.site("des_pose").xpos)

    # print("timestamp:", t, viapoints)
    # print("error", err)
    # print("Current viapoint", viapoint)
    # print("Joint Values:", data.qpos)
    # print("Torques:", torque)
    # print("Actions:", data.ctrl)
    