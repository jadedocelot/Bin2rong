import numpy as np
import numpy.matlib
import matplotlib.pyplot as plt

x_tower = np.arange(50).reshape(5,5,2)
y_tower = np.arange(50).reshape(10,5)

# sprint("Tower X")
# sprint(x_tower)
# sprint("t\∂Tower Y")
# sprint(y_tower)

for i in x_tower:
	for j in i:
		for x in j:
			if x != 28:
				print(x)
			else:
				print("Code RED. WE ARE SO SMART!")
