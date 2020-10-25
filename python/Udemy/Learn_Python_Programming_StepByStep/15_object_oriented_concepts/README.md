			_--_-___--___-_---_--_-------__-_--__--_-

					Object Oriented Concepts 

			_--_-___--___-_---_--_-------__-_--__--_-


- Classes provide a means of bundling data and functionallity together. Creating a new class creates a new TYPE of object, allowing new instances of that type to be made.

- Each class instance can have attributes attached to it for maintaining its state. Class instances can also have methods for modifying its state. 



						 OBJECT
				_______________________
				|                     |       
				|	Data/properties   |
				|+++++++++++++++++++++|
				| 	Function/method	  |
				|_____________________|

- In Python we use the keyword 'class' to create a class

object: 

	Laptop



Properties:

	Company Name:  HP 
	
	price: 30000
	
	Ram: 4
	
	OS: Windows
	
	Size: 15 
	
	Webcam: True


- All these properites can be handled with values


Functions:

 	
 	*On
 	
 	*Shut-down
 	
 	*Format
 	
 	*Copy
 	
 	*Play Music 
 	
 	*Type
	
	*Install Software
 	
 	*ETC 



			_--_-___--___-_---_--_-------__-_--__--_-

						Class and Objects 
  
     		 _--_-___--___-_---_--_-------__-_--__--


# shitHead will represent the studen
	* Pass will need to used when using an empty class. A class cannot be left empty without a pass
class shitHead:
	pass

# We are creating the instance
s1 = shitHead()
sNO = "Tim"

# This will print out the type
print(s1,type(s1))

# OUTPUT: 
# <__main__.shitHead object at 0x10f00acd0> <class '__main__.shitHead'>

# The method below is checking if s1 is an instance of 's1'
print(isinstance(sNO,shitHead))
 OUTPUT:
 True

# Now if you were to enter something that did not match you would get false;
	- Note that this can be applied to see if  anything is as it appears, it will only provide Boolean values
print(isinstance(sNO,shitHead))

OUTPUT:
False


- A function within a class is known as a METHOD

____________________________________________________________________________________________


class shitHead:
	def __init__(self,name,rollno,std):	
		self.name = name
		self.rollno = rollno
		self.std = std

	def display(self):
		print("Name:{} Rollno:{} class:{}".format(self.name,self.rollno,self.std))


s1 = shitHead("Edgar",29,12)
s1.display()

#OUTPUT
Name:Edgar Rollno:29 class:12



____________________________________________________________________________________________

NOTES:


 # The first property in the first method of shitHead

			class shitHead:
				# Method 1
				def __init__(self,name,rollno,std):	<-- Self : means it can be called upont itself (__init__(self )), This rest are keyword properties
					self.name = name <-- self.name variable initialized with name prop
					self.rollno = rollno <--self.rollno initialized with rollno prop
					self.std = std <-- self.std initialized with std prop
				# Method 2
				def display(self): <-- Method 2 named display which will PRINT the the following:
					print("Name:{} Rollno:{} class:{}".format(self.name,self.rollno,self.std)) <-- print the string, {} act as place holders for the arguments
					<- format(self.name,self.rollno,self.std) is used to position properties/arguments within the STRING

			
			s1 = shitHead("Edgar",29,12) <-- Assignin shiteHead class to s1 variable (Now is object?) and passing the arguments 
			
			s1.display() <-- Will display s1 which = shitHead

			#OUTPUT
			Name:Edgar Rollno:29 class:12


# Now what if we wanted to pass in user input as arguments?
# Well, you would do it like so ;

# See  Chapter READNE.md for notes 

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





# In the next example we will add up marks and get a final grade;

class shitHead:
	# This will initialize the properties
	def __init__(self,name,rollno,std):	
		self.rollno = r ollno
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

 
userInput = input("What Is your name? ")
userInputTwo = int(input("What Is your Roll Numbner? "))
userInputThr = int(input("What Grade Are You In: "))

s1 = shitHead(userInput,userInputTwo,userInputThr)
total = s1.total_marks(82,77,89)
average_marks = s1.average(total)
s1.display()
print("Total marks: {} Average:{}".format(total,average_marks))

s1.grade(average_marks) 	

____________________________________________________________________________________________


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

# __init__ method examples
-The instantiation operation (“calling” a class object) creates an empty object. Many classes like to create objects with instances customized to a specific initial state. Therefore a class may define a special method named __init__(), like this:

-When a class defines an __init__() method, class instantiation automatically invokes __init__() for the newly-created class instance. So in this example, a new, initialized instance can be obtained by:


-The instantiation operation (“calling” a class object) creates an empty object. Many classes like to create objects with instances customized to a specific initial state. Therefore a class may define a special method named __init__(), like this:

- Of course, the __init__() method may have arguments for greater flexibility. In that case, arguments given to the class instantiation operator are passed on to __init__(). For example,

>>> class Complex:
...     def __init__(self, realpart, imagpart):
...         self.r = realpart
...         self.i = imagpart
...
>>> x = Complex(3.0, -4.5)
>>> x.r, x.i
(3.0, -4.5)


 
name = input("What Is your name? ")
rollno = int(input("What Is your Roll Numbner? "))
std = int(input("What Grade Are You In: "))

test1 = int(input("What was your score for test 1: "))
test2 = int(input("What was your score for test 2: "))
test3 = int(input("What was your score for test 3: "))

s1 = shitHead(name,rollno,std) # s1 This will issue the value of our __init__ method within our "shitHead" class and use our name,rollno,std (INPUT) values as arguments BUT its also stores the the "shitHead" class in it's entirety
	# 'total is now an instance'
total = s1.total_marks(test1,test2,test3) # "Total" will store the value of the "total_marks" method within "s1"(which stores "shitHead") use our test1,test2,test3 (INPUT) values as arguments BUT its also stores the the "shitHead" class in it's entirety
	# average_marks is now an instance
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




			_--_-___--___-_---_--_-------__-_--__--_-

						Types of Methods
  
     		 _--_-___--___-_---_--_-------__-_--__--

- There are 3 types of methods:

	1. Instance Method: It can modify the state of the instance

	2. Class Method: It can modify the state of the class

	3. It can't modify the state of the instance or class. Its like a utility method.



# Instance Method

access_acct_points = int(input("Please enter account number to access your employee points"))

if access_acct_points == 1821:
	print("Greetings {}".format(el.name))
	user_dec = int(input("Please select the numbe for the disired action:\n1.Check Account Balance\n2.Deposit Points"))
	if user_dec == 1:
		print("Your current balance is: ",el.check_balance())
	elif user_dec == 2:
		deposit = int(input("Please enter the amount you would like to deposit")
		el.emp_pnts(deposit)
		print(el.check_balance())