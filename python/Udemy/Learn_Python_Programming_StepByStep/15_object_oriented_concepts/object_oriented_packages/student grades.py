class shitHead:
	def __init__(self,name,rollno,std):	
		self.rollno = rollno
		self.name = name
		self.std = std

	def total_marks(self,sub1,sub2,sub3):
		total = sub1 + sub2 + sub3
		return total

	def average(self,marks):
		avg = marks/3
		return avg 

	def grade(self,avg):
		if avg > 80:
			print("A")
		elif avg > 60:
			print("B")
		elif avg > 40:
			print("C")
		else:
			print("F")


	def display(self):
		print("\nName: {}\nRollno: {}\nclass: {}\n".format(self.name,self.rollno,self.std))

 
name = input("What Is your name? ")
rollno = int(input("What Is your Roll Numbner? "))
std = int(input("What Grade Are You In: "))

test1 = int(input("What was your score for test 1: "))
test2 = int(input("What was your score for test 2: "))
test3 = int(input("What was your score for test 3: "))

s1 = shitHead(name,rollno,std)
total = s1.total_marks(test1,test2,test3)
average_marks = s1.average(total)

s1.display()
print("Total marks: {} Average:{}".format(total,average_marks))

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