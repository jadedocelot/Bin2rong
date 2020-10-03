while True:
	try:
		x = int(input("Please enter in a digt: "))
		break
	except:
		print("Oooppp, it appears as though your dumbass has entered in something that is NOT a number. Try again.")


if x < 1002:
	print("Please hold") 
else:
	while True:
		try:
			x = int(input("Please FUCK OFF: "))	
			if x < 1002:			
				break
		except:
			if x > 1002:
				print("Please try again")

