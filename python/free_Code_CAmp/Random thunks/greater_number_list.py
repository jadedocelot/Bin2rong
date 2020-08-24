

										#[[[Objective Completed]]]

# The goal is to have our syntax itterate through the list of nested lists, and aquire the largest number from each nest and place it into a blank list. Once itteration is complete we should have a new list which consists of ONLY the largest numbers inside of (nest_list)


#Fifth Try
print('Beginning of nested list scrape:')
nest_list = [[4,8,5],[54,32,44],[32,2,77],[498,23,56],[34,2345,23]]
blank_list = list() # list() is a method which will create an empty list
nest_snake = None

for sub_bot in nest_list:
	for element in sub_bot:
		if nest_snake == None:
			nest_snake = element
		elif element > nest_snake:
			nest_snake = element
			blank_list.append(element)
print(blank_list)
print('WE DID IT!')


#OUTPUT:
"""
[8, 54, 77, 498, 2345]

"""

# MASTER syntax with NOTES:

print('Beginning of nested list scrape :')
nest_list = [[4,8,5],[54,32,44],[32,2,77],[498,23,56],[34,2345,23]] # our nested lists
blank_list = [] # Blank list in which we will be storing our numbers
nest_snake = None # our empty variable which will be be going though each nest 

for sub_bot in nest_list: # (sub_bot) will be our entrance into the list (but not the nest)
	for element in sub_bot: #Now inside of the list we will then initiate (element) which will itterate through the nests
		if nest_snake == None: # we want to use the first number as a starting point but not store into out blank list, so we then store the first number not into our list but our "empty" variable.
			nest_snake = element # with this
		elif element > nest_snake: # Now that (nest_snake) is no longer empty Python will consider the above if statement FALSE and will now run through this statement, which states, IF (elements) current position is currently larger than (nest_snake) then.
			nest_snake = element # (nest_snake) will inherit that position (whatever integer the itteration is currently on) as its new value and 
			blank_list.append(element) # ADD that (larger) number into our blank list.
print(blank_list) # upon completion of itteration, python will OUTPUT are newly updated list (which is no longer empty, but home of (nest_snake)s LARGEST numbers = D) 
print('WE DID IT!')




## FIRST ATTEMPT:
"""
print('Beginning of nested list scrape:')
nest_list = [[4,2,5],[54,32,44],[32,2,7]]
blank_list = []

nest_snake = 1


for sub_bot in nest_list:
	for element in sub_bot:
		if element < nest_snake:
			sub_bot = nest_snake
			blank_list.append(sub_bot)
		print(blank_list)
print('WE DID IT!')
"""

#OUTPUT:
"""
[1]
[1, 1]
[1, 1, 1]
[1, 1, 1, 1]
[1, 1, 1, 1, 1]
[1, 1, 1, 1, 1, 1]
[1, 1, 1, 1, 1, 1, 1]
[1, 1, 1, 1, 1, 1, 1, 1]
[1, 1, 1, 1, 1, 1, 1, 1, 1]
WE DID IT!
"""




## SECOND ATTEMPT
"""
print('Beginning of nested list scrape:')
nest_list = [[4,2,5],[54,32,44],[32,2,7]]
blank_list = []

nest_snake = 1

for sub_bot in nest_list:
	for element in sub_bot:
		if element > nest_snake:
			element = nest_snake
			blank_list.append(sub_bot)
		print(blank_list)
print('WE DID IT!')
"""
#OUTPUT

"""
Beginning of nested list scrape:
[[4, 2, 5]]
[[4, 2, 5], [4, 2, 5]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44], [54, 32, 44]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44], [54, 32, 44], [54, 32, 44]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44], [54, 32, 44], [54, 32, 44], [32, 2, 7]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44], [54, 32, 44], [54, 32, 44], [32, 2, 7], [32, 2, 7]]
[[4, 2, 5], [4, 2, 5], [4, 2, 5], [54, 32, 44], [54, 32, 44], [54, 32, 44], [32, 2, 7], [32, 2, 7], [32, 2, 7]]
WE DID IT!
"""




#3rd Attempt 
"""
print('Beginning of nested list scrape:')
nest_list = [[4,2,5],[54,32,44],[32,2,7]]
blank_list = []

nest_snake = 1


for sub_bot in nest_list:
	for element in sub_bot:
		if element < nest_snake:
			sub_bot = nest_snake
			blank_list.append(sub_bot)
		print(blank_list)
print('WE DID IT!')
"""

#OUTPUT:
"""
[4, 8, 54, 77, 498, 2345]
"""
