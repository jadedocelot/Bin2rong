
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
			A = "A"
			return A
		elif avg > 60:
			B = "B"
			return B
		elif avg > 40:
			C = "C"
			return C
		else:
			F = "F"
			return F

	def display_student_info(self):
		print("\nName: {}\nRollno: {}\nclass: {}\n".format(self.name,self.rollno,self.std))

	def display_student_grade(self):
		print("Total marks: {} | Average:{} | Grade:{}".format(total,avg,grade))


name = input("What Is your name? ")
rollno = int(input("What Is your Roll Numbner? "))
std = int(input("What Grade Are You In? "))

test1 = int(input("What was your score for test 1: "))
test2 = int(input("What was your score for test 2: "))
test3 = int(input("What was your score for test 3: "))

s1 = shitHead(name,rollno,std)
s1.total_marks(test1,test2,test3)
s1.average(total)


#total = s1.total_marks(test1,test2,test3)

s1.display_student_info()
s1.display_student_grade()
#print("Total marks: {} Average:{}".format(total,average_marks))

# s1.grade(average_marks) 	

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