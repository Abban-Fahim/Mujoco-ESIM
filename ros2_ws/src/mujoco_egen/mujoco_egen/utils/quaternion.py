#
#BSD 3-Clause License
#
#
#
#Copyright 2022 fortiss, Neuromorphic Computing group
#
#
#All rights reserved.
#
#
#
#Redistribution and use in source and binary forms, with or without
#
#modification, are permitted provided that the following conditions are met:
#
#
#
#* Redistributions of source code must retain the above copyright notice, this
#
#  list of conditions and the following disclaimer.
#
#
#
#* Redistributions in binary form must reproduce the above copyright notice,
#
#  this list of conditions and the following disclaimer in the documentation
#
#  and/or other materials provided with the distribution.
#
#
#
#* Neither the name of the copyright holder nor the names of its
#
#  contributors may be used to endorse or promote products derived from
#
#  this software without specific prior written permission.
#
#
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#
#AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#
#IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
#
#FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#
#DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#


import numpy as np
import mujoco
from scipy.spatial.transform import Rotation as R

identity_quat = np.array([1., 0., 0., 0.])

def mat2Quat(mat):
    '''
    Convenience function for mju_mat2Quat.
    '''
    res = np.zeros(4)
    mujoco.mju_mat2Quat(res, mat.flatten())
    return res

def quat2Mat(quat):
    '''
    Convenience function for mju_quat2Mat.
    '''
    res = np.zeros(9)
    mujoco.mju_quat2Mat(res, quat)
    res = res.reshape(3,3)
    return res

def quat2Vel(quat):
    '''
    Convenience function for mju_quat2Vel.
    '''
    res = np.zeros(3)
    mujoco.mju_quat2Vel(res, quat, 1.)
    return res

def axisAngle2Quat(axis, angle):
    '''
    Convenience function for mju_quat2Vel.
    '''
    res = np.zeros(4)
    mujoco.mju_axisAngle2Quat(res, axis, angle)
    return res

def subQuat(qb, qa):
    '''
    Convenience function for mju_subQuat.
    '''
    # Allocate memory
    qa_t = np.zeros(4)
    q_diff = np.zeros(4)
    res = np.zeros(3)

    # Compute the subtraction
    mujoco.mju_negQuat(qa_t, qa)
    mujoco.mju_mulQuat(q_diff, qb, qa_t)
    mujoco.mju_quat2Vel(res, q_diff, 1.)

    # res2 = np.zeros(3)
    # mujoco.mju_subQuat(res2, qa, qb)
    # print("##  sub ##:", res,res2)

    return res

def mulQuat(qa, qb):
    res = np.zeros(4)
    mujoco.mju_mulQuat(res, qa, qb)
    return res

def random_quat():
    q = np.random.random(4)
    q = q/np.linalg.norm(q)
    return q

def quatIntegrate(q, v, dt=1.):
    res = q.copy()
    mujoco.mju_quatIntegrate(res,v,1.)
    return res

def quatAdd(q1, v):
    qv = quatIntegrate(identity_quat, v)
    res = mulQuat(qv, q1)
    return res

def rotVecQuat(v, q):
    res = np.zeros(3)
    mujoco.mju_rotVecQuat(res, v, q)
    return res

def quat2eul(q):
    mat = quat2Mat(q)
    # print("###", mat)
    q = R.from_matrix(mat.reshape(3,3)).as_euler('xyz')

    # l = ['xyz', 'zyx', 'zyz', 'zxz']
    # for a in l:
    #     print(a,  R.from_matrix(mat.reshape(3,3)).as_euler(a))

    # q = R.from_matrix(mat.reshape(3,3)).as_euler('xyz')
    # q = R.from_matrix(mat.reshape(3,3)).as_euler('zyx')
    # q = R.from_matrix(mat.reshape(3,3)).as_euler('zyz')
    # q = R.from_matrix(mat.reshape(3,3)).as_euler('xyz')

    return q

    
