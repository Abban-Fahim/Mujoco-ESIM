import mujoco
import mujoco_viewer
import os
import time
import numpy as np
import itertools

class EsimMujoco:

    def __init__(self) -> None:
        pass

        # parameter
        self.cp = 0.5
        self.cn = 0.1


        self.simulation_time = 1000
        self.sim_steps = 10
        self.test_camera_on = False
        self.camera_id = 1
        self.overlay_on = True
        # save_path = "/home/palinauskas/Documents/mujoco-eleanor/img"
        # save_path_original = save_path + "/original/seq0/imgs"
        # save_path_subtracted = save_path + "/subtracted/seq0/imgs"
        # save_path_events = save_path + "/events_mujoco/seq0"
        self.xml_path = '/home/palinauskas/Documents/mujoco-eleanor/ros2_ws/src/mujoco_sim/resource/full_kuka_INRC3_mounted_camera.xml'


        self.model = mujoco.MjModel.from_xml_path(self.xml_path)
        self.data = mujoco.MjData(self.model)

        print(self.data.qpos)

        self.viewer = mujoco_viewer.MujocoViewer(self.model, self.data)
        self.viewer.init_esim(contrast_threshold_negative=1.7, contrast_threshold_positive=1.7, refractory_period_ns=100)

        self.t_0 = time.time()
        self.t = 0

        self.step = 0


    def loop(self):
        if not self.test_camera_on:
            self.viewer.render(overlay_on=False)

            timestamp = self.data.time        
            # print(timestamp)
            
            out = self.viewer.capture_event(self.camera_id, timestamp, save_it=False)
            if out is not None:
                _, events = out
            else:
                events = None
        else:
            self.viewer.render(overlay_on=self.overlay_on)
        
        x=100*np.sin(self.t)
        torque=np.ones(7)*x
        self.data.ctrl[:] = np.clip(torque, -300, 300)
        mujoco.mj_step(self.model, self.data)
        self.t = time.time() - self.t_0
        self.step += 1

        return events

