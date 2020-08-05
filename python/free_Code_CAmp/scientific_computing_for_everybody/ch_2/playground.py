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