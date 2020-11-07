import sqlite3

conct = sqlite3.connect("database/mydatabase.db")

try:
    cur = conct.cursor()

    for records in cur.execute("SELECT * FROM student ORDER BY name"):
        # Say we want to order our print by NAME (alphebetical)
        # This will (...order by <column names>)
        print(records)

except Exception as err:
    print(err)
finally:
    conct.close()