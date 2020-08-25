# Untitled.py 

"""
total = 0
count = 0

while True:
	inp = input('Enter a number: ') 
	if inp == 'done': break
	value = float(inp)
	total = total + value
	count = count + 1

average = total / count
print('Average: ', average)
"""

numlist = list() # list() method will generate an empty list and assign it to numlist
while True: # while (loop) will continue on as long as its True
	inp = input('Enter in a number: ') # user input value stored in "inp" variable
	if inp == 'done': break # If input value == "done" then break/end code 
	value = float(inp) # while input == integer, store value in "value" integer and convert to a floating number. (21 -> 21.0)
	numlist.append(value) # Then add float to "numlist" (list)

average = sum(numlist) / len(numlist) # once outside of while block (a break was reached once 'done' was entered into the input. Python will then add up the float elements with the list and stored said added value into average
print("Average: ", average)# Python will then print out a concentationo of average and a string


# The code below will print out the list of stored flots before reaching the sum() method
print('\nYour list history: ',numlist, "\n")