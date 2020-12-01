# See CHAPTER README for notes
class Employee: 
	company_name = "Bin2rong"
	address = "Los Angeles"

	def __init__(self,name,emp_id,salary,employee_bonus_points):
		self.name = name
		self.emp_Id = emp_id
		self.salary = salary
		self.employee_bonus_points = employee_bonus_points

	@classmethod
	def change_company_name(cls,new_name):
		cls.company_name = new_name

	def change_company_address(self,new_address):
		self.address = new_address
	def emp_pnts(self,points):
		if points > 0:
			self.employee_bonus_points = self.employee_bonus_points + points
		else:
			print("Please enter valid amount")  
	def check_balance(self):
		return self.employee_bonus_points

	@staticmethod
	def acct_hours():
		print("Employee accounts can be accessed between 7:00 AM - 1:00 AM")

elTwo = Employee("Dave",1911,45000,0)
el = Employee("Edgar",1821,66000,25)

Employee.change_company_name("Amazon")

print("\nBin2rong will be changing its name to ",Employee.company_name," due to a recent aquisition. Thank you for all the great years\n\n")

access_acct_points = int(input("Please enter account number to access your employee points: "))

if access_acct_points == 1821:
	print("Greetings {}".format(el.name))
	user_dec = int(input("Please select the numbe for the disired action:\n1.Check Account Balance\n2.Deposit Points:\n "))
	if user_dec == 1:
		print("Your current balance is: ",el.check_balance())
		el.acct_hours()
	elif user_dec == 2:
		deposit = int(input("Please enter the amount you would like to   deposit: "))
		el.emp_pnts(deposit)
		print(el.check_balance())
		el.acct_hours()
elif access_acct_points == 1911:
	print("Greetings {}".format(elTwo.name))
	user_dec = int(input("Please select the number for the disired action:\n1.Check Account Balance\n2.Deposit Points:\n "))
	if user_dec == 1:
		print("Your current balance is: ",elTwo.check_balance())
		el.acct_hours()
	elif user_dec == 2:
		deposit = int(input("Please enter the amount you would like to deposit: "))
		elTwo.emp_pnts(deposit)
		print(elTwo.check_balance())
		el.acct_hours()

