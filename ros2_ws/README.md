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
- `ros2 run mujoco_sim impedance_controller_server`

## Sending goal poses to the action server

Possible goal poses are are defined as ROS2 parameters and can be view with:
- `ros2 param list`

Sending a request to the DesiredPoseName action server example
- `ros2 action send_goal /desired_pose_name_topic controller_interface/action/DesiredPoseName "{des_pose_name: "LOOK"}"`
- `ros2 action send_goal --feedback /desired_pose_name_topic controller_interface/action/DesiredPoseName "{des_pose_name: "LOOK"}"`

Sending a request to the Saccades action server example
- `ros2 action send_goal --feedback /saccades_topic controller_interface/action/Saccades "{duration: 100.0}"`

Sending a request to the Random Saccades action server example
- `ros2 action send_goal --feedback /random_saccades_topic controller_interface/action/Saccades "{duration: 100.0}"`

## ROS2 structure

impedance_controller_server_node:
- Subscribers:

- Publishers: \
    /camera_events_topic: camera_event_data_interface/msg/CameraEvents \
    /tf: tf2_msgs/msg/TFMessage

- Service Servers: \
    /impedance_controller_server_node

- Service Clients:

- Action Servers: \
    /desired_pose_name_topic: controller_interface/action/DesiredPoseName

- Action Clients:


