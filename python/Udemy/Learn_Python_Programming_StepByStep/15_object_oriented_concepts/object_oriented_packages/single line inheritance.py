class person:
	def __init__(self,name,age):
		self.name = name
		self.age = age
	def display(self):
		print("name={} age={}".format(self.name,self.age))

class employee(person):
	def __init__(self,name,age,emp_id,salary):
		super().__init__(name,age)
		self.emp_id = emp_id
		self.salary = salary
	def display(self):
		super().display()
		print("Empoyee id:{} Salary:{}".format(self.emp_id,self.salary))

el = employee("Edgar",29,1822,65000)

el.display()
 # OUTPUT
 # name=Edgar age=29
 # Empoyee id:1822 Salary:65000

#print(isinstance(el,object))
# isinstance will see if employer is a sub class of employee
# True

 #print(issubclass(employee,object))\