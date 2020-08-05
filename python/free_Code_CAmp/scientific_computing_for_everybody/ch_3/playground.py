import time # A 
import random
x = (random.range(1,100))

while x < 100: 
    x = x + 20
    time.sleep(0.19)
    print(x)
    x = x +12
    time.sleep(0.23)
    print(x)
    x = x + 4
    time.sleep(0.38)
    print(x)
    x = x + 70
    time.sleep(0.60)
    print(x)
    break
print("End of code")


def winScore():
    userName = input("Enter in you: ")
    print("Great job \n",userName)
    user_score = x 



if x < 100:
    print("\nYour score is :", x)
    print("\nyou lose!\n")
else: 
    print("\nYour score is:", x)
    print("\nYou have scored higher than 100, you win!\n")
    winScore()
