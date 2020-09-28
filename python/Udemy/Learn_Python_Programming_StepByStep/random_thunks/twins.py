import random
from random import seed
from random import randint




user_pass = input("Please Enter the Password to Access The Data Count: \n")
 
if user_pass == "can":
	x = int(input("Enter a Number For  X\n")) 

	rand_int = int(random.uniform(0,20000))

	if x < 100:
 		while x < rand_int:
 			print(x)
 			x += 1
	else:
		print("I Have No Idea What You Are Talking About....")






"""
# seed(3000)
# x = randint.randrange(32,50,100)
rand_int = int(random.uniform(0,20000)) # !!! I need to figure out how to get a random number through every print
# print(x)
if x < 100:
 	while x < rand_int:
 		print(x)
 		x += 1
else:
	print("I Have No Idea What You Are Talking About....")
"""