from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mujoco_sim',
            namespace='mj_sim_0',
            executable='impedance_controller_server',
            name='sim'
        ),
    ])