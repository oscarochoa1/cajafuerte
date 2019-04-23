import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ prueba1.cpp -o prueba1.x")
a = os.system("./prueba1.x > prueba1.dat")


b = os.system("g++ prueba2.cpp -o prueba2.x")
b = os.system("./prueba2.x > prueba2.dat")

plt.figure()
data = np.loadtxt("prueba1.dat")
plt.plot(data)
plt.savefig("prueba1.png")


plt.figure()
data2 = np.loadtxt("prueba2.dat")
plt.plot(data2)
plt.savefig("prueba2.png")
