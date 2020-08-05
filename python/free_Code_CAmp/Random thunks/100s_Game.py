import time 
import random

y = (random.randrange(1,142))
x = int(y)

ranAdd = (random.randrange(1,200))
ranNum = int(ranAdd)

while x < 3000: 
    x = x + ranNum
    time.sleep(0.19)
    print(x)
    continue
    x = x + ranNum
    time.sleep(0.23)
    print(x)
    x = x + ranNum
    time.sleep(0.38)
    print(x)
    x = x + ranNum
    time.sleep(0.60)
    print(x)
    x = x + ranNum + ranNum
    time.sleep(0.80)
    print(x)    
    break
print("\nEnd of code")


def winScore():
    userName = input("Enter in you: ")
    print("Great job ",userName)
    user_score = x 

if x < 540:
    print("\nYour score is :", x)
    print("\nyou lose!\n")
else: 
    print("\nYour score is:", x)
    print("\nYou have scored higher than 500, you win!\n")
    winScore()
