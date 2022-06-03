import mujoco
import mujoco_viewer
import os
import time
import numpy as np
from controllers.cartisian_pd_controller import CartisianPDController
from utils.read_cfg import get_mjc_xml, get_jposes, get_jerr_lim

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)
controller = CartisianPDController(model, data)

print(data.qpos)

poses = get_jposes()

viapoints = ["INSERTION_Q", "APPROACH_Q", "ROBOT_HOME_Q",  "HOME_Q"]
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
    