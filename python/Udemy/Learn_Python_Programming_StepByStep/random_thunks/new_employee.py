"""
def new_employee(name,department,salary):
	print("Name: {}, Department: {}, Salary: {}".format(name,department,salary ))


print("Please confirm that the new employee information is complete: \n")
new_employee("Edgar Ortega","Kitchenware","$50,000/yearly")


# OUTPUT:
Please confirm that the new employee information is complete:

Name: Edgar Ortega, Department: Kitchenware, Salary: $50,000/yearly
yo"""

# As you can see in the function below, within the parantheses we have assigned a default value to each of the parameters/argmument

# So that when we call upon the fuction (AT ANY POINT) we will not need to include any arguments

def new_employee(name="Edgar Ortega",department="IT",salary=500000):
	  print("Name: {}, Department: {}, Salary: {}".format(name,department,salary ))


print("Please confirm that the new employee information is complete: \n")
new_employee("Ted","Kitchen",20000) # Though if arguments were included then the value default value would he replaced


# OUTPUT:
"""
Please confirm that the new employee information is complete:

Name: Ted, Department: Kitchen, Salary: 20000
"""