#Tom McClintock
#PHYS 105
#to run: $python pyhist.py

#Import modules
import numpy as np #this has really good file I/O
import matplotlib.pyplot as plt #this has plotting

#Read in the file
filename = "walker_data.txt"
data = np.genfromtxt(filename)

#See what shape the data is in
print np.shape(data)

#Split off the two rows of the data
#into distances and number counts
distances  = data[:,0] #: means "all elements"
numwalkers = data[:,1]

#Make a histogram
plt.bar(distances, numwalkers, width=1)
plt.xlim(-10,10)
plt.xlabel("Distance from origin")
plt.ylabel("Number of walkers")
plt.show()
