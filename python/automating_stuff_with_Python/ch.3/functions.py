# Functions.py


The None Value:

- in Python there is a value called "None", which represents the absence of a value. None is the only value of the "NoneType" data type.

	* None MUST be typed with a capital N
	
	* OTHER programming languages might call this value, null, nill, or undefined. Just like the Boolean True or False values.

- The None value-without-a-value can be helpful when you need to store something that wont be confused for a real value in a variable



	Local & Global Scopes:

- Parameters and variables that are assigned in a called function are said to exist in that functions (local scope)
- Variables assigned outside of a function are called global scope


- Think of a scope as a container for variables
 
 * when a scope is destroyed

 * When a scope is destroyed, all variables stored within said detroyed scope are forgotten

- Code within a global scope cannot use any local variables

	* however a local scope can access global variables


def spam():
	eggs = 31224


spam()
print(eggs)

# OUTPUT:
Traceback (most recent call last):
  File "untitled.py", line 10, in <module>
    print(eggs)
NameError: name 'eggs' is not defined


# Error occurred cause global scopes cannot access local scope variables



		The Reasons Behind Different Scopes

- Is for when variables is modified by the code in a particular call to a funciton, the function interacts wiht the rest of the program only through its parameters and the return value. 

	* This will reduce the chances of running into bugs

	* It is a bad habit to rely on global variables as your code begins to scale larger amounts of lines


	Local Scopes Cannot Use Variables in Other Local Scopes
	

		def spam():
			eggs = 99
			bacon()
			print(eggs)

		def bacon():
			ham = 101
			eggs = 0

		spam()



	Global Variables Can Be Read From a Local Scope


def spam():
	print(eggs)

eggs = 42

spam()
print(eggs)

# Since there is no parameters named eggs or any code that assigns eggs a value in the spam() function

# When eggs is used in spam(), Python considers in a reference to the global variable eggs. 

# This is why 42 is printed when the previous program is run




		Local and Global Variables with the Same Name


	- To simplify your life, avoid using local variable that have the same name as a global variable or another local variable (DUH!)

______________________________________________
		
		def spam():
			eggs = 'spam local'
			print(eggs) # Prints 'spam local'
		
		def bacon():
			eggs = 'bacon local'
			print(eggs)	# prints 'bacon local'
			spam()
			print(eggs) # prints 'bacon local'
		
		eggs = 'global'
		bacon()
		print(eggs)	# prints 'global'
		
		""" 
		OUTPUTS: 
		
		bacon local
		spam local
		bacon local
		global
		"""




							$% The Global Statement %$

- If you need to modify a global variable from within function, use the global statemnt
	
	* If you have a line such as (global ) eggs at the top of the functtion, it tells Python, "in this function, eggs refers to the global"

## Example 1:

def spam():
	global eggs # eggs is now global, which the value ('spam') is carried throughout the syntax
	eggs = 'spam'

eggs = 'global'

spam() 
print(eggs)

	________________________________

## Example 2: 

def spam():
	global eggs
	eggs = 'spam'

def bacon():
	eggs = 'bacon'

def ham():
	print(eggs)

eggs = 42
spam()
bacon()
ham()
print(eggs)

# OUTPUT: spam
# OUTPUT: spam



def spam():
	print(eggs) # ERROR using a variable before assigning (within a function) will cause an error to appear
	eggs = 'spam local'

eggs = 'global'
spam()



# OUTPUT:

"""
Traceback (most recent call last):
  File "untitled.py", line 8, in <module>
    spam()
  File "untitled.py", line 4, in spam
    print(eggs)
UnboundLocalError: local variable 'eggs' referenced before assignment
"""

Exceptiong Handling

def spam(divideBy):
	return 42 / divideBy # parameter


print(spam(2))
print(spam(12))
print(spam(0))
print(spam(1))


# OUTPUT:
"""
21.0
3.5
Traceback (most recent call last):
  File "untitled.py", line 9, in <module>
    print(spam(0))
  File "untitled.py", line 4, in spam
    return 42 / divideBy # parameter
ZeroDivisionError: division by zero
"""

# The following error message is received beceuse we have attempted to divide by zero. This can be avoided with TRY and EXCEPT statements. These are intended for when a user might suspsect a future crash from a syntax


	def spam(divideBy):
		return 42 / divideBy # parameter
	
	try:
		print(spam(2))
		print(spam(12))
		print(spam(0))
		print(spam(1))
	except ZeroDivisionError: # This will print out once a bug is reached within our code block
		print('!!!Error!!!!: cannot divide by zero!!!!!!!')

# this can be a great tool to pinpoint bugs

		***** - GUESSING GAME *****


import random # This will import a random int module. This will allow random.randint()
secretNumber = random.randint(1, 20) #"secretNumber" value = random int 1-20
print("I am thinking of a number between 1 and 20.")

#Ask the player for 6 guesses
for guessesTaken in range (1,7): # for range(1,7) will allow the user 6 guesses before break 
	print('Take a guess.') # Will print after every (failed) guess
	guess = int(input()) # input for guesses

	if guess < secretNumber: # if guess (input) is less than (random)secretNumber 
		print('Your guess is too low.') #print this
	elif guess > secretNumber: # if guess (input) is HIGHER than (random)secretNumber 
		print('Your guess is too high') # print this
	else: # and once you have reached your 6 (count limit) break 
		break # THE END 
		# end of code block for 6 count

if guess == secretNumber: # Though if you guess the correct number
	print("Good job! You guessed my number in " + str(secretNumber)) # print winning message as well as  the winning number

# We convert the guessing number from an INT to string, since Python cant concentate numbers and strings, only strings and strings


/// Colatz Sequence


print("enter a number:")
try:
    number = (int(input()))
except ValueError:
          print("Please enter a valid INTEGER.")


def collatz(number):
    while number != 1:

        if number % 2==0:
            number = (number//2)
            #print(number)
            return (print(int(number)))

        elif nnumber % 2==1:
            number = (3*number+1) 
            #print(number)
            return (print(int(number)))

        continue


collatz(number)