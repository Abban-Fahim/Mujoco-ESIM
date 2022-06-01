import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from controller_interface.action import ImController
from event_data_interface.msg import Events
from .im_mujoco_env import EsimMujoco
from .read_cfg import get_cposes, get_jposes, get_cerr_lim

import numpy as np
import time


class ImControllerActionServer(Node):

    def __init__(self):
        super().__init__('controller_action_server')
        self._action_server = ActionServer(
            self,
            ImController,
            'im_controller',
            self.execute_callback)

        self.publisher_ = self.create_publisher(Events, 'mujoco_events', 10)
        timer_period = 1.0/60  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.init_params()

        init_pose = np.array(self.get_parameter('HOME_Q').get_parameter_value().double_array_value)
        err_limit = self.get_parameter('cerr_limit').get_parameter_value().double_value
        des_pose = np.array(self.get_parameter('HOME').get_parameter_value().double_array_value)

        # self.get_logger().info(f'{init_pose} ')
        # self.get_logger().info( f'{err_limit}')
        # self.get_logger().info( f'{des_pose_name}')

        self.mj = EsimMujoco(init_pose, err_limit, des_pose)
        # self.mj = EsimMujoco(get_jposes()['HOME_Q'], get_cerr_lim(), get_cposes()['HOME'])


    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        des_pose_name = goal_handle.request.des_pose_name
        des_pose = np.array(self.get_parameter(des_pose_name).get_parameter_value().double_array_value)
        self.mj.set_des_pose(des_pose)
        time.sleep(1)

        feedback_msg = ImController.Feedback()
        feedback_msg.feedback_error = self.mj.position_err()

        self.get_logger().info(f'Feedback error to {des_pose_name}: {feedback_msg.feedback_error}')
        goal_handle.publish_feedback(feedback_msg)

        result = ImController.Result()
        result.error = feedback_msg.feedback_error

        if self.mj.is_position_reached():
            goal_handle.succeed()
        else:
            goal_handle.execute()

        return result

    def init_params(self):
        self.poses_dic = get_cposes()
        # print(self.poses_dic)
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())

        self.poses_dic = get_jposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())
        
        self.declare_parameter("cerr_limit", get_cerr_lim())
        # time.sleep(5)

    def timer_callback(self):
        msg = Events()
        events = self.mj.loop()
        if self.fill_msg_with_events(msg, events):
            self.publisher_.publish(msg)

    def fill_msg_with_events(self, msg, events):
        log_start = "Publishing: "
        log_amount = "amount of events-"
        if events is not None:
            log_input = f'{events["x"].shape[0]}'
            # self.get_logger().info(log_start + log_amount + log_input) 
            msg.x = self.cast2msg(events["x"])
            msg.y = self.cast2msg(events["y"])
            msg.t = self.cast2msg(events["t"])
            msg.p = self.cast2msg(events["p"])
            return True
        else:
            log_input = f'{0}'
            # self.get_logger().info(log_start + log_amount + log_input)
            return False

    def cast2msg(self, tensor):
        return tensor.tolist()


def main(args=None):
    rclpy.init(args=args)

    controller_action_server = ImControllerActionServer()

    rclpy.spin(controller_action_server)


if __name__ == '__main__':
    main()