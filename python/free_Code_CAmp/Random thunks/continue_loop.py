

while True: 
	line = input('> ') # you will infinitely be asked to input charaters
	if line[0] == '#': # if # entered in then move on to continue
		continue # if # entered in, do not print out input, start from the beginning with blank input
	if line == 'done':
		break
	print(line)
print('Done')