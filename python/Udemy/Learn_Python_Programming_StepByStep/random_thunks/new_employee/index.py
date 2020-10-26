from new_employee_framwork.company_application import new_employee, company

el = new_employee("Edgar Ortega",49000,32221,"Marketing")
company.outside_region("Colorado")

# print(type(new_employee))
# This will print out Los Angeles
# new_location = new_employee.new_address("Las Vegas")

print("We would like to welcome {} to our new {} location! Your starting salary is {}, your employee ID {}.\
You will begin work on  10/12 in the {} department.".format(el.name,company.HQ,el.salary,el.employee_id,el.dep))
el.HQ_contacts()




