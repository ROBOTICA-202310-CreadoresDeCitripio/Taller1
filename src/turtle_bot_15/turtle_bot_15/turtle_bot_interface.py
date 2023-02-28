import rclpy
from rclpy.node import Node

import threading
import time
from rclpy.executors import SingleThreadedExecutor

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

# =============== MÉTODO MAIN PARA EJECUCIÓN ===============
def main(args=None):
    rclpy.init(args=args)

    executor = SingleThreadedExecutor()
    turtle_bot_interface = TurtleBotInterface()

    executor.add_node(turtle_bot_interface)
    rclpy.spin(turtle_bot_interface)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    executor.shutdown()
    turtle_bot_interface.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

# Creación e inicialización de la interfaz gráfica
plt.rcParams["figure.figsize"] = [5.00, 5.00]
plt.rcParams["figure.autolayout"] = True
plt.axes(xlim=(-10, 10), ylim=(-10, 10))
fig = plt.Figure(dpi=100)
ax = fig.add_subplot(xlim=(-10, 10), ylim=(-10, 10))
line, = ax.plot([], [], lw=2)
x = []
y = []

root = tkinter.Tk()
root.wm_title("Posición del Turtle Bot 15")

canvas = FigureCanvasTkAgg(fig, master=root)
canvas.draw()

def actualizar_titulo():
    fig.suptitle(text_field.get('1.0','end'))

def save_figure():
    # Pídele al usuario que seleccione un archivo
    file_path = filedialog.asksaveasfilename(defaultextension=".png")
    # Guarda la figura de Matplotlib en el archivo seleccionado
    if file_path:
        fig.savefig(file_path)

# Crea un botón que llame a la función save_figure cuando se haga clic en él
save_button = tkinter.Button(root, text="Guardar", command=save_figure)
save_button.pack(side=tkinter.BOTTOM)

# Crea un cuadro de texto que actualiza el titulo de la gráfica
text_field = tkinter.Text(root, height=1, width=40, wrap="word")
text_field.pack()

# Crea un botón que actualiza el titulo de la gráfica
title_button = tkinter.Button(root, text="Cambiar título", command=actualizar_titulo)
title_button.pack()

# Crear lienzo de canvas
canvas.get_tk_widget().pack(side=tkinter.TOP, fill=tkinter.BOTH, expand=1)

def init():
    line.set_data([], [])
    return line,

def animate(i, x, y):
    x.append(random.uniform(-10,10))
    y.append(random.uniform(-10,10))
    line.set_data(x,y)
    ax.plot(x, y)
    return line,

anim = animation.FuncAnimation(fig, animate, fargs=(x, y), init_func=init, interval=200)

tkinter.mainloop()