
while True:
	try:
		username = input("Enter username: ")
		if len(username) <= 5 or username.count(" ") > 0:
			raise ValueError("Please Enter a Valid Username. ","Username cannot contain less than 5 characters.","Username cannot contain any spaces.")  
		print("Hello,",username)
	except ValueError as vae:
		print(vae.args[1])
	else:
		break
	
	# raise is a keyword for exception