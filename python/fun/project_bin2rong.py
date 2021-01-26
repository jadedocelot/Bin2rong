import numpy as np
import numpy.matlib
import matplotlib.pyplot as plt
import timeit
from timeit import timeit

# testAr = np.arange(20).reshape(4,5)
# print(testAr)
'''
[[ 0  1  2  3  4]
 [ 5  6  7  8  9]
 [10 11 12 13 14]
 [15 16 17 18 19]]
'''

x = [["c","c","c","c","a"],["c","c","c","c","a"],["c","c","c","c","b"]]

y = np.reshape(x,(5,3))

# y = our reshape of x
'''
[['c' 'c' 'c']
 ['c' 'a' 'c']
 ['c' 'c' 'c']
 ['a' 'c' 'c']
 ['c' 'c' 'b']]
'''

for i in y:
	for x in i:
		if x == "c":
			list(y)
			print(y)
			y.remove(x)
			# array(y:)



# y.pop(x)
# x = 'Cystonine'



