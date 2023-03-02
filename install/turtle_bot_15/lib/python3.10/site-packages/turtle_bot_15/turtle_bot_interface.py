import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import tkinter as tk


class TurtleBotInterface(Node):
    def __init__(self):
        super().__init__("turtle_bot_interface")
        self.subscription = self.create_subscription(Twist, "turtlebot_position", self.callback, 10)
        self.subscription

        # Crear ventana principal de Tkinter
        self.root = tk.Tk()
        self.root.title("TurtleBot Interface")

        # Crear figura de Matplotlib
        self.fig, self.ax = plt.subplots()
        self.ax.set_xlim(-3, 3)
        self.ax.set_ylim(-3, 3)
        self.xdata = []
        self.ydata = []
        self.line, = self.ax.plot(self.xdata, self.ydata)

        # Crea un botón que llame a la función save_figure cuando se haga clic en él
        save_button = tk.Button(self.root, text="Guardar", command=self.save_figure)
        save_button.pack(side=tk.BOTTOM)

        # Crea un cuadro de texto que actualiza el titulo de la gráfica
        self.text_field = tk.Text(self.root, height=1, width=40, wrap="word")
        self.text_field.pack()

        # Crea un botón que actualiza el titulo de la gráfica
        title_button = tk.Button(self.root, text="Cambiar título", command=self.cambiar_titulo)
        title_button.pack()

        # Crear un widget de Matplotlib que se puede agregar a la ventana principal de Tkinter
        self.canvas = FigureCanvasTkAgg(self.fig, master=self.root)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

    def actualizar_titulo(self, new_title):
        self.fig_title = new_title
        self.ax.set_title(new_title)

    def cambiar_titulo(self):
        new_title = self.text_field.get('1.0','end')
        self.actualizar_titulo(new_title)

    def save_figure(self):
        # Pídele al usuario que seleccione un archivo
        file_path = tk.filedialog.asksaveasfilename(defaultextension=".png")
        # Guarda la figura de Matplotlib en el archivo seleccionado
        if file_path:
            self.fig.savefig(file_path)

    def callback(self, msg):
        x = msg.linear.x
        y = msg.linear.y
        self.xdata.append(x)
        self.ydata.append(y)
        self.line.set_data(self.xdata, self.ydata)
        plt.draw()
        plt.pause(0.01)
        plt.show(block=False)

def main(args=None):
    rclpy.init(args=args)
    turtle_bot_interface = TurtleBotInterface()
    rclpy.spin(turtle_bot_interface)

    # Arrancar la GUI de Tkinter
    turtle_bot_interface.root.mainloop()

    turtle_bot_interface.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
