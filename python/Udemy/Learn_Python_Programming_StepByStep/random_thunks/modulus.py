# remainder = a - floor(a/b) * b (**FORMULA**) 

import math

# floor() is the lowest side of the value
# 3/3 is 3.33 which when using floor you are presented with the lowest side of the value. The lowest side of the the value of 3.33 is 3


help(math.floor)

# print(math.floor(10/3))
# OUTPUT: 3

# print(math.floor(-10/3))
OUTPUT: -4

a, b = 10,3
c = a % b
# print(c)
# OUTPUT FOR C is 1

# rem = 10 - 3 * -3 => -10 - (-9) => -10 + 9 => -1
