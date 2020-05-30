import numpy as np
import matplotlib.pyplot as plt

A = np.loadtxt('datos.txt')

t = A[:,0]
h = A[:,1]
v = A[:,2]

f1 = plt.figure(figsize=[5,4])
plt.subplot(2,1,1)
plt.plot(t,h)
plt.ylabel('altura [m]')
plt.subplot(2,1,2)
plt.plot(t,v)
plt.xlabel('tiempo [s]')
plt.ylabel('velocidad [m/s]')
plt.suptitle('Simulación método de RungeKutta4 en C++')
plt.savefig('grafico.pdf')
