
import math_def as mf # <---- classic import

# Another way of importing:
# from math_def import add,sub,mult,add_ret, myDict <--------

# The above method will no longer require you to use specify the module name
# but only the function name

# ['__annotations__', '__builtins__', '__cached__', '__doc__', '__file__', '__loader__', '__name__', '__package__', '__spec__', 'mf'] 
# print(dir())

# The bottom print will print out the entire name of the module name
# print(mf.__name__)


# ModuleSpec(name='math_def', loader=<_frozen_importlib_external.SourceFileLoader object at 0x1028a8700>, origin='/Users/edgar/Desktop/Bin2rong/python/Udemy/Learn_Python_Programming_StepByStep/random_thunks/intro_to_modules/math_def.py')
# print(mf.__spec__)

# print(dir(mf))

# OUTPUT: NONE (...OK)
print(mf.__doc__)



a = int(input("Please enter a number for A: "))
b = int(input("Please enter a number for B: "))

x = mf.add_ret(a,b)


# using not operator 
# Check if dictionary is empty
 	# not
myPet =  mf.myDict

# I need to figure out how to set dicts in module files 

if x < 100:
    mf.mult(a,b)
    print("You managed to keep X below the limit, a pet has been added to your inventorty.")
    pet = input("Which of the following pets would you like to add to your inventory?\n1.Horse: May be ridden\n2.Dog: Maybe be used to call upon to attack enemies")
    myPet = mf.myDict[0] = pet  # We added a blank dict to our module, yay!
    print(myPet)
else:
    mf.sub(a,b)
    print("Sorry, your guess passed the limit. Please pay the fine and try again.")

# Need to figure out how to loop for having an empty list

# while not in myPet.key():
# 	continue
# else:
# 	print("Good to see you have some protection, you may pass")
