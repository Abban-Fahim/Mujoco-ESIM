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


import mujoco

def kuka_subtree_mass(model):
    body_names = ['kuka_link_{}'.format(i + 1) for i in range(7)]
    ## body_ids = [model.body_name2id(n) for n in body_names]
    body_ids = [mujoco.mj_name2id(model, mujoco.mjtObj.mjOBJ_BODY, n) for n in body_names]
    
    return model.body_subtreemass[body_ids]

def get_qpos_indices(model, joint_names):
    indices = []
    for name in joint_names:
        idx = model.get_joint_qpos_addr(name)
        if isinstance(idx, tuple):
            indices.extend(range(*idx))
        else:
            indices.append(idx)
    return indices

def get_qvel_indices(model, joint_names):
    indices = []
    for name in joint_names:
        idx = model.get_joint_qvel_addr(name)
        if isinstance(idx, tuple):
            indices.extend(range(*idx))
        else:
            indices.append(idx)
    return indices

def get_actuator_indices(model, actuator_names):
    return [model.actuator_name2id(name) for name in actuator_names]

def get_joint_indices(model, joint_names):
    return [model.joint_name2id(name) for name in joint_names]