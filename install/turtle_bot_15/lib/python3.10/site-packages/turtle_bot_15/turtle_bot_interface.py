import rclpy
from rclpy.node import Node

import threading
import time

import numpy as np
import random
import tkinter
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib import pyplot as plt, animation

from geometry_msgs.msg import Twist

global x
x = [0]
global y
y = [0]

class TurtleBotInterface(Node):

    def __init__(self):
	# Inicializar la superclase Nodo de la cual hereda con el nombre requerido
        super().__init__('turtle_bot_interface')
        # Suscribirse en el tópico turtle_bot_position el mensaje tipo Twist
        self.listener()

    def listener(self):
        self.subscriber = self.create_subscription(Twist,'turtlebot_position', self.positionCallback, 10)

    def positionCallback(self, msg):
        posX = float(msg.linear.x)
        x.append(posX)
        posY = float(msg.linear.y)
        y.append(posY)
        self.get_logger().info(str(posX))
        self.get_logger().info(str(posY))


# Creación e inicialización del plot
plt.rcParams["figure.figsize"] = [5.00, 5.00]
plt.rcParams["figure.autolayout"] = True
plt.axes(xlim=(-10, 10), ylim=(-10, 10))
fig = plt.Figure(dpi=100)
ax = fig.add_subplot(xlim=(-10, 10), ylim=(-10, 10))
line, = ax.plot([], [], lw=2)

def begin():
    line.set_data([], [])
    return line,

def animate(i, x, y):
    line.set_data(x,y)
    ax.plot(x, y)
    return line,

anim = animation.FuncAnimation(fig, animate, fargs=(x, y), init_func=begin, interval=1)

def actualizar_titulo(text_field):
    fig.suptitle(text_field.get('1.0','end'))

def save_figure():
    # Pídele al usuario que seleccione un archivo
    file_path = filedialog.asksaveasfilename(defaultextension=".png")
    # Guarda la figura de Matplotlib en el archivo seleccionado
    if file_path:
        fig.savefig(file_path)


# =============== MÉTODO MAIN PARA EJECUCIÓN ===============
def main(args=None):
    # Creación e inicialización de la ventana de la GUI
    mainWindow = tkinter.Tk()
    mainWindow.wm_title("Posición del Turtle Bot 15")

    # Crea un botón que llame a la función save_figure cuando se haga clic en él
    save_button = tkinter.Button(mainWindow, text="Guardar", command=save_figure)
    save_button.pack(side=tkinter.BOTTOM)

    # Crea un cuadro de texto que actualiza el titulo de la gráfica
    text_field = tkinter.Text(mainWindow, height=1, width=40, wrap="word")
    text_field.pack()

    # Crea un botón que actualiza el titulo de la gráfica
    title_button = tkinter.Button(mainWindow, text="Cambiar título", command=actualizar_titulo(text_field))
    title_button.pack()

    # Establecer el área de dibujo para colocar la gráfica
    canvas = FigureCanvasTkAgg(fig, master=mainWindow)
    canvas.draw()
    canvas.get_tk_widget().pack(side=tkinter.TOP, fill=tkinter.BOTH, expand=1)

    #anim = animation.FuncAnimation(fig, animate, fargs=(x, y), init_func=begin, interval=1)
    tkinter.mainloop()

    rclpy.init(args=args)
    turtle_bot_interface = TurtleBotInterface()
    #t1 = threading.Thread(target=turtle_bot_interface.listener)
    #t1.start()

    #InterfazGrafica()
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    turtle_bot_interface.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
