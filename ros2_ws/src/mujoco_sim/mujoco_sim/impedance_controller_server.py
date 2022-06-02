import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from controller_interface.action import DesiredPoseName
from camera_event_data_interface.msg import CameraEvents
from .mujoco_env.im_mujoco_env import EsimMujoco
from .utils.read_cfg import get_cposes, get_jposes, get_cerr_lim

import numpy as np
import time


class ImControllerActionServer(Node):

    def __init__(self):
        super().__init__('impedance_controller_server_node')

        # action server is created
        self._action_server = ActionServer(
            self,
            DesiredPoseName,
            'desired_pose_topic',
            self.execute_callback)

        # Publisher is created
        self.publisher_ = self.create_publisher(CameraEvents, 'camera_events_topic', 10)
        timer_period = 1.0/60  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        # Publish parameters to ROS2
        self.init_params()

        # get parameters from ROS2
        init_pose = np.array(self.get_parameter('HOME_Q').get_parameter_value().double_array_value)
        err_limit = self.get_parameter('cerr_limit').get_parameter_value().double_value
        des_pose = np.array(self.get_parameter('HOME').get_parameter_value().double_array_value)

        # Create MuJoCo environment
        self.mj = EsimMujoco(init_pose, err_limit, des_pose)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # get goal pose name
        des_pose_name = goal_handle.request.des_pose_name

        # set goal pose
        des_pose = np.array(self.get_parameter(des_pose_name).get_parameter_value().double_array_value)
        self.mj.set_des_pose(des_pose)

        # run one mj loop for the changes to take effect
        self.timer_callback()

        # create action messages
        feedback_msg = DesiredPoseName.Feedback()
        result_msg = DesiredPoseName.Result()

        # run mj loop until the robot reaches the goal pose
        while not self.mj.is_position_reached():
            self.timer_callback()

            # publish feedback
            feedback_msg.feedback_error = self.mj.position_err()
            goal_handle.publish_feedback(feedback_msg)

        # robot reached the goal pose 
        goal_handle.succeed()
        result_msg.error = feedback_msg.feedback_error

        return result_msg

    def init_params(self):
        # publish cartesian space poses to ROS2
        self.poses_dic = get_cposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())

        # publish joint space poses to ROS2
        self.poses_dic = get_jposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())
        
        # publish cartesian error limit
        self.declare_parameter("cerr_limit", get_cerr_lim())

    def timer_callback(self):
        # publishes events to ROS2 topic
        msg = CameraEvents()
        events = self.mj.loop()
        if self.fill_msg_with_events(msg, events):
            self.publisher_.publish(msg)

    def fill_msg_with_events(self, msg, events):
        log_start = "Publishing: "
        log_amount = "amount of events-"
        if events is not None:
            # if there are some events
            log_input = f'{events["x"].shape[0]}'
            self.get_logger().info(log_start + log_amount + log_input) 
            msg.x = events["x"].tolist()
            msg.y = events["y"].tolist()
            msg.t = events["t"].tolist()
            msg.p = events["p"].tolist()
            return True
        else:
            # if no events
            log_input = f'{0}'
            self.get_logger().info(log_start + log_amount + log_input)
            return False

def main(args=None):
    rclpy.init(args=args)

    controller_action_server = ImControllerActionServer()

    rclpy.spin(controller_action_server)


if __name__ == '__main__':
    main()