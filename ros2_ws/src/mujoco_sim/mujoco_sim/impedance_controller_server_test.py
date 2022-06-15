from matplotlib import table
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from controller_interface.action import DesiredPoseName, Saccades
from camera_event_data_interface.msg import CameraEvents
from geometry_msgs.msg import TransformStamped
from sensor_msgs.msg import Image
from tf2_ros import TransformBroadcaster
from cv_bridge import CvBridge, CvBridgeError

from .mujoco_env.im_mujoco_env_test import EsimMujoco
from .utils.read_cfg import get_cposes, get_jposes, get_cerr_lim

import numpy as np
import time


class ImControllerActionServer(Node):

    def __init__(self):
        super().__init__('impedance_controller_server_node')

        # DesiredPoseName action server is created
        self._desired_pose_name_action_server = ActionServer(
            self,
            DesiredPoseName,
            'desired_pose_name_topic',
            self.desired_pose_callback)

        # Saccades action server is created
        self._action_server = ActionServer(
            self,
            Saccades,
            'saccades_topic',
            self.saccades_callback)

        # Random Saccades action server is created
        self._action_server = ActionServer(
            self,
            Saccades,
            'random_saccades_topic',
            self.random_saccades_callback)

        # Camera events Publisher is created
        self.events_publisher = self.create_publisher(CameraEvents, 'camera_events_topic', 10)
        timer_period = 1.0/60  # seconds
        self.timer = self.create_timer(timer_period, self.composed_callback)
        
        # Camera events Publisher is created
        self.transform_publisher = TransformBroadcaster(self)

        # Camera event image Publisher is created
        self.event_img_publisher = self.create_publisher(Image, 'camera_event_img_topic', 10)

        # Publish parameters to ROS2
        self.init_params()

        # get parameters from ROS2
        init_pose = np.array(self.get_parameter('HOME_Q').get_parameter_value().double_array_value)
        err_limit = self.get_parameter('cerr_limit').get_parameter_value().double_value
        des_pose = np.array(self.get_parameter('HOME').get_parameter_value().double_array_value)

        # Create MuJoCo environment
        self.mj = EsimMujoco(init_pose, err_limit, des_pose)

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

    def desired_pose_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        # get goal pose name
        des_pose_name = goal_handle.request.des_pose_name

        # set goal pose
        des_pose = np.array(self.get_parameter(des_pose_name).get_parameter_value().double_array_value)
        self.mj.set_des_pose(des_pose)

        # create action messages
        feedback_msg = DesiredPoseName.Feedback()
        result_msg = DesiredPoseName.Result()

        # run mj loop until the robot reaches the goal pose
        while not self.mj.is_position_reached():
            # run one mj loop and publish
            self.composed_callback()

            # publish feedback
            feedback_msg.feedback_error = self.mj.position_err()
            goal_handle.publish_feedback(feedback_msg)

        # robot reached the goal pose 
        goal_handle.succeed()
        result_msg.error = feedback_msg.feedback_error

        self.get_logger().info('Action finished!')

        return result_msg

    def saccades_callback(self, goal_handle):
        return self.saccades_callback_body(goal_handle, self.circular_saccades)

    def random_saccades_callback(self, goal_handle):
        return self.saccades_callback_body(goal_handle, self.random_circular_saccades)

    def circular_saccades(self, t):
        des_pos, des_vel = self.mj.circular_pose(t, self.current_pose)
        # self.get_logger().info(f"dest speed - {des_speed}") 
        self.mj.set_des_pose(des_pos, des_vel)
    
    def random_circular_saccades(self, t):
        if t % 0.05 < 0.005:
            self.mj.set_des_pose(self.mj.random_circular_pose(t, self.current_pose))

    def saccades_callback_body(self, goal_handle, saccade_func):
        self.get_logger().info('Executing goal...')

        duration = goal_handle.request.duration

        # create action messages
        feedback_msg = Saccades.Feedback()
        result_msg = Saccades.Result()

        # save current pose
        self.current_pose = self.mj.controller.fk()

        t_0 = self.mj.data.time
        t = 0
        # run mj loop until the robot reaches the goal pose
        while t < duration:
            # set goal pose
            saccade_func(t)

            # run one mj loop and publish
            self.composed_callback()

            # publish feedback
            feedback_msg.time_left = t_0 + duration - self.mj.data.time
            goal_handle.publish_feedback(feedback_msg)

            t = self.mj.data.time - t_0

        # robot reached the goal pose 
        goal_handle.succeed()
        result_msg.time_spent = duration

        self.get_logger().info('Action finished!')
        return result_msg

    def composed_callback(self):
        self.timer_callback()
        self.transform_callback()

    def timer_callback(self):
        # publishes events to ROS2 topic
        events_img, events = self.mj.loop()

        events_msg = CameraEvents()
        if self.fill_msg_with_events(events_msg, events):
            self.events_publisher.publish(events_msg)

        event_img_msg = Image()
        if self.fill_msg_with_event_im(event_img_msg, events_img):
            self.event_img_publisher.publish(event_img_msg)

    def fill_msg_with_event_im(self, msg, event_img):
        if event_img is not None:
            H, W, _ = event_img.shape
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'mounted_camera'
            msg.height = H
            msg.width = W
            msg.encoding = "rgb8"
            msg.step = 3 * W
            event_img = np.where(event_img == 0, 255, event_img)
            msg.data = event_img.tobytes()
            
            return True
        else:
            return False
        

    def transform_callback(self):
        
        pos, quat = self.mj.get_camera_pose()

        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'mounted_camera'
        t.child_frame_id = 'world'
        t.transform.translation.x = pos[0]
        t.transform.translation.y = pos[1]
        t.transform.translation.z = pos[2]
        t.transform.rotation.x = quat[1]
        t.transform.rotation.y = quat[2]
        t.transform.rotation.z = quat[3]
        t.transform.rotation.w = quat[0]

        self.transform_publisher.sendTransform(t)

    def fill_msg_with_events(self, msg, events):
        log_start = "Publishing: "
        log_amount = "amount of events-"
        if events is not None:
            # if there are some events
            log_input = f'{events["x"].shape[0]}'
            # self.get_logger().info(log_start + log_amount + log_input) 
            msg.x = events["x"].tolist()
            msg.y = events["y"].tolist()
            msg.t = events["t"].tolist()
            msg.p = events["p"].tolist()
            return True
        else:
            # if no events
            log_input = f'{0}'
            # self.get_logger().info(log_start + log_amount + log_input)
            return False

def main(args=None):
    rclpy.init(args=args)

    controller_action_server = ImControllerActionServer()

    rclpy.spin(controller_action_server)


if __name__ == '__main__':
    main()