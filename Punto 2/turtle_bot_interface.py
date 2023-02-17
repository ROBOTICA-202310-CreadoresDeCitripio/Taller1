import rclpy

from rclpy.node import Node



from geometry_msgs.msg import Pose



import tkinter as tk

import numpy as np

from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

from matplotlib.figure import Figure

from tkinter import filedialog



class TurtleBotInterface(Node):



    def __init__(self):

        super().__init__('turtle_bot_interface')

        self.subscription = self.create_subscription(Pose, 'turtle_bot_position', self.listener_callback, 10)

        self.subscription  # prevent unused variable warning



    def listener_callback(self, msg):

        self.get_logger().info('Posición x: "%s"' % msg.point.x)

        self.get_logger().info('Posición y: "%s"' % msg.point.y)

        

def main(args=None):

    rclpy.init(args=args)



    turtle_bot_interface = TurtleBotInterface()



    rclpy.spin(turtle_bot_interface)

    

    # Destroy the node explicitly

    # (optional - otherwise it will be done automatically

    # when the garbage collector destroys the node object)

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

canvas = tk.Canvas(mainWindow, width=300, height=300)

canvas.pack()



# Crear gráfico con Matplotlib

fig = Figure(figsize=(5, 4), dpi=90)

ax = fig.add_subplot(111)

x = np.array([1, 2,0, -2, 3, 4, 5])

y = np.array([1, 2,-3, 4, 6, 8, 10])



ax.plot(x, y)

print(x)

print(y)



# Agregar gráfico al lienzo de canvas

canvas_matplotlib = FigureCanvasTkAgg(fig, master=canvas)

canvas_matplotlib.draw()

canvas_matplotlib.get_tk_widget().pack()



# Crea un botón que llame a la función save_figure cuando se haga clic en él

save_button = tk.Button(mainWindow, text="Guardar", command=save_figure)

save_button.pack()



# Mostrar ventana

tk.mainloop()

