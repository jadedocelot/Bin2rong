x = {
"person":"",
"gender":"",
"birth_date":""
}

personIn = input("What is your name? ")

x.update({"person": personIn})

genderIn = input("what is your gender? ") 

x.update({"gender": genderIn})

birthIn = input("When is your birthday (Example: mm/dd/yy)?")

x.update({"birth_date": birthIn})

print(x) 
