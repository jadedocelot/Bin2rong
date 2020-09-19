from packageTwo.iventory import backPack 
from packageTwo.packageThree.backup_inventory import misItems

userInputOne = input("What are you looking for?: ")

if userInputOne in backPack:
    print("In inventory!")
else:
    print("Not in inventory")

userInputTwo = input("Would you like to look through your backup inventory?")


if userInputTwo == "No" or userInputTwo == "no" or userInputTwo =="NO" or userInputTwo == "2":
    quit()
elif userInputTwo == "yes" or userInput == "Yes" or userInput == "YES":
    for item_check in misItems:
        print(item_check)
    
