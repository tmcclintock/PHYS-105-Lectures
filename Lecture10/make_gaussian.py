import numpy as np
import matplotlib.pyplot as plt

x = np.arange(-5,5,.01)
y = np.exp(-x*x)

plt.plot(x,y)
plt.xlabel("$x$")
plt.ylabel("$y$")
fig = plt.gcf()
fig.savefig("gaussian.png",dpi=300,transparent=True)
plt.show()
