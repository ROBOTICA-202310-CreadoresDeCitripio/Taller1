import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tkinter as tk
import pygame


'''
class TurtleBotInterface(Node):
    # ==================================================================================================
    # Definir el constructor del nodo, el cual llama a la ventana principal e inicia la suscripción
    # ==================================================================================================
    def __init__(self):
        # Inicializar la superclase Node para generar el nodo con su nombre
        super().__init__("turtle_bot_interface")

        # Suscribir a tópicos de posición y de velocidad
        self.subscribe_to_pos = self.create_subscription(
            Twist, "turtlebot_position", self.callback_position, 10)
        self.subscribe_to_vel = self.create_subscription(
            Twist, "turtlebot_cmdVel", self.callback_velocity, 10)
        self.subscribe_to_pos, self.subscribe_to_vel

        # Diálogo para funcionamiento inicial
        dialog = InitialMenu("¡Bienvenid@ a la aplicación del TurtleBot 15!", "Seleccione una opción:",
                             "DIBUJAR TRAYECTORIA", "GUARDAR TRAYECTORIA", "REPRODUCIR TRAYECTORIA")
        dialog.run()
'''

'''        
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

    def callback(self, msg):
        x = msg.linear.x
        y = msg.linear.y
        self.xdata.append(x)
        self.ydata.append(y)
        self.line.set_data(self.xdata, self.ydata)
        plt.draw()
        plt.pause(0.01)
        plt.show(block=False)

class Window:
    # ==================================================================================================
    # Constructor de la ventana de interfaz para pintar trayectoria en tiempo real
    # ==================================================================================================
    def __init__(self):
        # Generar una ventana básica de Tkinter para albergar la gráfica y otros botones
        self.window = tk.Tk()
        self.window.geometry("500x500")
        self.window.resizable(False, False)
        # Insertar un botón para guardar la gráfica en cualquier momento como JPG
        self.save_button = tk.Button(self.window, text="GUARDAR GRÁFICA", command=self.save_figure)
        self.save_button.pack(side=tk.BOTTOM)
        # Insertar un campo para almacenar la gráfica en la interfaz
        self.graph = tk.Canvas(self.window, width=500, height=500, bg="white")


    # ==================================================================================================
    # Definir los métodos de la clase -> Correr ventana y guardar JPG
    # ==================================================================================================
    def run(self):
        self.window.mainloop()

    def save_figure(self):
        # Pídele al usuario que seleccione un archivo
        file_path = tk.filedialog.asksaveasfilename(defaultextension=".png")
        # Guarda la figura de Matplotlib en el archivo seleccionado
        if file_path:
            postscript_data = self.graph.postscript(colormode='color')
            pil_image = Image.open(io.BytesIO(postscript_data.encode('utf-8')))
            pil_image.save(file_path)


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
'''