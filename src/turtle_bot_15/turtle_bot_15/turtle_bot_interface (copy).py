import rclpy
from rclpy.node import Node

import threading
import time

import random
import tkinter
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib import pyplot as plt, animation

from geometry_msgs.msg import Twist

global posX
posX = 0
global posY
posY = 0

class TurtleBotInterface(Node):

    def __init__(self):
	# Inicializar la superclase Nodo de la cual hereda con el nombre requerido
        super().__init__('turtle_bot_interface')
        # Suscribirse en el tópico turtle_bot_position el mensaje tipo Twist
        self.subscriber = self.create_subscription(Twist,'turtlebot_position', self.positionCallback, 10)
        time.sleep(1)

    def positionCallback(self, msg):
        posX = float(msg.linear.x)
        posY = float(msg.linear.y)
        self.get_logger().info(str(posX));
        self.get_logger().info(str(posY));


# Creación e inicialización del plot
plt.rcParams["figure.figsize"] = [5.00, 5.00]
plt.rcParams["figure.autolayout"] = True
plt.axes(xlim=(-10, 10), ylim=(-10, 10))
fig = plt.Figure(dpi=100)
ax = fig.add_subplot(xlim=(-10, 10), ylim=(-10, 10))
line, = ax.plot([], [], lw=2)
x = []
y = []

# Ejecución de la clase
class InterfazGrafica():
    def __init__(self):
        # Creación e inicialización de la ventana de la GUI
        self.mainWindow = tkinter.Tk()
        self.mainWindow.wm_title("Posición del Turtle Bot 15")

        # Crea un botón que llame a la función save_figure cuando se haga clic en él
        self.save_button = tkinter.Button(self.mainWindow, text="Guardar", command=self.save_figure)
        self.save_button.pack(side=tkinter.BOTTOM)

        # Crea un cuadro de texto que actualiza el titulo de la gráfica
        self.text_field = tkinter.Text(self.mainWindow, height=1, width=40, wrap="word")
        self.text_field.pack()

        # Crea un botón que actualiza el titulo de la gráfica
        self.title_button = tkinter.Button(self.mainWindow, text="Cambiar título", command=self.actualizar_titulo)
        self.title_button.pack()

        # Establecer el área de dibujo para colocar la gráfica
        self.canvas = FigureCanvasTkAgg(fig, master=self.mainWindow)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(side=tkinter.TOP, fill=tkinter.BOTH, expand=1)

        self.anim = animation.FuncAnimation(fig, self.animate, fargs=(x, y), init_func=self.begin, interval=1)
        tkinter.mainloop()

    def actualizar_titulo(self):
        fig.suptitle(self.text_field.get('1.0','end'))

    def save_figure(self):
        # Pídele al usuario que seleccione un archivo
        file_path = filedialog.asksaveasfilename(defaultextension=".png")
        # Guarda la figura de Matplotlib en el archivo seleccionado
        if file_path:
            fig.savefig(file_path)

    def begin(self):
        line.set_data([], [])
        return line,

    def animate(self, i, x, y):
        x.append(posX)
        y.append(posY)
        line.set_data(x,y)
        ax.plot(x, y)
        return line,


# =============== MÉTODO MAIN PARA EJECUCIÓN ===============
def main(args=None):
    rclpy.init(args=args)
    turtle_bot_interface = TurtleBotInterface()
    t1 = threading.Thread(target=turtle_bot_interface.positionCallback(Twist()))
    t1.start()
    t1.join()
    #InterfazGrafica()
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
