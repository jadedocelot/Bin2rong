import time
import random

randNumOne = int((random.randrange(1,142)))
randNumTwo = int((random.randrange(1,142)))
randNumThree = int((random.randrange(1,142)))
randNumFour = int((random.randrange(1,142)))
randNumFi = int((random.randrange(1,142)))
randNumSix = int((random.randrange(1,142)))

cust_array = [randNumOne,randNumTwo,randNumThree, randNumFour,randNumFi,randNumSix]

print(cust_array)

userTally = sum(cust_array)

print("Your final score is: ", userTally)
time.sleep(0.80)
print("Please allow a moment to generate a new keygen....")

# myFunc()
def myFunc(argOne,argTwo):
	argOne.append(argTwo)
	time.sleep(1.20)
	print(argOne)

newKeyGen = []

randNumSev = int((random.randrange(1,20)) - int(userTally))
myFunc(newKeyGen,randNumSev)
randNumEig = int((random.randrange(1,20)) - int(userTally))
myFunc(newKeyGen,randNumEig )
randNumNin = int((random.randrange(1,20)) - int(userTally))
myFunc(newKeyGen,randNumNin)
randNumTen = int((random.randrange(1,20)) - int(userTally))
myFunc(newKeyGen,randNumTen)
randNumEl = int((random.randrange(1,30)) - int(userTally))
myFunc(newKeyGen,randNumEl)
randNumTw = int((random.randrange(1,30)) - int(userTally))
newKeyGen.append(randNumTw)

time.sleep(1.60)
print("\nyour new keygen is below:\n")
print(newKeyGen)
