import numpy as np
import matplotlib.pyplot as plt

# Load data from files
data1 = np.loadtxt("data1.txt")
data2 = np.loadtxt("data2.txt")

# Separate time and current values for each dataset
t1, i_c = data1[:, 0], data1[:, 1]
t2, i_d = data2[:, 0], data2[:, 1]

# Plotting
plt.plot(t1, i_c, label='Conduction Current', color='blue')
plt.plot(t2, i_d, label='Displacement Current', color='red')

# Adding labels and legend
plt.xlabel('Time')
plt.ylabel('Current')
plt.title('Conduction Current vs Displacement Current')
plt.legend()

# Display the plot
plt.grid(True)
plt.show()

