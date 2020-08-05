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

newKeyGen = []

randNumSev = int((random.randrange(1,20)) - int(userTally))
newKeyGen.append(randNumSev)
time.sleep(1.20)
print(newKeyGen)	
randNumEig = int((random.randrange(1,20)) - int(userTally))
newKeyGen.append(randNumEig)
time.sleep(1.30)
print(newKeyGen)
randNumNin = int((random.randrange(1,20)) - int(userTally))
newKeyGen.append(randNumNin)
print(newKeyGen)
time.sleep(1.40)
randNumTen = int((random.randrange(1,20)) - int(userTally))
newKeyGen.append(randNumTen)
print(newKeyGen)
time.sleep(1.50)
randNumEl = int((random.randrange(130,)) - int(userTally))
newKeyGen.append(randNumEl)
print(newKeyGen)
time.sleep(1.55)
randNumTw = int((random.randrange(1,30)) - int(userTally))
newKeyGen.append(randNumTw)

time.sleep(1.60)
print("\nyour new keygen is below:\n")

newKeyGen = abs(newKeyGen)

print(numpy.positive(newKeyGen))



