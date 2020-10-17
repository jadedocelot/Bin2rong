class shitHead:
	def __init__(self,name,rollno,std):	# This will initialize 3 properties
		self.rollno = rollno
		self.name = name
		self.std = std

	def total_marks(self,sub1,sub2,sub3): # adds up total, then stores it in "total" variable and returns total (BUT DOES NOT PRINT)
		total = sub1 + sub2 + sub3
		return total #  may be taken in anywhere within the class and outside (think meta world)

	def average(self,marks): # This method contains one property and takes in one argument
		avg = marks/3 # "agv" will take ONE argument and divide it by 3
		return avg # The (the actions performed within)avg will be returned 

	def grade(self,avg): # the "grade" method will take in "avg" as property and its argument
		if avg > 80: #As you can see "avg" will run through an if loop and which ever option the returned value applies to will print out a grade"
			print("A")
		elif avg > 60:
			print("B")
		elif avg > 40:
			print("C")
		else:
			print("F")


	def display(self): # the "display" method will print out the students info which is stored in our first __init__ method above
		print("\nName: {}\nRollno: {}\nclass: {}\n".format(self.name,self.rollno,self.std)) # <- format(self.name,self.rollno,self.std) is used to position properties/arguments within the STRING

 
name = input("What Is your name? ")
rollno = int(input("What Is your Roll Numbner? "))
std = int(input("What Grade Are You In: "))

test1 = int(input("What was your score for test 1: "))
test2 = int(input("What was your score for test 2: "))
test3 = int(input("What was your score for test 3: "))

s1 = shitHead(name,rollno,std) # s1 This will issue the value of our __init__ method within our "shitHead" class and use our name,rollno,std (INPUT) values as arguments BUT its also stores the the "shitHead" class in it's entirety
total = s1.total_marks(test1,test2,test3) # "Total" will store the value of the "total_marks" method within "s1"(which stores "shitHead") use our test1,test2,test3 (INPUT) values as arguments BUT its also stores the the "shitHead" class in it's entirety
average_marks = s1.average(total) #"average_marks" will store the "total_marks" method within "s1" which stores the "shitHead" class, it will use the value within the "total" variable as its argument

s1.display() # "avtivate" "display" within "s1" which stores the "shitHead" class, the funcions within this method will print out  a string
print("Total marks: {} Average:{}".format(total,average_marks)) # Here we will print a string which hold palceholders within it ({})
#These placeholders will hold placement for the following variables which have been declared above with values; average_marks and total
# .format is used for Python to know which order to print out the variables

s1.grade(average_marks) 	

""""
What Is your name? Edgar
What Is your Roll Numbner? 2111
What Grade Are You In: 10
What was your score for test 1: 87
What was your score for test 2: 32
What was your score for test 3: 77

Name: Edgar
Rollno: 2111
class: 10

Total marks: 196 Average:65.33333333333333
B
"""