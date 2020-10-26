class company:
	company_name  = "Bin2rong"
	HQ = "Los Angeles"
	
	@classmethod
	def outside_region(cls,location):
		cls.HQ = location
	@staticmethod
	def HQ_contacts( ):
		print("\nPlease contact HR@bin2rong.com for questions concerning your employment")


class new_employee(company):
	def __init__(self,name,salary,emplo_id,dep):
		self.name = name
		self.salary = salary
		self.employee_id = emplo_id
		self.dep = dep
	def HQ_contacts(self):
		super().HQ_contacts()
	# super().outside_region()
	# def outside_region(self,location):
		# self.HQ = location

	# def new_address(self,newAd):
		# self.address = newAd
	