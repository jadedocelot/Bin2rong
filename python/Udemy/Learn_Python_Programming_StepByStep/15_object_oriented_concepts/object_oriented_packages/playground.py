
class Employee: 
	company_name = "Bin2rong"
	address = "Los Angeles"
# Porperties belong to the class
# And caln only be modified by the class
# class properties

	def __init__(self,name,emp_id,salary,employee_bonus_points):
		self.name = name
		self.emp_Id = emp_id
		self.salary = salary
		self.employee_bonus_points = employee_bonus_points
# __init__ is used to initialize the class property
# they can be called and modified by the instance
# self(method) allows the properties to be called upon by the instance of
	def change_company_address(self,new_address):
		self.address = new_address
	def emp_pnts(self,points):
		if points > 0:
			self.employee_bonus_points = self.employee_bonus_points + points
		else:
			print("Please enter valid amount")
	def check_balance(self):
		return self.employee_bonus_points
#Instance method

access_acct_points = int(input("Please enter account number to access your employee points: "))

el = Employee("Edgar",1821,66000,25)

if access_acct_points == 1821:
	print("Greetings {}".format(el.name))
	user_dec = int(input("Please select the numbe for the disired action:\n1.Check Account Balance\n2.Deposit Points: "))
	if user_dec == 1:
		print("Your current balance is: ",el.check_balance())
	elif user_dec == 2:
		deposit = int(input("Please enter the amount you would like to deposit: "))
		el.emp_pnts(deposit)
		print(el.check_balance())

#el.emp_pnts(500)

#print(el.check_balance())

#el.change_company_address("Las Vegas") 
# instance to Empoloyee which allows us to change the value of the 
# address property




#print(el.address) # Prints instance new value
#print(Employee.address) # prints designated class value/property



