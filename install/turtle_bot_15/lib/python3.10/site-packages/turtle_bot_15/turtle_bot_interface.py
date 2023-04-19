import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tkinter as tk
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
import numpy as np
import PIL.Image as Image
import PIL.ImageTk as ImageTk


class InitialMenu():
    # ==================================================================================================
    # Constructor del menú inicial de la aplicación
    # ==================================================================================================
    def __init__(self, message_1, message_2, option_1, option_2, option_3):
        self.window = tk.Tk()
        self.window.title("Turtlebot Application Start Menu")
        self.window.resizable(True, False)

        # Crear los mensajes que se mostrarán en los botones
        self.label_1 = tk.Label(self.window, text=message_1)
        self.label_1.pack(pady=5)
        self.label_2 = tk.Label(self.window, text=message_2)
        self.label_2.pack(pady=5)

        # Crear los botones que se incorporarán en la ventana
        self.button_1 = tk.Button(
            self.window, text=option_1, command=self.select_draw_trajectory)
        self.button_1.pack(side=tk.LEFT, padx=10)
        self.button_2 = tk.Button(
            self.window, text=option_2, command=self.select_save_trajectory)
        self.button_2.pack(side=tk.LEFT, padx=10)
        self.button_3 = tk.Button(
            self.window, text=option_3, command=self.select_play_trajectory)
        self.button_3.pack(side=tk.LEFT, padx=10)

    # ==================================================================================================
    # Definir los métodos de la clase -> Event Listeners de hacer click a algún botón
    # ==================================================================================================
    def select_draw_trajectory(self):
        # Primera opción: Dibujar la trayectoria seguida por el robot
        self.window.destroy()
        # Inicializar la GUI específica para Dibujo de Trayectoria
        draw_gui = DrawWindow()
        draw_gui.run()

    def select_save_trajectory(self):
        # Segunda opción: Guardar la trayectoria seguida por el robot
        self.window.destroy()
        # Inicializar la GUI específica para Guardado de Trayectoria
        save_gui = SaveWindow()
        save_gui.run()

    def select_play_trajectory(self):
        # Tercera opción: Reporoducir la trayectoria seguida por el robot
        self.window.destroy()
        # Inicializar la GUI específica para Reproducción de Trayectoria
        play_gui = PlayWindow()
        play_gui.run()

    def run(self):
        # Correr la ventana con el menú inicial
        self.window.mainloop()


class Graph(tk.Canvas):
    # ==================================================================================================
    # Constructor de la gráfica
    # ==================================================================================================
    def __init__(self, parent, w, h, **kwargs):
        super().__init__(parent, width=w, height=h, **kwargs)
        self.width = w
        self.height = h

        # Dibujar las lineas de la grilla
        for i in range(-3, 4):
            x = (i + 3) * self.width / 6
            self.create_line(x, 0, x, self.height, fill="#ccc")
            y = (i + 3) * self.height / 6
            self.create_line(0, y, self.width, y, fill="#ccc")

        # Dibujar el eje X y el eje Y
        self.create_line(0, self.height/2, self.width, self.height/2, width=2)
        self.create_line(self.width/2, 0, self.width/2, self.height, width=2)

        # Agregar los valores a los ejes
        for i in range(-3, 4):
            x = (i + 3) * self.width / 6
            self.create_text(x, self.height/2+10, text=str(i))
            y = (i + 3) * self.height / 6
            self.create_text(self.width/2-10, y, text=str(-i))

        # Posicionar el robot en (0,0) por defecto
        # Sea (0,0) el punto inicial, ubicado en (w/2-10, h/2-10), una unidad está dada por (w/6, -h/6)
        x1, y1 = (self.width/2-10)+(self.width/6)*0, (self.height/2-10)-(self.height/6)*0
        x2, y2 = x1+20, y1+20
        self.robot = self.create_oval(x1, y1, x2, y2, fill="navy")
        self.prev_x, self.prev_y = x1 + (x2 - x1) / 2, y1 + (y2 - y1) / 2
        self.line_id = self.create_line(self.prev_x, self.prev_y, self.prev_x, self.prev_y, fill="limegreen")

    # ==================================================================================================
    # Definir los métodos de la clase -> Desplazar óvalo y pintar línea
    # ==================================================================================================
    def move_oval(self, xpos, ypos):
        x1or, y1or, x2or, y2or = self.coords(self.robot)
        # Mover el robot a la posición que establezcan las nuevas coordenadas
        self.move(self.robot, (self.width/6)*xpos, -(self.height/6)*ypos)
        # Obtener la nueva posición del robot
        x1, y1, x2, y2 = self.coords(self.robot)
        curr_x, curr_y = x1 + (x2 - x1) / 2, y1 + (y2 - y1) / 2
        # Hacer que la línea siga la trayectoria del robot
        self.coords(self.line_id, self.prev_x, self.prev_y, curr_x, curr_y)
        prev_x, prev_y = curr_x, curr_y
        # Programar la repetición en 100 ms
        self.after(1000, self.move_oval, xpos, ypos)


