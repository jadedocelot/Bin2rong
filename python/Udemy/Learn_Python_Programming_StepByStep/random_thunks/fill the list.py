intStorage = []
userINPUT = input("Enter a number >> ")
x = int(userINPUT)

while x == int(userINPUT):
	if userINPUT.isdigit():
		intStorage.append(x)
		pass
if userINPUT == "end":
	print(intStorage) 