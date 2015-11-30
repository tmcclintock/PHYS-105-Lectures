import numpy as np
import matplotlib.pyplot as plt

x = np.arange(0,2*np.pi,0.01)

y1 = np.sin(x)
y2 = np.cos(x)
y3 = np.sin(x)**2
y4 = np.cos(x)**2

plt.plot(x,y1,x,y2,x,y3,x,y4)
plt.show()
