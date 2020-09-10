course = ["scala","C","Python","Go","Rust"]
duration = [20,40,60,80,100]

#for index, c in enumerate(course):
	#print(index,": ", c, end="\ns")

# The enumerate function is used to numer to number each iterration 
# And index is used almost as a parameter for that enumeration

#OUTPUT:
"""
0 : scala
1 : C
2 : Python
3 : Go
4 : Rust
"""

# for d,c in zip(duration,course): 
	# print("Duration: ",d," Course Name: ",c)

# 1st line used d and c almost as paramters 
# The zip function combines both lists
# The duration will also act a beaker for the itteration, in which case the iteration will only go as far as the duration goes

"""
Duration:  20  Course Name:  scala
Duration:  40  Course Name:  C
Duration:  60  Course Name:  Python
Duration:  80  Course Name:  Go
Duration:  100  Course Name:  Rust
"""


for c in reversed(course):
	print(c,end=" ")

#Rust Go Python C scala