import rclpy
from rclpy.node import Node

import logging
import threading
import time
from rclpy.executors import MultiThreadedExecutor

import random
import tkinter
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib import pyplot as plt, animation

from geometry_msgs.msg import Twist

class TurtleBotInterface(Node):

    def __init__(self):
	# Inicializar la superclase Nodo de la cual hereda con el nombre requerido
        threading.Thread(target=self.run_loop).start()
        super().__init__('turtle_bot_interface')
        # Suscribirse en el tópico turtle_bot_position el mensaje tipo Twist
        self.subscriber = self.create_subscription(Twist,'turtlebot_position', self.positionCallback, 10)

    def positionCallback(self, msg):
        posX = msg.linear.x
        posY = msg.linear.y
        self.get_logger().info(str(posX));
        self.get_logger().info(str(posY));

    def run_loop(self):
        while True:
            time.sleep(0.001)
            pass
            

class Interfaz():

    def __init__(self):
	# Inicializar la superclase Nodo de la cual hereda con el nombre requerido
        threading.Thread(target=self.run_loop).start()
        root = tkinter.Tk()
        tkinter.mainloop()

    def run_loop(self):
        while True:
            time.sleep(0.001)
            pass

# =============== MÉTODO MAIN PARA EJECUCIÓN ===============
def main(args=None):
    rclpy.init(args=args)

    executor = MultiThreadedExecutor()
    turtle_bot_interface = TurtleBotInterface()
    interfaz = Interfaz()

    executor.add_node(turtle_bot_interface)
    executor.add_node(interfaz)
    rclpy.spin(executor)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    executor.shutdown()
    turtle_bot_interface.destroy_node()
    interfaz.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