class TurtleBotInterface(Node):
    # ==================================================================================================
    # Definir el constructor del nodo, el cual llama a la ventana principal e inicia la suscripción
    # ==================================================================================================
    def __init__(self, parent):
        # Inicializar la superclase Node para generar el nodo con su nombre y otros atributos
        super().__init__("turtle_bot_interface")
        self.graph = Graph(parent.window, 500, 400, bg="white")
        # Suscribir a tópicos de posición y de velocidad
        self.subscribe_to_pos = self.create_subscription(
            Twist, "turtlebot_position", self.callback_position, 10)
        self.subscribe_to_pos

    # ==================================================================================================
    # Definir los métodos de la clase -> Callback para interacción con tópicos y actualizar los datos
    # ==================================================================================================
    def callback_position(self, msg):
        x = msg.linear.x
        y = msg.linear.y
        self.graph.move_oval(x,y)


class Window:
    # ==================================================================================================
    # Constructor de la ventana de interfaz para pintar trayectoria en tiempo real
    # ==================================================================================================
    def __init__(self):
        # Generar una instancia del nodo de ROS
        # Generar una ventana básica de Tkinter para albergar la gráfica y otros botones
        self.window = tk.Tk()
        self.window.geometry("500x500")
        self.window.resizable(False, False)
        # Insertar un campo de texto para cambiar el título de la gráfica
        self.title_entry = tk.Entry(self.window)
        self.title_entry.pack(side=tk.TOP)
        # Insertar un botón para hacer efectiva la instrucción de cambio de título
        self.change_title_button = tk.Button(self.window, text="CAMBIAR TITULO")
        self.change_title_button.pack(side=tk.TOP)
        # Insertar un botón para guardar la gráfica en cualquier momento como JPG
        self.save_button = tk.Button(
            self.window, text="GUARDAR GRÁFICA", command=self.save_graph)
        self.save_button.pack(side=tk.BOTTOM)
        # Insertar un campo para almacenar la gráfica en la interfaz
        self.graph = Graph(self.window, 500, 400, bg="white")
        self.graph.move_oval(1.5,2.0)
        self.graph.pack()


    # ==================================================================================================
    # Definir los métodos de la clase -> Correr ventana y guardar gráfica
    # ==================================================================================================
    def run(self):
        rclpy.init()
        interface = TurtleBotInterface(self)
        rclpy.spin(interface)
        self.window.mainloop()
        interface.destroy_node()
        rclpy.shutdown()

    def save_graph(self):
        file_types = [('PNG', '*.png'), ('JPEG', '*.jpg'),
                      ('All Files', '*.*')]
        file_name = filedialog.asksaveasfilename(
            defaultextension=".png", filetypes=file_types)
        if file_name:
            self.graph.postscript(file="canvas.ps", colormode='color')
            # use PIL to convert the postscript file to a PNG image
            image = Image.open("canvas.ps")
            image.save(file_name)


class DrawWindow(Window):
    # ==================================================================================================
    # Constructor de la ventana de interfaz para pintar trayectoria en tiempo real
    # ==================================================================================================
    def __init__(self):
        # Inicializar la superclase Window para heredar atributos y métodos
        super().__init__()
        self.window.title("TurtleBot Position - Draw Mode")

    # ==================================================================================================
    # Definir los métodos de la clase ->
    # ==================================================================================================


class SaveWindow(Window):
    # ==================================================================================================
    # Constructor de la ventana de interfaz para guardar trayectoria en archivo TXT
    # ==================================================================================================
    def __init__(self):
        # Inicializar la superclase Window para heredar atributos y métodos
        super().__init__()
        self.window.title("TurtleBot Position - Save Mode")
        self.stopsave_button = tk.Button(
            self.window, text="DETENER GRABACIÓN", background="yellow", command=self.stop_save)
        self.stopsave_button.pack(side=tk.BOTTOM)

    # ==================================================================================================
    # Definir los métodos de la clase -> Detener la grabación
    # ==================================================================================================
    def stop_save(self):
        pass


class PlayWindow(Window):
    # ==================================================================================================
    # Constructor de la ventana de interfaz para reproducir trayectoria desde TXT
    # ==================================================================================================
    def __init__(self):
        # Inicializar la superclase Window para heredar atributos y métodos
        super().__init__()
        self.window.title("TurtleBot Position - Player Mode")

    # ==================================================================================================
    # Definir los métodos de la clase ->
    # ==================================================================================================


def main(args=None):
    # Diálogo para funcionamiento inicial
    dialog = InitialMenu("¡Bienvenid@ a la aplicación del TurtleBot 15!", "Seleccione una opción:",
                         "DIBUJAR TRAYECTORIA", "GUARDAR TRAYECTORIA", "REPRODUCIR TRAYECTORIA")
    dialog.run()


if __name__ == '__main__':
    main()
