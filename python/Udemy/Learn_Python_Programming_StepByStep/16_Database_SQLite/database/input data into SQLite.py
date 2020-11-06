# table has already been created 
import sqlite3

conec = sqlite3.connect("mydatabase.db")
# students = [("Dan",322,51.4),("Monica",311,87.0),("Edgar",1821,90.2)] 
# Students is for entering data for several students int DB browser
print("Greetings new student! For our records please enter the following information.\n")
name = input("What is your name? ")
print("\nWelcome to SQLite ",name,"!\n")
rollNo = input("What is your Student ID? ")
avg = input("What was your test score? ")
student = (name,rollNo,avg)

try:
    cur = conec.cursor()
    # cur.execute("create table student(name text, rollno integer, average real)")
    
    # cur.execute("Insert into student values(?,?,?)",students)
    # The .execute will can only execute using ONE set ofc variables 
    cur.execute("INSERT INTO STUDENT VALUES(?,?,?)",student)
    #cur.executemany("INSERT INTO STUDENT VALUES(?,?,?)",student)
    conec.commit()
except Exception as err:
    print(err)
else:
    # print("Table has been created")
    print("Thanks ", name,"!" " Your information has been entered into our system")
finally:
     conec.close()
