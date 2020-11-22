import numpy as np 
import matplotlib.pyplot as plt 
  
in_array = np.linspace(-(29*np.pi), 29*np.pi, 20) 
out_array = np.cos(in_array) 
  
print("in_array : ", in_array) 
print("\nout_array : ", out_array) 
  
# red for numpy.cos() 
plt.plot(in_array, out_array, color = 'red', marker = "o") 
plt.title("numpy.cos()") 
plt.xlabel("My Brain") 
plt.ylabel("Reality") 
plt.show() 