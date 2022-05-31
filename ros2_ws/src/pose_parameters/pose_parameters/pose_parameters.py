import rclpy
from rclpy.node import Node
from .read_cfg import get_cposes

class PoseParam(Node):
    def __init__(self):
        super().__init__('pose_param_node')
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.poses_dic = get_cposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())

        # self.declare_parameter('my_parameter', 'world')

    def timer_callback(self):
        # my_param = self.get_parameter('my_parameter').get_parameter_value().string_value

        new_poses_dic = {}
        for pose_name in self.poses_dic:
            new_poses_dic[pose_name] = self.get_parameter(pose_name).get_parameter_value()

        log = "Pub: "
        for i in new_poses_dic:
            log += i + " "
        self.get_logger().info(log)


def main():
    rclpy.init()
    node = PoseParam()
    rclpy.spin(node)

if __name__ == '__main__':
    main()