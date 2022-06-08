import mujoco
import mujoco_viewer
import os
import time
import numpy as np
from controllers.cartisian_pd_controller import CartisianPDController
from utils.read_cfg import get_mjc_xml, get_cposes, get_jposes, get_cerr_lim

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)
viewer = mujoco_viewer.MujocoViewer(model, data)
# for elastic
# controller = CartisianPDController(model, data, kp=np.array([100, 100, 100, 10, 10, 10]), kd=np.array([0.1, 0.1, 0.1, 0.01, 0.01, 0.01, 0.01]))
# for visco-elastic
# controller = CartisianPDController(model, data, kp=np.array([200, 200, 200, 10, 10, 10]), kd=np.array([1, 1, 1, 0.1, 0.1, 0.1]))
# for visco-elastic with null space projections
# controller = CartisianPDController(model, data, kp=np.array([4, 4, 4, 4, 4, 4]), kd=np.array([0.1, 0.1, 0.1, 0.1, 0.1, 0.1]))
controller = CartisianPDController(model, data, kp=np.array([3, 3, 3, 50, 50, 50]), kd=np.array([0.001]))



# init first position
jposes = get_jposes()
data.qpos = jposes["HOME_Q"]

poses = get_cposes()

# viapoints = ["INSERTION", "APPROACH",  "HOME"]
viapoints = ["APPROACH"]
viapoint = viapoints.pop()


t = data.time
err_limit = get_cerr_lim()

while (True):
    viewer.render()

    controller.set_action(poses[viapoint])

    # viapoint change when the last viapoint is reached
    err = np.linalg.norm(controller.pose_error()[:3])
    if err_limit > err  and viapoints:
        viapoint = viapoints.pop()

    controller.set_action(poses[viapoint])
    torque = controller.get_torque()
    # data.ctrl[:] = np.clip(torque, -300, 300)
    #self.sim.data.qfrc_applied[:] = self._get_random_applied_force()
    
    mujoco.mj_step(model, data)
    t = data.time

    data.site("des_pose").xpos = poses[viapoint][:3]

    # print("timestamp:", t, viapoints)
    # print("error", err)
    # print("Current viapoint", viapoint)
    # print("Joint Values:", data.qpos)
    # print("Torques:", torque)
    # print("Actions:", data.ctrl)
    