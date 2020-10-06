# Sytax which will count the HOTWORD within file_one and print "results"
# variable which will print a string ass well as the qty of HOTWORD used in
# file_one. The file in which this data will be printed is file_two

"""
file_one = open ("find_the_asshole.txt","r")
file_two = open("asshole_count.txt","w")

sumHole = 0;


for x in file_one:
	for word in x.split():
		if word == "asshole": 
			sumHole +=1

results ="There are ",sumHole," assholes in your text."

# print(results)
file_two.write(str(results))

file_one.close()
file_two.close()

# print(x) asshole
:
"""

"""
-----------------------------------------------------------------------


# file_two = open("asshole_count.txt","w")
sumHole = 0 
# str_sum = str(sumHole)
results = ["There are",sumHole,"assholes in your text."]


with open ("find_the_asshole.txt",'r') as myfile:
	for x in myfile:
		for word in x.split():
			if word == "asshole":
				sumHole +=1

with open("asshole_count.txt","w") as fileTwo: 			
	for x in results:
		fileTwo.write(str(results))
		fileTwo.write(" ")

# file_two.write(str(results))
# file_two.close()

print("file 1 closed: ",myfile.closed)
print("file 2 closed: ",fileTwo.closed)
"""

# -----------------------------------------------------------------------


# Now the below example is the prefered method to opening a file for, it will
# automatically close said file
# "This is more a safe method"

file_two = open("asshole_count.txt","w")
sumHole = 0

with open ("find_the_asshole.txt",'r') as myfile:
	for x in myfile:
		for word in x.split():
			if word == "asshole":
				sumHole +=1

str_int = str(sumHole)
results = ["There are ",str_int," assholes in your text."]

file_two.writelines(results)

file_two.close()

print("file 1 closed: ",myfile.closed)
print("file 2 closed: ",file_two.closed) 
