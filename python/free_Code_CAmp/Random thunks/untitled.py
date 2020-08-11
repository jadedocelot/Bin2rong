





print('Beginning of nested list scrape:')
nest_list = [[4,8,5],[54,32,44],[32,2,77],[498,23,56],[34,2345,23]]
blank_list = []
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
