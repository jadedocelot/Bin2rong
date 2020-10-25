from new_employee_framwork.company_application import new_employee

el = new_employee("Edgar Ortega",49000,32221,"IT")
el.new_address("Las Vegas") 

# print(type(new_employee))
# This will print out Los Angeles
# new_location = new_employee.new_address("Las Vegas")

print("We would like to welcome {} to our new {} location! Your starting salary is {}, your employee ID {}. You will begin work on  10/12 in the {} department.".format(el.name,el.address,el.salary,el.employee_id,el.dep))

# We would like to welcome Edgar Ortega to our new Las Vegas location! Your starting salary is 49000, your employee ID 32221. You will begin work on  10/12 in the IT department.


