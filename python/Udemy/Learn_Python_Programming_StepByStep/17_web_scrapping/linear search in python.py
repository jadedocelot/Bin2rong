locked_code = [23,32,211,2,1,56,7]


def linear_func(array,key):
	if key in array:
		print("Located! The position of your search is: ",array.index(key))
	elif key != array:
		print("Could not locate, please try again.")

print(locked_code)

usrInput = input("What are looking for? ")
myNum = int(usrInput)


linear_func(locked_code,myNum)
