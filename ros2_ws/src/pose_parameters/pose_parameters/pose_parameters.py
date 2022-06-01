import rclpy
from rclpy.node import Node
from .read_cfg import get_cposes, get_jposes, get_cerr_lim

class PoseParam(Node):
    def __init__(self):
        super().__init__('pose_param_node')
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.name_list = []
        self.poses_dic = get_cposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())
            self.name_list.append(k)

        self.poses_dic = get_jposes()
        for k, v in self.poses_dic.items():
            self.declare_parameter(k, v.tolist())
            self.name_list.append(k)
        
        self.declare_parameter("cerr_limit", get_cerr_lim())
        self.name_list.append("cerr_limit")

        # self.declare_parameter('my_parameter', 'world')

    def timer_callback(self):
        # my_param = self.get_parameter('my_parameter').get_parameter_value().string_value

        new_poses_dic = {}
        for pose_name in self.name_list:
            new_poses_dic[pose_name] = self.get_parameter(pose_name).get_parameter_value()
            self.get_logger().info(f'{new_poses_dic[pose_name]}')

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