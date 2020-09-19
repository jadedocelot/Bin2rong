from modules import add
from modules import myList
import math,random

userRes = input("Would you like to push the button of random numbers?\n\t1.Yes\n\t2.No\n_______________\n")

if userRes == "No" or userRes == "no" or userRes =="NO" or userRes == "2":
    quit()
elif userRes == "yes" or userRes == "Yes" or userRes == "YES" or uesrRes == "1":
    a = random.choice(myList)
    print("Your input has been saved in A")
    
userResTwo = input("Now would you like to push the random button once more?\n\t1.Yes\n\t2.No\n_______________\n")
if userResTwo == "No" or userResTwo == "no" or userResTwo =="NO" or userResTwo == "2":
    quit()
elif userResTwo == "yes" or userResTwo == "Yes" or userResTwo == "YES" or uesrResTwo == "1":
    b = random.choice(myList)
    print("Your input has been saved in B")

print("Please wait a moment while we add up your results\n\n")                       

x = add(a,b)
                       
print("\n\nAnd your sum is:\n",x)