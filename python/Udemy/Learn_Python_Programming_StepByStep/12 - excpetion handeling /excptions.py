stm = "Python is Tits"

"""

print(stm.upper())
print(len(stm))

try:
	print(stm.index("Jave"))
except: 
	print("We can't find java but the index for Python is: ", stm.index("Tits"))
"""

"""
try:
	print(stm.index("Jave"))
except ValueError: 
	print("We can't find java but the index for Python is: ", stm.index("Tits"))
finally:
	print(stm.upper())
	print(len(stm))
"""

"""
while True:
	try:
		x = int(input("Please enter in a digt: "))
		break
	except:
		print("Oooppp, it appears as though your dumbass has entered in something that is NOT a number. Try again.")
"""

"""


first_num = int(input("Enter First Number:\n"))
second_num = int(input("Enter Second Number:\n"))




try:
	result = first_num/second_num 
	print("And Your Result is: ",int(result))
except ZeroDivisionError as obj:
	# print("Cannot Divide by Zero.")
	print(obj)

"""

"""
while True:
	try:
		first_num = int(input("Enter First Number:\n"))
		break
	except:
		print("Oooppp, it appears as though your dumbass has entered in something that is NOT a number. Try again.")


while True:
	try:
		second_num = int(input("Enter Second Number:\n"))
		break
	except:
		print("Oooppp, it appears as though your dumbass has entered in something that is NOT a number. Try again.")

try:
	result = first_num/second_num 
	print("And Your Result is: ",int(result))
except ZeroDivisionError as obj:
	# print("Cannot Divide by Zero.")
	print(obj)
"""




while True:
	try:
		first_num = float(input("Enter First Number:\n"))
		second_num = float(input("Enter Second Number:\n"))
		result = first_num/second_num 
		print("And Your Result is: ",float(result))
	except (ZeroDivisionError,ValueError) as obj:
		# print("Cannot Divide by Zero.")
		print(obj)
	else:
		break





	