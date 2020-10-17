class shitHead:
	def __init__(self,name,rollno,std):	
		self.name = name
		self.rollno = rollno
		self.std = std

	def display(self):
		print("\nName: {}\nRollno: {}\nclass: {}\n".format(self.name,self.rollno,self.std))


name = input("What Is your name? ")
rollno = int(input("What Is your Roll Numbner? "))
std = int(input("What Grade Are You In: "))

s1 = shitHead(name,rollno,std)
s1.display()

# OUTPUT 

# Name: Edgar
# Rollno: 2811
# class: 11



# OUTPUT 

# Name: Edgar
# Rollno: 2811
# class: 11
 