# Make your way into your econ professors grade database and replace your failing grades with passing grade. Once updated, grades must be returned as a tuple. Good luck. 

summerGrades = ("a","c","c","f","a",(0,0,0,0,100)) # original grades you started off with

print(summerGrades)

def grade_correction(): # function will remove failing grades, convert the remaining passing grades from a tuple to a list (to be modified) and converted back to a tuple, then returned
    passOne, *_,passTwo,(*_,passThree) = summerGrades #unpacks the failing grades from from variable
    x = passOne,passTwo,passThree # Already a tuple
    y = list(x)
    y[1] = "b" # insert "b" (value) - index placment 1  
    y[2] = "b-"  #insert value  - index placement 2 
    y.append("b") # inset value 
    y.append("a") #  insert value 
    y.append((89,79,83,88,100)) # inset array at the back of the index
    x = tuple(y) # convert (list) back into Tuple
    return x
    #print(y)
 
grade_correction()






#NOTE:
#current Grades:
# ['a', 'b', 'b-']

# Grades I want:  
# ["a","b","b-","b-","a",(89,79,83,88,100)]
