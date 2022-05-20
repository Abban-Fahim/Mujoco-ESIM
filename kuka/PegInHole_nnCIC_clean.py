import mujoco
import mujoco_viewer
import os
import time
import numpy as np
#from controllers.pd_controller_copy import PDController
from controllers.full_impedance_controller_no_nullspace_copy import FullImpedanceController

from utils.kinematics import current_ee_position

#xml_path = 'gym-kuka-mujoco/gym_kuka_mujoco/envs/assets/full_peg_insertion_experiment.xml'
#xml_path = 'kuka/envs/assets/full_kuka_no_collision.xml'
xml_path = 'kuka/envs/assets/full_kuka_INRC3.xml'
#xml_path = 'kuka/envs/assets/full_kuka_mesh_collision.xml'
model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

# print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)
controller=FullImpedanceController(model, data, model_path="full_kuka_INRC3.xml")

TEST_Q = np.array(np.deg2rad([-10,0,0,0,0,0,0]))
HOME_Q = np.array(np.deg2rad([-90,0,0,90,0,-90,0]))
ROBOT_HOME_Q = np.array(np.deg2rad([-90,0,0,90,0,-90,0]))
APPROACH_Q = np.array(np.deg2rad([-96.20, -40.67, 0, 76.07, 0, -63.29, -6.28]))
INSERTION_Q = np.array(np.deg2rad([-94.99, -41.79, 0, 77.17, 0,-61.03, -5.01]))

#HOME=[0.6,0,0.5,0,0,0]
#HOME=[0.0,0.8,0.4, np.deg2rad(180),0,np.deg2rad(90)]
#HOME=[0.0,0.8,0.4, 180, 0, 90]
#HOME=[0.0,0.7,0.35, -np.deg2rad(0), -np.deg2rad(180), -np.deg2rad(0)]
HOME = np.array([0.0,0.4,0.65, np.deg2rad(180), -np.deg2rad(0), np.deg2rad(0)])
APPROACH = np.array([0.0,0.65,0.45, np.deg2rad(180), -np.deg2rad(0), np.deg2rad(0)])
INSERTION = np.array([-0.20,0.65,0.15, np.deg2rad(180), -np.deg2rad(0), np.deg2rad(0)])

data.qpos[:] = HOME_Q

poses = {"INSERTION":INSERTION, "APPROACH":APPROACH, "ROBOT_HOME":ROBOT_HOME_Q,  "HOME":HOME}

viapoints = ["INSERTION", "HOME"]
viapoint = viapoints.pop()


t = data.time
err_limit = 0.1

while (True):
    viewer.render()

    # viapoint change when the last viapoint is reached
    viapoint_position = poses[viapoint][:3]
    err = np.linalg.norm(viapoint_position - current_ee_position(model, data))
    if err_limit > err  and viapoints:
        viapoint = viapoints.pop()

    controller.set_action(poses[viapoint])
    torque = controller.get_torque()
    data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    
    mujoco.mj_step(model, data)
    t = data.time

    print("timestamp:", t, viapoints)
    print("error", err)
    print("Current viapoint", viapoint)
    print("Joint Values:", data.qpos)
    print("Torques:", torque)
    print("Actions:", data.ctrl)
    