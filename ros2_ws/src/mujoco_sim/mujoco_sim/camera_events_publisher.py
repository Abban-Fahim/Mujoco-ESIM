#
#BSD 3-Clause License
#
#
#
#Copyright 2022 fortiss, Neuromorphic Computing group
#
#
#All rights reserved.
#
#
#
#Redistribution and use in source and binary forms, with or without
#
#modification, are permitted provided that the following conditions are met:
#
#
#
#* Redistributions of source code must retain the above copyright notice, this
#
#  list of conditions and the following disclaimer.
#
#
#
#* Redistributions in binary form must reproduce the above copyright notice,
#
#  this list of conditions and the following disclaimer in the documentation
#
#  and/or other materials provided with the distribution.
#
#
#
#* Neither the name of the copyright holder nor the names of its
#
#  contributors may be used to endorse or promote products derived from
#
#  this software without specific prior written permission.
#
#
#
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#
#AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
#
#IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
#
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
#
#FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
#
#DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
#

from ast import Mult
import rclpy
from rclpy.node import Node

from camera_event_data_interface.msg import CameraEvents

from .mujoco_env.simple_mujoco_env import EsimMujoco


class EventsPublisher(Node):

    def __init__(self):
        super().__init__('events_publisher')
        self.publisher_ = self.create_publisher(CameraEvents, 'camera_events_topic', 10)
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

    try:
      rclpy.spin(events_publisher)
    except KeyboardInterrupt:
      pass

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    events_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()