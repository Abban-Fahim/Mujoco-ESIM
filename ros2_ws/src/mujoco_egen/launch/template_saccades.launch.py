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
    
    # enable_frames = ExecuteProcess(
    #     cmd=[[
    #         'ros2 param set ',
    #         '/',
    #         namespace,
    #         '/',
    #         name,
    #         ' capture_frames_enable ',
    #         'True'
    #     ]],
    #     shell=True
    # )

    # enable_events = ExecuteProcess(
    #     cmd=[[
    #         'ros2 param set ',
    #         '/',
    #         namespace,
    #         '/',
    #         name,
    #         ' capture_events_enable ',
    #         'True'
    #     ]],
    #     shell=True
    # )

    # enable_save_frames = ExecuteProcess(
    #     cmd=[[
    #         'ros2 param set ',
    #         '/',
    #         namespace,
    #         '/',
    #         name,
    #         ' save_frames ',
    #         'True'
    #     ]],
    #     shell=True
    # )

    # enable_save_events = ExecuteProcess(
    #     cmd=[[
    #         'ros2 param set ',
    #         '/',
    #         namespace,
    #         '/',
    #         name,
    #         ' save_events ',
    #         'True'
    #     ]],
    #     shell=True
    # )

    # enable_save_camera_pose = ExecuteProcess(
    #     cmd=[[
    #         'ros2 param set ',
    #         '/',
    #         namespace,
    #         '/',
    #         name,
    #         ' save_pose ',
    #         'True'
    #     ]],
    #     shell=True
    # )

    start_saccading = ExecuteProcess(
        cmd=[[
            'ros2 action send_goal ',
            namespace,
            '/random_saccades_topic ',
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
        # enable_save_frames,
        # enable_save_events,
        # enable_save_camera_pose,
        # enable_frames,
        # enable_events,
        TimerAction(
            period=2.0,
            actions=[start_saccading],
        )
        
    ])