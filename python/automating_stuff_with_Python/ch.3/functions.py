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



## Example 2: 

	# Untitled.py

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


