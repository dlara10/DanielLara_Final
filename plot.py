import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
import imageio
import os


data = np.loadtxt("rungekutta.dat")

t = data[0]
x = data[1]
y = data[2]

plt.fig()
plt.plot(x,y)
plt.title('Trayectoria de la particula')
plt.xlabel('Coordenada X')
plt.ylabel('Coordenada Y')
plt.savefig('LaraDaniel_final_15.pdf')
plt.show()