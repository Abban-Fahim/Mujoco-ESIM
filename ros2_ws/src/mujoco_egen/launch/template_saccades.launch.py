from launch_ros.actions import Node

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression


def generate_launch_description():
    name = LaunchConfiguration('name')
    namespace = LaunchConfiguration('namespace')
    new_saccade_duration = LaunchConfiguration('new_saccade_duration')

    name_launch_arg = DeclareLaunchArgument(
        'name',
        default_value='egen'
    )

    namespace_launch_arg = DeclareLaunchArgument(
        'namespace',
        default_value='mj_egen_0'
    )

    new_saccade_duration_launch_arg = DeclareLaunchArgument(
        'new_saccade_duration',
        default_value='0.5'
    )
    
    start_saccading = ExecuteProcess(
        cmd=[[
            'ros2 action send_goal ',
            namespace,
            '/saccades_topic ',
            'controller_interface/action/Saccades ',
            '"{duration: ',
            new_saccade_duration,
            '}"'
        ]],
        shell=True
    )

    return LaunchDescription([
        name_launch_arg,
        namespace_launch_arg,
        new_saccade_duration_launch_arg,
        start_saccading      
    ])