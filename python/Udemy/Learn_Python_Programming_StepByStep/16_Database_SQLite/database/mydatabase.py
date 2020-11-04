# table has already been created 
import sqlite3

conec = sqlite3.connect("mydatabase.db")
# student = ("Sara",22,88.3)
students = [("Dan",322,51.4),("Monica",311,87.0),("Edgar",1821,90.2)] 

try:
    cur = conec.cursor()
    # cur.execute("create table student(name text, rollno integer, average real)")
    
    # cur.execute("Insert into student values(?,?,?)",students)
    # The .execute will can only execute using ONE set ofc variables 
    cur.executemany("INSERT INTO STUDENT VALUES(?,?,?)",students)
    conec.commit()
except Exception as err:
    print(err)
else:
    # print("Table has been created")
    print("Data has been inserted")
finally:
     conec.close()
