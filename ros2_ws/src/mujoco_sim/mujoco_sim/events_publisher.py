from ast import Mult
import rclpy
from rclpy.node import Node

from event_data_interface.msg import Events

from .mujoco_env.simple_mujoco_env import EsimMujoco


class EventsPublisher(Node):

    def __init__(self):
        super().__init__('events_publisher')
        self.publisher_ = self.create_publisher(Events, 'mujoco_events', 10)
        timer_period = 1.0/60  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.mj = EsimMujoco()

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
            self.get_logger().info(log_start + log_amount + log_input)
            msg.x = self.cast2msg(events["x"])
            msg.y = self.cast2msg(events["y"])
            msg.t = self.cast2msg(events["t"])
            msg.p = self.cast2msg(events["p"])
            return True
        else:
            log_input = f'{0}'
            self.get_logger().info(log_start + log_amount + log_input)
            return False

    def cast2msg(self, tensor):
        return tensor.tolist()


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