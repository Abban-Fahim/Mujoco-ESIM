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
import os, sys
import time
import numpy as np
import itertools

from ..utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, quat2Vel, quat2Mat, quat2eul
from ..utils.read_cfg import get_mjc_xml
from ..controllers.full_impedance_controller import FullImpedanceController
import rclpy

class EsimMujoco:

    def __init__(self, init_pose, err_limit, des_pose) -> None:
        

        # parameter
        self.cp = 0.5
        self.cn = 0.1

        self.simulation_time = 1000
        self.sim_steps = 10
        self.test_camera_on = False
        self.camera_id = 1 # 1 - for mounted camera, 0 - for floating camera
        self.overlay_on = True

        # self.model = mujoco.MjModel.from_xml_path(self.xml_path)
        self.model = mujoco.MjModel.from_xml_path(get_mjc_xml())
        self.data = mujoco.MjData(self.model)
        self.controller = FullImpedanceController(self.model, self.data, stiffness=np.array([1000.0, 1000.0, 1000.0, 1000.3, 1000.3, 1000.3]), damping = np.array([50.0, 50.0, 50.0, 50.3, 50.3, 50.3]))

        # init first position
        self.data.qpos = init_pose

        self.err_limit = err_limit # error before accepting the pose
        self.des_pose = des_pose # goal pose

        self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data, headless=False, render_every_frame=True, running_events=False)
        self.viewer.init_esim(contrast_threshold_negative=0.9, contrast_threshold_positive=0.9, refractory_period_ns=100)

    def loop(self, capture_events_enable=False, save_events=False, capture_frames_enable=False, save_frames=False, save_pose=False, save_path="/temp"):
        self.viewer.render(overlay_on=False)

        # mounted view
        # self.viewer.change_camera(self.camera_id)

        # first output
        raw_img = None
        if capture_frames_enable:
            raw_img = self.viewer.capture_frame(self.camera_id, save_it=save_frames, path=save_path)

        # second output
        # generate events
        out = None
        if capture_events_enable:
            timestamp = self.data.time         
            out = self.viewer.capture_event(self.camera_id, timestamp, save_it=save_events, path=save_path)

            
            
        if out is not None:
            events_img, events, num_events = out
            # save current camera pose
            if save_pose:
                image_idx = self.viewer._image_idx
                self.write_camera_pose(image_idx, save_path=save_path)
        else:
            events_img, events = None, None

        

        # set goal pose
        self.controller.set_action(self.des_pose)

        torque = self.controller.get_torque()
        self.data.ctrl[:] = torque
        # self.data.ctrl[:] = np.clip(torque, -300, 300)
        #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
        
        mujoco.mj_step(self.model, self.data)

        return raw_img, events_img, events, 

    def set_des_pose(self, des_pose, des_vel=np.array([0,0,0,0,0,0])):
        self.des_pose = des_pose
        self.des_vel = des_vel
        self.controller.set_action(self.des_pose, self.des_vel)

    def position_err(self):
        return np.linalg.norm(self.controller.pose_error()[:3])

    def is_position_reached(self):
        if self.err_limit < self.position_err():
            return False
        else:
            return True

    def get_camera_pose(self):
        # get camera offset
        cam_id = mujoco.mj_name2id(self.model, mujoco.mjtObj.mjOBJ_CAMERA, "mounted_camera")
        pos_offset = self.model.cam_pos0[cam_id]
        mat_offset = self.model.cam_mat0[cam_id]
        quat_offset = mat2Quat(np.array(mat_offset))

        # get end-effector pose
        pos, quat = self.controller._fk()

        # get camera pose
        cam_pos = pos + pos_offset
        cam_quat = quatAdd(quat, quat2Vel(quat_offset))

        return cam_pos, cam_quat

    def write_camera_pose(self, image_idx, save_path="/temp"):
        pose = self.get_camera_pose()
        
        with open(save_path + "/positions.txt", "a") as f:
            f.write(str(image_idx) +  "   " + np.array2string(pose[0]) + np.array2string(pose[1]) + "\n")

        
    def circular_pose(self, t, start_pose):
        r = 0.02
        w = 10

        offset = np.zeros(3)
        offset[0] = r * np.sin(w*t)
        offset[1] = r * np.cos(w*t)
        offset[2] = 0

        speed = np.zeros(6)
        speed[0] = w * r * np.cos(w*t)
        speed[1] = - w * r * np.sin(w*t)
        speed[2] = 0

        return self.offset_pose(start_pose, offset), speed
        
    def random_circular_pose(self, t, start_pose):
        rng = np.random.default_rng(int(time.time()))
        tt = rng.random() * 2 * np.pi 
        r = 0.1
        w = 10

        offset = np.zeros(3)
        offset[0] = r * np.sin(w*tt)
        offset[1] = r * np.cos(w*tt)
        offset[2] = 0

        return self.offset_pose(start_pose, offset)

    def offset_pose(self, start_pose, offset):
        pose = start_pose.copy()
        pose[:3] += offset
        
        return pose

        # return np.append(rand_pos, current_eul)