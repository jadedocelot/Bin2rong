

print('Beginning of nested list scrape:')
nest_list = [[4,8,5],[54,32,44],[32,2,77],[498,23,56],[34,2345,23]]
blank_list = []
sub_holder  
nest_snake = 1

for sub_bot in nest_list:
	for element in sub_bot:
		if element > nest_snake:
			nest_snake = 
			blank_list.append(element)
print(blank_list)
print('WE DID IT!')
# print()


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