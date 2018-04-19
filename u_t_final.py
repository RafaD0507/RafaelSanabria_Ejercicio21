import matplotlib.pyplot as plt
import numpy as np

datos = np.loadtxt("u_t_final.txt")
datos2 = np.loadtxt("u_no_lineal.txt")
plt.figure(figsize=(10,10))
plt.plot(datos[:,0], datos[:,1], label="Lineal")
plt.plot(datos2[:,0], datos2[:,1], label="No lineal")
plt.title("Funcion u en t=0.5")
plt.legend()
plt.xlabel("x")
plt.ylabel("y")
plt.savefig("u_t_final.pdf")
plt.close()
