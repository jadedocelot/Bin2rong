from math_def import myList,intList
import math,random

# print(dir(math)) <-
# OUTPUT:
# ['__doc__', '__file__', '__loader__', '__name__', '__package__', '__spec__', 'acos', 'acosh', 'asin', 'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'comb', 'copysign', 'cos', 'cosh', 'degrees', 'dist', 'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp', 'fsum', 'gamma', 'gcd', 'hypot', 'inf', 'isclose', 'isfinite', 'isinf', 'isnan', 'isqrt', 'ldexp', 'lgamma', 'log', 'log10', 'log1p', 'log2', 'modf', 'nan', 'perm', 'pi', 'pow', 'prod', 'radians', 'remainder', 'sin', 'sinh', 'sqrt', 'tan', 'tanh', 'tau', 'trunc']

# print(math.pi)
# 3.141592653589793

# print(math.factorial(29))
# 8841761993739701954543616000000

# print(math.sqrt(29)) 
# OUTPUT:
#5.385164807134504

 # In order to use then random function, you must imort random
 # Once imported, the bootom function will generate a number between 1-200. You 
 # can multiply by a larger number for LARGER results
 # Note: if not multiplied by 100, you will end up with onyl 0.xxxx numbers
# print(random.random()*100)
		# OUTPUT: 87.83588999531533

 # Now what if we wanted a number without a decimal point, in this case we 
 # we would round

# print(round(random.random()*150))
	#OUTPUT: 12


# With the .choice function we have selected a random elemnet from "myList"	
# which is located in "math_def" (module)
# it is suggested that the choice function be used with a list 
# print(random.choice(myList)) 


# The variable below will print random number from the inList in math_def module
# Note that intlist consist of a list of numbers adding up to 302
# print(random.choice(intList))  <--- 



# The bottom example will uses the choice(s) function which will not only
# generate a random number but several random numbers 
# The (k=x) indicates the qty of random numbers youd like to generate 
print(random.choices(intList, k=20)) 
