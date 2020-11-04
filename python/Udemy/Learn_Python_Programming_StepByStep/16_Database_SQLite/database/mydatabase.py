# table has already been created 
import sqlite3

conec = sqlite3.connect("mydatabase.db")

try:
    cur = conec.cursor()
    cur.execute("create table student(name text, rollno integer, average real)")
    conec.commit()
except Exception as err:
    print(err)
else:
    print("Table has been created")
finally:
     conec.close()
