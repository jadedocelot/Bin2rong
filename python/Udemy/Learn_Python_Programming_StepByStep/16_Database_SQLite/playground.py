import sqlite3

conct = sqlite3.connect("database/mydatabase.db")
#NOTE: that we need to connect to our database, if .db does exist it will be created 

try:
    cur = conct.cursor()

    for records in cur.execute("SELECT * FROM student"):
        print(records)
    # cur.execute("SELECT name FROM student") 
    # print(cur.fetchmany(3))
    # print(cur.fetchall())
    # print(cur.fetchone())
except Exception as err:
    print(err)
finally:
    conct.close()


# See CHAPTER README for notes