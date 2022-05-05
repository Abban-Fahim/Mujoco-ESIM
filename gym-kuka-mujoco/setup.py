import os
from setuptools import setup, find_packages
from glob import glob

with open('requirements.txt') as f:
    required = f.read().splitlines()

setup(name='gym_kuka_mujoco',
      version='0.0.1',
      install_requires=required,
      packages=find_packages(),
      package_data={
          'gym_kuka_mujoco.envs.assets': [el for el in os.listdir("gym_kuka_mujoco/envs/assets") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.kuka': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/kuka") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.peg': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/peg") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.meshes': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/meshes") if ".stl" in el],
          'gym_kuka_mujoco.envs.assets.hammer': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/hammer") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.hole': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/hole") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.pushing': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/pushing") if ".xml" in el],
          'gym_kuka_mujoco.envs.assets.valve': [el for el in os.listdir("gym_kuka_mujoco/envs/assets/valve") if ".xml" in el],
      }
)

