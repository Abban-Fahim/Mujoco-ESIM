from launch_ros.actions import Node

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression


def generate_launch_description():
    namespace = LaunchConfiguration('namespace')
    new_desired_pose_name = LaunchConfiguration('new_desired_pose_name')
    
    namespace_launch_arg = DeclareLaunchArgument(
        'namespace',
        default_value='mj_sim_0'
    )

    new_desired_pose_name_launch_arg = DeclareLaunchArgument(
        'new_desired_pose_name',
        default_value='"USB"'
    )

    set_desired_pose_name = ExecuteProcess(
        cmd=[[
            'ros2 action send_goal /',
            namespace,
            '/desired_pose_name_topic ',
            'controller_interface/action/DesiredPoseName ',
            # '"{des_pose_name: "USB"}"',
            '"{des_pose_name: "',
            new_desired_pose_name,
            '"}"'
        ]],
        shell=True
    )

    return LaunchDescription([
        namespace_launch_arg,
        new_desired_pose_name_launch_arg,
        set_desired_pose_name,
    ])