def locate_marks(m1,m2,m3):
	total = m1 + m2 + m3
	return total

def average(total):
	avg = total/3
	return avg 

def grade(avg):
	if avg > 80: 
		print("A")
	elif avg > 60: 		
		print("B")
	elif avg > 40: 
		sprint("C")
	else:
		print("F")

userGrade = int(input("Enter 1st Score: "))
userGradeTwo = int(input("Enter 2nd Score: "))
userGradeThree = int(input("Enter 3rd Score: "))

final_Grade = locate_marks(userGrade,userGradeTwo,userGradeThree)
avg = average(final_Grade)
print("Total Marks: {} Average: {}".format(final_Grade,avg))
grade(avg)

"""
Enter 1st Score: 64 // userGrade input 
Enter 2nd Score: 74 // userGrade input 
Enter 3rd Score: 55 // userGrade input  
Total Marks: 193 Average: 64.33333333333333
B
"""

# Noted version below in COMMENTS 
#

"""
> First function

# This function will add up the 3 (int) inputs by the user and will pass them on to the second function
def locate_marks(m1,m2,m3): #"locate_marks" function definition (m1-m3 are parameters)
	total = m1 + m2 + m3  # the "total" variable will take in 3 inputs and add them up, m* par will "catch" the 3 user inputs 
	return total # return will return the result of totals

> Second function

# This function will provide the (divided) average of the score returned from the First function
def average(total): #"average" function definition - the "total" (from first functinon) will be a parameter
	avg = total/3  # "avg" variable stored within Second function - returned "total" result will be divided by 3
	return avg # Return the result of "avg" 

> Third function

# This function will determine your gade with the results provided by the Second function
def grade(avg): # "grade" definition - will use the "avg" from second function as parameter
	if avg > 80: 
		print("A")
	elif avg > 60: 		
		print("B")
	elif avg > 40: 
		sprint("C")
	else:
		print("F")

userGrade = int(input("Enter 1st Score: "))
userGradeTwo = int(input("Enter 2nd Score: "))
userGradeThree = int(input("Enter 3rd Score: "))

final_Grade = locate_marks(userGrade,userGradeTwo,userGradeThree)
avg = average(final_Grade)
print("Total Marks: {} Average: {}".format(final_Grade,avg))
grade(avg)
"""