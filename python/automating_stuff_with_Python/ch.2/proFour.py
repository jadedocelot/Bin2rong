name_pass = False

while name_pass == False:
    user_name = input("What's your name?")
    if user_name == "edgar":
    	name_pass = True
    	continue

user_age = input("How old are ya bish?\n",)
USER_AGE = int(user_age)

if USER_AGE > 21:
	continue
	print("Aight, can I see some ID")
else:
	print("Sorry kiddo, your're too young")
	break


# Figure out how to continue on to the next function

# Then set up external files which will represent the ID then input them, user will not know which ID (text file) is the correct ID  