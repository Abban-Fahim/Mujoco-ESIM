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

## Run the code

On the repository root directory run

python /kuka/*desired_experiment*

For instance the cartesian impedance controller for the PegInHole task:

python /kuka/PegInHole_CIC.py


(The folder examples has additional examples for guidance on implementing new functions).

You are ready to create and adapt new experiments, components and controllers :) 
