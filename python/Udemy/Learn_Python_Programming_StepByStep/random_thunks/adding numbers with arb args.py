# What the fuck am I doing with this  / input loop? For what?ß

# numbers = 12,125.2,6,322,4,56.2
def adding(y,w):
	global x
	total = sum(y,w)
	x = total

def num_pair(x,y):
	print(x,y)

user_input = int(input("Enter the numbers in which you would like to add together: "))
user_input_Two = int(input("Enter the numbers in which you would like to add together: "))
on = True
x = 0

while on == True:
	adding(user_input,user_input_Two)
if user_input == "end":
	on = False

print(x)
 	


# if userInput == "end" or userInput == "End" or userInput == "END":
# 	print("That will be all for today!")
# else:
# 	adding(userInput)
# 	continue
