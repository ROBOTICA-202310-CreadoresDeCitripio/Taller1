import matplotlib.pyplot as plt
import numpy as np

class MyClass:
    def __init__(self):
        self.fig, self.ax = plt.subplots()
        self.xdata = []
        self.ydata = []
        self.line, = self.ax.plot(self.xdata, self.ydata)

    def update_plot(self, x, y):
        self.xdata.append(x)
        self.ydata.append(y)
        self.line.set_data(self.xdata, self.ydata)
        self.ax.relim()
        self.ax.autoscale_view()
        plt.draw()
        plt.pause(0.01)

# Crear instancia de la clase
my_class = MyClass()

# Generar datos aleatorios y actualizar la gráfica en cada iteración
for _ in range(100):
    x = np.random.uniform(-10,10)
    y = np.random.uniform(-10,10)
    my_class.update_plot(x, y)
