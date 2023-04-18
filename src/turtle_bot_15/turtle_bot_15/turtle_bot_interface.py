import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tkinter as tk
from tkinter import filedialog
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
import numpy as np


class TurtleBotInterface(Node):
    # ==================================================================================================
    # Definir el constructor del nodo, el cual llama a la ventana principal e inicia la suscripción
    # ==================================================================================================
    def __init__(self):
        # Inicializar la superclase Node para generar el nodo con su nombre y otros atributos
        super().__init__("turtle_bot_interface")
        self.xdata = []
        self.ydata = []
        # Suscribir a tópicos de posición y de velocidad
        self.subscribe_to_pos = self.create_subscription(
            Twist, "turtlebot_position", self.callback_position, 10)
        self.subscribe_to_vel = self.create_subscription(
            Twist, "turtlebot_cmdVel", self.callback_velocity, 10)
        self.subscribe_to_pos, self.subscribe_to_vel

    # ==================================================================================================
    # Definir los métodos de la clase -> Callback para interacción con tópicos y actualizar los datos
    # ==================================================================================================
    def callback_position(self, msg):
        x = msg.linear.x
        y = msg.linear.y
        self.xdata.append(x)
        self.ydata.append(y)


    def callback_velocity(self, msg):
        pass


class InitialMenu:
    # ==================================================================================================
    # Constructor del menú inicial de la aplicación
    # ==================================================================================================
    def __init__(self, message_1, message_2, option_1, option_2, option_3):
        self.window = tk.Tk()
        self.window.title("Turtlebot Application Start Menu")
        self.window.geometry("500x100")
        self.window.resizable(False, False)

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
        self.button_3.pack(side=tk.RIGHT, padx=10)

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


class Window:
    # ==================================================================================================
    # Constructor de la ventana de interfaz para pintar trayectoria en tiempo real
    # ==================================================================================================
    def __init__(self):
        # Generar una instancia del nodo de ROS
        rclpy.init(args=None)
        self.rosnode = TurtleBotInterface()
        rclpy.spin(self.rosnode)
        # Generar una ventana básica de Tkinter para albergar la gráfica y otros botones
        self.window = tk.Tk()
        self.window.geometry("500x500")
        self.window.resizable(False, False)
        # Insertar un botón para guardar la gráfica en cualquier momento como JPG
        self.save_button = tk.Button(self.window, text="GUARDAR GRÁFICA", command=self.save_graph)
        self.save_button.pack(side=tk.BOTTOM)
        # Insertar un campo para almacenar la gráfica en la interfaz
        #self.graph = tk.Canvas(self.window, width=500, height=500, bg="white")
        self.fig = Figure(figsize=(5, 4), dpi=100)
        self.ax = self.fig.add_subplot(111)
        self.canvas = FigureCanvasTkAgg(self.plot_graph(self.rosnode.xdata, self.rosnode.ydata), master=self.window)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)
        # Actualizar la gráfica en tiempo real en intervalos constantes
        self.window.after(100, self.update_graph)
        # Generar la ventana de Tkinter de forma continua
        tk.mainloop()
        self.rosnode.destroy_node()
        rclpy.shutdown()


    # ==================================================================================================
    # Definir los métodos de la clase -> Correr ventana y guardar gráfica
    # ==================================================================================================
    def run(self):
        self.window.mainloop()

    def plot_graph(self, x, y):
        self.ax.plot(x, y)
        return self.fig
    
    def save_graph(self):
        file_types = [('PNG', '*.png'), ('JPEG', '*.jpg'), ('All Files', '*.*')]
        file_name = filedialog.asksaveasfilename(defaultextension=".png", filetypes=file_types)
        if file_name:
            self.fig.savefig(file_name)

    def update_graph(self):
        self.ax.clear()
        self.ax.plot(self.rosnode.xdata, self.rosnode.ydata)
        self.canvas.draw_idle()
        self.window.after(100, self.update_graph)


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
        self.stopsave_button = tk.Button(self.window, text="DETENER GRABACIÓN", background="yellow", command=self.stop_save)
        self.stopsave_button.pack()

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