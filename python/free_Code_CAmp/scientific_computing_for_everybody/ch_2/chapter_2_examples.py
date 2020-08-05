# The bottom example convert a string into an integer and adds one, then presemts the results to the user
euFlr = input('What EU floor are you on? ')
usFlr = int(euFlr) + 1 	
print('You are currently on floor: ', usFlr) 


# The example below takes input and prints it out along with a greeting
userGreet = input('What is your name?: ')
print('Welcome ', userGreet)


# The bottom example is a an input which requests an integer to countdown to zero/ repeated process

userGuess = input("Where would you like to sart the countdown?: ") # Enter in an INT (NOTE: error will occur if string (characters are entered in))
intGuess = int(userGuess) # Conver input into an integer

while intGuess > 0: # while (converted) input is greater than zero
	print(intGuess)	# print out input
	intGuess = intGuess -1 # AND decrement until zero is reached
print("\n|This is the end of the code.|\n") # zero will not print outk (countdown will stop at 1), though once zero is reached this final message will print out


# The exmaple uses a function to coundown to 0, though this function will only be activated if the 
# user input is < 100. Otherwise if the input is greater than 200 the function will be skipped and user will be presented with
# 'You know what, forget it.'
# Conditional steps

def cntDwn(arg):
	while arg > 0:
		print(arg)	
		arg = arg -1
	print("\n|This is the end of the code.|\n")

userGuess = input("Where would you like to sart the countdown?: ")
intGuess = int(userGuess)

if intGuess < 100:
	cntDwn(intGuess)
if intGuess > 200: 
	print('You know what, forget it.') 



# Example of a numbered countdown below:

def cntDwn(arg):
while arg > 0: # Will start from what user has entered in  and countdown to zee r
		print(arg)	
		arg = arg -1 
	while arg < 50:
		print(arg)	
		arg = arg +	1 # Then will  count up from zero to 50(49) 

userGuess = input("Where would you like to sart the countdown?: ")
intGuess = int(userGuess)

if intGuess < 100:
	cntDwn(intGuess)
if intGuess > 200: 
	print('You know what, forget it.') 