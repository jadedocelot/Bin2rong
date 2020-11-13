import sqlite3

conct = sqlite3.connect("mydatabase.db")
dataBase = list()

try:
    cur = conct.cursor()
    
    for record in cur.execute("SELECT * FROM student"):
        #print(record)
        dataBase.append(record)

except Exception as err:
    print(err)
finally:
    conct.close()

print(dataBase)


'''
user_search = input("Who are you looking for? ")

for x in dataBase:
    for y in x:
        if y == user_search:
            print("Found criminal in records")
            exit()
        elif y != user_search:    
           break

print("Zero matches")
#for records in cur.execute("SELECT * FROM student"): 
'''


    # if cur.execute("SELECT * FROM student WHERE name = '{}'".format(user_search)):
   # else:
    #elif user_search != cur.execute("SELECT * FROM student WHERE name != '{}'".format(user_search)):
# See CHAPTER README for notes
