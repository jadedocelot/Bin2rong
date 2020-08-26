# See functions.py for NOTES on this game

import random
secretNumber = random.randint(1, 20) 
print("I am thinking of a number between 1 and 20.")


for guessesTaken in range (1,7): # for range(1,7) will allow the user 6 guesses before break 
	print('Take a guess.')
	guess = int(input()) 
	if guess < secretNumber:  
		print('Your guess is too low.')
	elif guess > secretNumber:  
		print('Your guess is too high')
	else:  
		break  
		

if guess == secretNumber: 
	print("Good job! You guessed my number in " + str(secretNumber))
