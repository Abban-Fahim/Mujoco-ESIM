import mujoco
import mujoco_viewer
import os
import time
import numpy as np
from controllers.pd_controller_copy import PDController
from controllers.inverse_dynamics_controller_copy import InverseDynamicsController

#xml_path = 'gym-kuka-mujoco/gym_kuka_mujoco/envs/assets/full_peg_insertion_experiment.xml'
#xml_path = 'kuka/envs/assets/full_kuka_no_collision.xml'
xml_path = 'kuka/envs/assets/full_kuka_INRC3.xml'
model = mujoco.MjModel.from_xml_path(xml_path)
data = mujoco.MjData(model)

print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)
controller=InverseDynamicsController(model, data, kp_id=100, model_path="full_kuka_INRC3.xml")

TEST = np.array(np.deg2rad([-10,0,0,0,0,0,0]))
HOME = np.array(np.deg2rad([-90,0,0,90,0,-90,0]))
ROBOT_HOME = np.array(np.deg2rad([-90,0,0,90,0,-90,0]))
APPROACH = np.array(np.deg2rad([-96.20, -40.67, 0, 76.07, 0, -63.29, -6.28]))
INSERTION = np.array(np.deg2rad([-94.99, -41.79, 0, 77.17, 0,-61.03, -5.01]))

poses = {"INSERTION":INSERTION, "APPROACH":APPROACH, "ROBOT_HOME":ROBOT_HOME,  "HOME":HOME}

viapoints = ["INSERTION", "APPROACH", "ROBOT_HOME", "HOME"]
viapoint = viapoints.pop()

t = data.time
err_limit = 0.1

while (True):
    viewer.render()

    # viapoint change when the last viapoint is reached
    err = np.linalg.norm(poses[viapoint] - data.qpos)
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
    