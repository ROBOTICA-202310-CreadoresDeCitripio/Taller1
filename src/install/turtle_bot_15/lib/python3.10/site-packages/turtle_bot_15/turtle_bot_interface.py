import rclpy
from rclpy.node import Node
<<<<<<< HEAD
import tkinter as tk
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
from tkinter import filedialog
=======

import logging
import threading
import time
from rclpy.executors import MultiThreadedExecutor

import random
import tkinter
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib import pyplot as plt, animation
>>>>>>> 61e32c57265d91780b2b1cec1218dedcbd80113f

from geometry_msgs.msg import Twist

class TurtleBotInterface(Node):

    def __init__(self):
	# Inicializar la superclase Nodo de la cual hereda con el nombre requerido
<<<<<<< HEAD
        super().__init__('turtle_bot_interface')
        # Suscribirse en el tópico turtle_bot_position el mensaje tipo Twist
        self.subscriber = self.create_subscription(Twist,'turtle_bot_position', self.positionCallback, 10)
=======
        threading.Thread(target=self.run_loop).start()
        super().__init__('turtle_bot_interface')
        # Suscribirse en el tópico turtle_bot_position el mensaje tipo Twist
        self.subscriber = self.create_subscription(Twist,'turtlebot_position', self.positionCallback, 10)
>>>>>>> 61e32c57265d91780b2b1cec1218dedcbd80113f

    def positionCallback(self, msg):
        posX = msg.linear.x
        posY = msg.linear.y
<<<<<<< HEAD
        self.get_logger().info("Posición en x: " + str(posX))
        self.get_logger().info("Posición en x: " + str(posY))

=======
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
>>>>>>> 61e32c57265d91780b2b1cec1218dedcbd80113f

# =============== MÉTODO MAIN PARA EJECUCIÓN ===============
def main(args=None):
    rclpy.init(args=args)

<<<<<<< HEAD
    turtle_bot_interface = TurtleBotInterface()

    rclpy.spin(turtle_bot_interface)
=======
    executor = MultiThreadedExecutor()
    turtle_bot_interface = TurtleBotInterface()
    interfaz = Interfaz()

    executor.add_node(turtle_bot_interface)
    executor.add_node(interfaz)
    rclpy.spin(executor)
>>>>>>> 61e32c57265d91780b2b1cec1218dedcbd80113f

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
<<<<<<< HEAD
    turtle_bot_interface.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

# Crear ventana
mainWindow = tk.Tk()
mainWindow.title("Posición del Turtle Bot 15")
mainWindow.geometry("400x450")

# Permitir actualizar título de la gráfica
def actualizar_titulo():
    fig.suptitle(text_field.get('1.0','end'))

# Agregar direccion guardar
def save_figure():
    # Pídele al usuario que seleccione un archivo
    file_path = filedialog.asksaveasfilename(defaultextension=".png")
    # Guarda la figura de Matplotlib en el archivo seleccionado
    if file_path:
        fig.savefig(file_path)

# Crea un cuadro de texto que actualiza el titulo de la gráfica
text_field = tk.Text(mainWindow, height=1, width=40, wrap="word")
text_field.pack()

# Crea un botón que actualiza el titulo de la gráfica
title_button = tk.Button(mainWindow, text="Cambiar título", command=actualizar_titulo)
title_button.pack()

# Crear lienzo de canvas
canvas = tk.Canvas(mainWindow, width=1000, height=1000)
canvas.pack()

# Crear gráfico con Matplotlib
fig = Figure(figsize=(5, 4), dpi=90)
# Agregar gráfico al lienzo de canvas
canvas_matplotlib = FigureCanvasTkAgg(fig, master=canvas)
canvas_matplotlib.draw()
canvas_matplotlib.get_tk_widget().pack()

# Crea un botón que llame a la función save_figure cuando se haga clic en él
save_button = tk.Button(mainWindow, text="Guardar", command=save_figure)
save_button.pack()

# Mostrar ventana
tk.mainloop()
=======
    executor.shutdown()
    turtle_bot_interface.destroy_node()
    interfaz.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()


>>>>>>> 61e32c57265d91780b2b1cec1218dedcbd80113f
