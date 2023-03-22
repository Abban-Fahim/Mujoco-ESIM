from launch_ros.actions import Node

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression


def generate_launch_description():
    name = LaunchConfiguration('name')
    namespace = LaunchConfiguration('namespace')

    name_launch_arg = DeclareLaunchArgument(
        'name',
        default_value='sim'
    )

    namespace_launch_arg = DeclareLaunchArgument(
        'namespace',
        default_value='mj_sim_0'
    )

    
    disenable_frames = ExecuteProcess(
        cmd=[[
            'ros2 param set ',
            '/',
            namespace,
            '/',
            name,
            ' capture_frames_enable ',
            'False'
        ]],
        shell=True
    )

    disenable_events = ExecuteProcess(
        cmd=[[
            'ros2 param set ',
            '/',
            namespace,
            '/',
            name,
            ' capture_events_enable ',
            'False'
        ]],
        shell=True
    )

    disenable_save_frames = ExecuteProcess(
        cmd=[[
            'ros2 param set ',
            '/',
            namespace,
            '/',
            name,
            ' save_frames ',
            'False'
        ]],
        shell=True
    )

    disenable_save_events = ExecuteProcess(
        cmd=[[
            'ros2 param set ',
            '/',
            namespace,
            '/',
            name,
            ' save_events ',
            'False'
        ]],
        shell=True
    )

    disenable_save_camera_pose = ExecuteProcess(
        cmd=[[
            'ros2 param set ',
            '/',
            namespace,
            '/',
            name,
            ' save_pose ',
            'False'
        ]],
        shell=True
    )


    return LaunchDescription([
        name_launch_arg,
        namespace_launch_arg,
        disenable_save_frames,
        disenable_save_events,
        disenable_save_camera_pose,
        disenable_frames,
        disenable_events,

        
    ])