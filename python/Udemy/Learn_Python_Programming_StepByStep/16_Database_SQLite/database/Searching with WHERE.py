import sqlite3

conct = sqlite3.connect("mydatabase.db")

try:
    cur = conct.cursor()

    for records in cur.execute("SELECT * FROM student WHERE average > 80.0"):
        print(records)

except Exception as err:
    print(err)
finally:
    conct.close()