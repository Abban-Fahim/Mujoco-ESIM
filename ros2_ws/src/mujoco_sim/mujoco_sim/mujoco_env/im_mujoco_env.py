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

        self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data)
        self.viewer.init_esim(contrast_threshold_negative=1.7, contrast_threshold_positive=1.7, refractory_period_ns=100)

    def loop(self, capture_events_enable=False, save_events=False, capture_frames_enable=False, save_frames=False, save_path="/temp"):
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
            events_img, events = out
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
        r = 0.02
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