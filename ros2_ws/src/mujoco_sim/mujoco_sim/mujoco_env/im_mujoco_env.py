import mujoco
import mujoco_viewer
import os, sys
import time
import numpy as np
import itertools

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
        self.xml_path = '/home/palinauskas/Documents/mujoco-eleanor/ros2_ws/src/mujoco_sim/mujoco_sim/kuka/full_kuka_INRC3_mounted_camera.xml'
        # self.xml_path = '../kuka/full_kuka_INRC3_mounted_camera.xml'


        self.model = mujoco.MjModel.from_xml_path(self.xml_path)
        self.data = mujoco.MjData(self.model)
        self.controller = FullImpedanceController(self.model, self.data)

        # init first position
        self.data.qpos = init_pose

        self.err_limit = err_limit # error before accepting the pose
        self.des_pose = des_pose # goal pose

        self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data)
        self.viewer.init_esim(contrast_threshold_negative=1.7, contrast_threshold_positive=1.7, refractory_period_ns=100)

    def loop(self):
        self.viewer.render(overlay_on=False)

        # generate events
        timestamp = self.data.time        
        out = self.viewer.capture_event(self.camera_id, timestamp, save_it=False)
        if out is not None:
            _, events = out
        else:
            events = None

        # set goal pose
        self.controller.set_action(self.des_pose)

        torque = self.controller.get_torque()
        self.data.ctrl[:] = np.clip(torque, -300, 300)
        #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
        
        mujoco.mj_step(self.model, self.data)

        return events

    def set_des_pose(self, des_pose):
        self.des_pose = des_pose
        self.controller.set_action(self.des_pose)

    def position_err(self):
        return np.linalg.norm(self.controller.pose_error()[:3])

    def is_position_reached(self):
        if self.err_limit < self.position_err():
            return False
        else:
            return True