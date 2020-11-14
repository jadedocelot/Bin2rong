	# num sifting.py


countDict = dict()
countList = list()
luckyNum = [12,32,4,12,431,42,12,46,433,123,53,4,34,23,112,122,32,43,54,66,23,431,112]

for fork in luckyNum:
    if fork > 40:
        countList.append(fork)
        # count['myNum'] = fork
print("Pre list")
print(countList)
# OUTPUT: [42, 46, 433, 123, 53, 112, 122, 43, 54, 66, 431]

for spoon in countList:
    if spoon > 100:
    	countDict[spoon] = countDict.get(spoon,0) + 1
    	# countDict[spoon] = countDict.get(spoon,0) + 1
    	continue
print(countDict)


### OUTPUT:
"""

Pre list
[431, 42, 46, 433, 123, 53, 112, 122, 43, 54, 66, 431, 112]
{431: 2, 433: 1, 123: 1, 112: 2, 122: 1}

"""




