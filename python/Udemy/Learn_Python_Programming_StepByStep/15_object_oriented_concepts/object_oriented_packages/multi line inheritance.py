class person:
	def __init__(self,name,age):
		self.name = name
		self.age = age
	def display(self):
		print("Name:{} and Age{}".format(self.name,self.age))

class employee(person):
	def __init__(self,name,age,emp_id,salary):
		super().__init__(name,age) # Now accessing SUPER CLASS properties
		self.emp_id = emp_id
		self.salary = salary
	def display(self):
		super().display() # This is our override of the display method within the our super class(person)
		print("Employee ID: {} Salary: {}".format(self.emp_id,self.salary)) 
class admin(employee): # admin class will now access our sub class (employee)
	def __init__(self,name,age,emp_id,salary,team,project_name): # the last two properties belong to the admin (team and project_name)
		super().__init__(name,age,employee,salary)
		self.team = team
		self.project_name = project_name
	def display(self):
		super().display() # 	 override of our employee sub class
		print("Admin is Activated for Team {}, project {}".format(self.team,self.project_name))

emp = admin("Hans",32,21223,3400,"Youth","Levis Re-sort")
# We will now link our 'admin' sub(sub) class sice it is linked to our SUPER and SUB class
emp.display()
