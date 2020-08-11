
# The following will show an iterrartion that will store the largest number within the list and will output it to the user upon completion



#examples without notes: 

largest_so_far = -1

print("Our largest number so far is: ",largest_so_far)
for the_num in [3,41,12,8,77,15]:
	if the_num > largest_so_far:
		largest_so_far = the_num
	print(largest_so_far, the_num)
print("And out largest number is: ", largest_so_far)


#OUTPUT:

#Our largest number so far is: -1
# 3 3
# 41 41 
# 41 12
# 41 8
# 77 77
# 77 15
# And our largest number is: 77


#examples WITH notes: 

largest_so_far = -1

print("Our largest number so far is: ",largest_so_far)
for the_num in [3,41,12,8,77,15]: #our (the_num) variable will go through each element within the list and print it out
	if the_num > largest_so_far: # if element which my_num has landed on is larger than the value of (largsest_so_far(which starting value is -1))
		largest_so_far = the_num # it will then store that large value into (largest_so_far), but it not it will then leave it as is and proceed on to the next element. 
	print(largest_so_far, the_num) #Print the current value of largest_so_far and my_num
print("And out largest number is: ", largest_so_far)# Python will print out the following to indicate the completion of itteration 


#OUTPUT:

#Our largest number so far is: -1
# 3 3
# 41 41 
# 41 12
# 41 8
# 77 77
# 77 15
# And our largest number is: 77