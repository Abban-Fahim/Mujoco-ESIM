import mujoco
import mujoco_viewer
import os, sys
import time
import numpy as np
import itertools
from scipy.spatial.transform import Rotation as R

from ..utils.quaternion import identity_quat, subQuat, quatAdd, mat2Quat, quat2Vel, quat2Mat
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
        self.controller = FullImpedanceController(self.model, self.data, stiffness=np.array([1000.0, 1000.0, 1000.0, 1000.3, 1000.3, 1000.3]), damping = np.array([50.0, 50.0, 50.0, 50.3, 50.3, 50.3]))

        # init first position
        self.data.qpos = init_pose

        self.err_limit = err_limit # error before accepting the pose
        self.des_pose = des_pose # goal pose

        self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data)
        self.viewer.init_esim(contrast_threshold_negative=1.7, contrast_threshold_positive=1.7, refractory_period_ns=100)

    def loop(self):
        self.viewer.render(overlay_on=False)

        # generate events
        # timestamp = self.data.time        
        # out = self.viewer.capture_event(self.camera_id, timestamp, save_it=False)
        # if out is not None:
        #     events_img, events = out
        # else:
        #     events_img, events = None, None
        events_img, events = None, None

        # set goal pose
        self.controller.set_action(self.des_pose)

        torque = self.controller.get_torque()
        # self.data.ctrl[:] = np.clip(torque, -300, 300)
        self.data.ctrl[:] = torque
        #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
        
        mujoco.mj_step(self.model, self.data)

        return events_img, events

    def set_des_pose(self, des_pose, des_vel=None):
        self.des_pose = des_pose
        if des_vel is None:
            self.controller.set_action(self.des_pose)
        else:
            self.des_vel = des_vel
            self.controller.set_action(self.des_pose, self.des_vel)
            print("env - ", self.des_vel)

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
        pos, quat = self.controller.fk()

        # get camera pose
        cam_pos = pos + pos_offset
        cam_quat = quatAdd(quat, quat2Vel(quat_offset))

        return cam_pos, cam_quat
        
    def circular_pose(self, t, current_pose):
        r = 0.02
        w = 30

        offset = np.zeros(3)
        offset[0] = r * np.sin(w*t)
        offset[1] = r * np.cos(w*t)
        offset[2] = 0

        speed = np.zeros(6)
        speed[0] = w * r * np.cos(w*t)
        speed[1] = - w * r * np.sin(w*t)
        speed[2] = 0

        return self.offset_pose(current_pose, offset), speed

    def random_circular_pose(self, t, current_pose):
        rng = np.random.default_rng(int(time.time()))
        print(rng.random())
        tt = rng.random() * 2 * np.pi 
        r = 0.02
        w = 15

        offset = np.zeros(3)
        offset[0] = r * np.sin(w*tt)
        offset[1] = r * np.cos(w*tt)
        offset[2] = 0

        return self.offset_pose(current_pose, offset)

    def offset_pose(self, current_pose, offset):
        current_pos, current_quat = current_pose


        rand_pos = np.zeros_like(current_pos)
        for i in range(3):
            rand_pos[i] = current_pos[i] + offset[i]

        current_mat = quat2Mat(current_quat)
        current_eul = R.from_matrix(current_mat.reshape(3,3)).as_euler('xyz')

        return np.append(rand_pos, current_eul)