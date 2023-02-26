from turtle_bot_servcli.msg import Posicion
from turtle_bot_servcli.srv import MoveRobotToPosition

from geometry_msgs.msg import Twist

import rclpy
from rclpy.node import Node


class TurtleBotPlayer(Node):

    def __init__(self):
        super().__init__('turtle_bot_player')
        self.publisher = self.create_publisher(Twist,'turtlebot_cmdVel', 10)
        self.subscriber = self.create_subscription(Twist,'turtle_bot_position', self.move_robot_callback, 10)
        self.service = self.create_service(MoveRobotToPosition, 'move_robot_to_position', self.move_robot_callback)

    def move_robot_callback(self, request, response):
        response.position_destiny = request.a + request.b
        #self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response


def main():
    rclpy.init()

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()