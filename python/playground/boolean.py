## 2/26/20
## Game: Guess My Age 
#

age = 28
switch = True
import time

while switch:
    guess = int(input("Guess my age:"))
    if guess == age:
        print("Congratulations, you guessed my age!")

        switch = False

    elif guess < age:
        print("No, I'm a bit older than that. ")

    else:
        print("No, definitely younger than that my dude.")
else:
    print("This loop will in...")
for i in range(1, 6):
    print(i)
    time.sleep(0.9)
print("(fin)")



switch = False
age = 28
use = "Edgar"
password = "10310747"
import time

entrance = input("Welcome to Bin2rong, before allowing passage I am going to need the members password: ")
if entrance == password:
    print("")
    time.sleep(0.9)
    print(" l")
    time.sleep(0.12)
    print("  o")
    time.sleep(0.15)
    print("   w")
    time.sleep(0.17)
    print("    D")
    time.sleep(0.20)
    print("    a")
    time.sleep(0.23)
    print("   w")
    time.sleep(0.25)
    print("g")
    print("come on in")

    switch = True 

    while switch: 
        whichDoor = input("You enter the clube. As you enter and go down the dark hallway you come across two sets of metal doors, one which reads/n "Pie" and the other reads "ø". Which door do you go through: ")
