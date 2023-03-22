from quaternion import *
from scipy.spatial.transform import Rotation as R


dr = np.array([3.14, 0, 0], dtype=np.float64)
quat_set = quatAdd(np.array([1., 0., 0., 0.]), dr)
nquat_set = eul2quat(dr)


drr = np.array([3.14, 1.57, 0], dtype=np.float64)
quat = quatAdd(np.array([1., 0., 0., 0.]), drr)
nquat =  eul2quat(drr)

dr = subQuat(quat_set, quat) 
print("quat_set", quat_set)
print("nquat_set", nquat_set)
print("quat", quat)
print("nquat", nquat)

print("dr", dr)