
# EXAMPLE 1
ROI = 11.5 # GLOBAL variable can only be accessed outside/within a function (that does not include a variable with a similar name)

def calculate():
	ROI = 11.4 # Local variable created within function 
	print(ROI,id(ROI))

calculate() # 11.4 4515024976
print(ROI,id(ROI)) # 11.5 4516286096


# EXAMPLE 2
ROI = 11.5 # Global variable

def calculate():
	global ROI # global variable (ROI) can now be modified 
	ROI = 11.4 # mew "ROI" variable function
	print(ROI,id(ROI))

calculate() # 11.4 4539052112
print(ROI,id(ROI)) # 11.4 4539052112

help(calculate) 

