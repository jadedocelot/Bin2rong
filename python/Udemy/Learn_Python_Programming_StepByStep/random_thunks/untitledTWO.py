# This documentation comes in HANDY for USER made functions

def mul(a,b):
	"""
	This function multiplies 2 numbers a and b return the result
	:param a:
	:param b:
	:return: c = a*b
	"""
	c = a * b
	return c


# help(mul) # will not only present the functions above but the documentation in it as well

# mul(10,20)

print(mul.__doc__)
# This line will print out the documentation that has been placed above in TRIPPLE QUOTES 



# OUTPUT when ran on a terminal
"""
Help on function mul in module __main__:
mul(a, b)
    This function multiplies 2 numbers a and b return the result
    :param a:
    :param b:
    :return: c = a*b
"""