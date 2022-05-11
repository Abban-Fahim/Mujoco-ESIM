# MuJoCo simulation for robotic insertion task

This repo includes a simulation of the KUKA light weight robot for object insertion either based on force torque feedback (INRC3-tagged experiments) or visual feedback (default or ELEANOR-tagged experiments)

## Install

Clone the repo

- git clone https://git.fortiss.org/neuromorphic-computing/inrc3/mujoco-eleanor.git

And then checkout the desired branch.

- git checkout *desired-branch*

First install all the required libraries in a virtual env

- python -m venv MujocoEleanor

Activate the environment

- source *path-to-venv*/bin/activate

Install all the requirements before testing the code

- pip install -r requirements.txt
- install modified mujoco-python-viewer from https://github.com/gintautas12358/mujoco-python-viewer/blob/event-camera/mujoco_viewer/mujoco_viewer.py
- install esim  on conda from https://github.com/uzh-rpg/rpg_vid2e
(esim_py install error is resolved by installing installing opencv and cuda normaly on the machine)
(esim_torch intalll error is resolved via https://github.com/uzh-rpg/rpg_vid2e/issues/44#issuecomment-1123224724)

## Run the code

On the repository root directory run

python /kuka/*desired_experiment*

For instance the cartesian impedance controller for the PegInHole task:

python /kuka/PegInHole_CIC.py


(The folder examples has additional examples for guidance on implementing new functions).

You are ready to create and adapt new experiments, components and controllers :) 
