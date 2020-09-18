# import is similar to <iostream> // which is in c++
# using (as) we have now changed the name of the import in this file to "mf"
# import math_def as mf <---- classic import

# Another way of importing:
from math_def import add,sub,mult,add_ret, myDict

# The above method will no longer require you to use specify the module name
# but only the function name

a = int(input("Please enter a number for A: "))
b = int(input("Please enter a number for B: "))

x = add_ret(a,b)

# using not operator 
# Check if dictionary is empty

# myPet = not myDict

# I need to figure out how to set dicts in module files 

if x < 100:
    mult(a,b)
    print("You managed to keep X below the limit, a pet has been added to your inventorty.")
    myPet = myDict[1] = "Dog" # We added a blank dict to our module, yay!
    print(myPet)
else:
    sub(a,b)
    print("Sorry, your guess passed the limit. Please pay the fine and try again.")

# Need to figure out how to loop for having an empty list

# while not in myPet.key():
# 	continue
# else:
# 	print("Good to see you have some protection, you may pass")