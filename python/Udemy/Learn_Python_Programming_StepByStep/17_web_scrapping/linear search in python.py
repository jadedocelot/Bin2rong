locked_code = [23,32,211,2,1,56,7]

def linear_func(array,key):
	if key in array:
		print("Located! The index position of your search is: ",array.index(key))
	elif key != array:
		print("Could not locate, please try again.")

print(locked_code)

usrInput = int(input("What are looking for? "))

linear_func(locked_code,usrInput)
