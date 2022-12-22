from launch_ros.substitutions import FindPackageShare

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, TextSubstitution


def generate_launch_description():
    # setting saccade duration
    saccades = {
        'saccade_duration': 0.5
    }

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                PathJoinSubstitution([
                    FindPackageShare('mujoco_egen'),
                    'template_saccades.launch.py'
                ])
            ]),
            launch_arguments={
                'namespace': 'mj_egen_0',
                'new_saccade_duration': TextSubstitution(text=str(saccades['saccade_duration']))
            }.items()
        )
    ])