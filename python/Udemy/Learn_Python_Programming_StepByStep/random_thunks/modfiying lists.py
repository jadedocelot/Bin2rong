# Remember that lists are imutible


myList = ["C++", "Python", "Flask","Julia","Pizza"]
myListTwo = [12,345,22,1,233,75,43,4,2,36]



# The append method will add "Grilled Cheese" to the list
myList.append("Grilled Cheese")

print(myList) 


#As you might have guessed .count will count the number of times an element was used in a list
print(myList.count("Python") )

 
# To see the position of an element, the .index() method will need to be used

print(myList.index("Flask"))
# Output: 2 (remeber that this list are indexed 0-4)

# What if you want ot wipe out the list to add new elements 
# OR maybe create a hacking game that will put you at rist of deleting your progress (obviously a TIME will be included for effects and suspense) 

# myList.clear()
# print(myList)

# For further examples to work this section will have to be in quotes

# If only one element will need to be removed from the list we can use the following method

myList.remove("Python")
# print (myList)

#you may also use the .pop() fucntion, though note that if pararmeters aref not included that by default it will remove the LAST emlement of the list

myList.pop()
# When using .pop() the user may specify which element is to be removed by providing the INDEX NUMBER

# print (myList)

# this will add the list

# This following will sort the list from a-z but note that when doing this the parameters are not required like if being done in reverse
myList.sort(reverse = False) 
print(myList)


# to reverse the list, be sure to do the following
myList.sort(reverse = True)
print(myList)

# A sort example with integers
myListTwo.sort() 
print(myListTwo)


# to REPLACE an element with a new one:
myListTwo.insert(4,200) 
# first parameter (4) is the index location
# second parameter (200) is the new element
print(myListTwo)
# Note that if the index value provided in incorrect, by default the new element will be added to the back of the list ("back of the bus bitch ")


# The user want to exten their the length of their list by concentating another list, in this case we must use the .extend() method 
myList.extend(myListTwo)
print(myList)
