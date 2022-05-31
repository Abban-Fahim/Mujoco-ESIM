from ast import Mult
import rclpy
from rclpy.node import Node

from std_msgs.msg import String

from .simple_mujoco_env import EsimMujoco # runs on 2 Hz rate


class EventsPublisher(Node):

    def __init__(self):
        super().__init__('events_publisher')
        self.publisher_ = self.create_publisher(String, 'mujoco_events', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

        self.mj = EsimMujoco()

    def timer_callback(self):
        msg = String()

        events = self.mj.loop()

        msg.data = 'got events'
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    events_publisher = EventsPublisher()

    rclpy.spin(events_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    events_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()