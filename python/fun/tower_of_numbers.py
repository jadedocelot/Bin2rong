import numpy as np
import numpy.matlib
import matplotlib.pyplot as plt

x_tower = np.arange(50).reshape(5,5,2)
y_tower = np.arange(50).reshape(10,5)

# sprint("Tower X")
# sprint(x_tower)

for i in x_tower:
	print(i)
	for j in i:
		for x in j:
			if x % 2 == 0:
				x = "RED"
				# print(x)
			# elif x % 2 != 0:

# redacted = red_marker()
# print(redacted) 


# print("Tower X\t")
# print(x_tower)