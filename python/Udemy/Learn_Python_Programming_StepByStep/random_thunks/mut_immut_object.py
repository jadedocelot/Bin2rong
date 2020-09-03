# Integers are considered IMMUTABLE, which means that they can't be modified 
# In the example below we swap out the (x) integer which is 10 with "string"

# Though remeber that that it is immutable so its just using another space of memeory, that 10 is still in Pythons memory.
# The way we can can locate it is with the id() function

x = 10 
y = x 
print(id(x))
## This ID for x = 10 is 4465247648

x = "string"

print(id(x))
## This ID for x = 10 is 4468780784

print(y,id(y))



print("==================================================")
print("x is ",x," and the ID is ",id(x))
print("\n y is ",y," and the ID is ",id(y) )
print("==================================================")


# Though you can see that we placed that 10 variable (along with its ID) in "b"
