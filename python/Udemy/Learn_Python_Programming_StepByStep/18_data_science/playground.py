import numpy as np

# To see the functions within numpy
# print(dir(np))  
# print(type(myAr))

lst = [12, 86, 3, 334, 22, 12]
# print(lst)

myAr = np.array(lst)
# We have used numpy to convert 'lst' into an array and have stored this into 'myAr'  

# print(np.sqrt(myAr))
#[ 3.46410162  9.2736185   1.73205081 18.27566688  4.69041576  3.46410162]


print(np.sin(myAr))
# .sin will find the sine value
# The sine is one of the fundamental functions of trigonometry (the mathematical study of triangles)
# [-0.53657292 -0.92345845  0.14112001  0.83667215 -0.00885131 -0.53657292]






####### COMPLETED NOTE below

# print(myAr.shape)
# This will print out the shape of our 1 dimensional array



# W e have converted our 1 dimensional array into a 2 dimensional array
'''
x = myAr.reshape(2,3)
print(x,type(x))
'''

# Data type confirmation
'''
if myAr.all() == type(np.ndlist):
    print("This is a list!")
else: 
    print("This is not a list, this an array.")
'''