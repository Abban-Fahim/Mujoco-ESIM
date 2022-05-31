# Esim MuJoCo simulation with ROS2

Uses Galactic Geochelone version with Ubuntu 20.04

## Install

folow the steps in https://docs.ros.org/en/galactic/Installation.html

## Build packages

All packages:
- `colcon build`

Only specific packages:
- `colcon build --packages-select mujoco_sim`

## Run mujoco_sim node

- `source /opt/ros/galactic/setup.bash`
- `. install/setup.bash `
- `ros2 run mujoco_sim mujoco_events`
