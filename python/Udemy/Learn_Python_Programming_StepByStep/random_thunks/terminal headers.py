header_test = "This is an intro to Python programming"
factsOne = "Javascript rocks!, Javascript rocks!"
factsTwo = "Python sucks!"
email = "eortega58@yahoo.com"

words_of_the_wise = "Sometimes I wonder if a pizza is really a pizza or really just a slice of god"



print("Below you will find a number of header options: \n")

print(header_test.center(len(header_test)+10,"_"))

"""
Below you will find a number of header options:

_____This is an intro to Python programming_____

"""

print(header_test.center(len(header_test)+10,"~"))

"""
Below you will find a number of header options:

~~~~~This is an intro to Python programming~~~~~
"""



# Now what if the user wanted to change a few words within the a string, this is where the .replace() function comes in hand
# See variables above

#1
print(factsOne.replace("Javascript","Python"))
#2 
print(factsOne.replace("Javascript","Python",1)) # The one(1) idicates the number of words to replace
#3
print(factsTwo.replace("Python","Javascript"))

"""
1.Python rocks!
2.Python rocks!, Javascript rocks!
3.Javascript sucks!
"""

# print(factsOne.center(len(factsOne.replace("Javascript","Python")+10,"~"))≠≠≠
# print(factsOne.center(len(factsOne.replace("Javascript","Python")+10,"~"))


# If a user wanted to know the number of times a word (or integer in a list) in a string was used then  

print(factsOne.count("Javascript"))
# when run in terminal you will receive the following output: 2

# Now what if you wanted to know if a string started with a specifc phrase, word, or integer, we can then refer to the the. .startswith function 

print(words_of_the_wise.startswith("Sometimes I wonder"))
#output: True

print(words_of_the_wise.startswith("There is no god in my head"))
#OUTPUT: False	 

# And to get the end of something:

print(email.endswith("@yahoo.com"))
#OUTPUT: True

#MAKE SURE TO ALWAYS USE the help() function when needing info on functions and methods 

help(email.isdecimal)