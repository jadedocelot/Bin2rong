import numpy as np
import numpy.matlib
import matplotlib.pyplot as plt
import timeit
import random
from timeit import timeit
from random import seed
from random import randint

x_tower = np.arange(50).reshape(5,5,2)
y_tower = np.arange(randint(1,100))
# int_gen = randint(1,100)
temp = 0

# print("Tower X")
# print(x_tower)

def tempConversion():
	global temp
	for i in x_tower:
		for j in i:
			for x in j:
				if x % 2 == 0:
					temp = 1 + temp
print(temp)


# tempConversion()

# temp = (temp * 1/5) + 32
# tempConvTime = timeit(tempConversion, number = 100000)

# print("You current temp is:| {}˚F |".format(temp))
# print(tempConvTime)

# print(y_tower)

# print(int(temp))
# redacted = red_marker()
# print(redacted) 
# print("Tower X\t")
# print(x_tower)
