from setuptools import setup

package_name = 'mujoco_sim'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name, 'mujoco_sim.controllers', 'mujoco_sim.utils', 'mujoco_sim.mujoco_env'],
    include_package_data=True,
    package_data={'mujoco_sim': ['cfg/cfg.yaml', 'kuka/meshes/*','kuka/*'],},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='palinauskas',
    maintainer_email='palinauskas@fortiss.org',
    description='Publishes ESIM events from MuJoCo simulation environment',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'simple_mujoco_events = mujoco_sim.simple_events_publisher:main',
            'mujoco_events = mujoco_sim.events_publisher:main',
            'im_mujoco = mujoco_sim.im_mujoco_server:main',
        ],
    },
)
