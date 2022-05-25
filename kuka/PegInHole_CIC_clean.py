import mujoco
import mujoco_viewer
import os
import time
import numpy as np
from controllers.full_impedance_controller_copy_clean import FullImpedanceController
from utils.read_cfg import get_mjc_xml, get_jposes, get_cposes, get_cerr_lim

from utils.kinematics import current_ee_position

model = mujoco.MjModel.from_xml_path(get_mjc_xml())
data = mujoco.MjData(model)

# print(data.qpos)

viewer = mujoco_viewer.MujocoViewer(model, data)
controller = FullImpedanceController(model, data, model_path="full_kuka_INRC3.xml") #TODO model_path should be reletive to root dir



# init first position
jposes = get_jposes()
data.qpos = jposes["HOME_Q"]

poses = get_cposes()

viapoints = ["INSERTION", "APPROACH",  "HOME"]
viapoint = viapoints.pop()


t = data.time
err_limit = get_cerr_lim()

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
    