import sqlite3

con = sqlite3.connect("mydatabase.db")

try:
    cur = con.cursor()

    cur.execute("DELETE FROM student WHERE name = 'poop'")
    # DELETE FROM <table name> WHERE <column name> = <value>
    # NOTE: WHERE clause is VERY IMPORTANT, for if condition is not specified, all records from studeb table will be deleted
    con.commit()
except Exception as err:
    print(err)
finally:
    con.close()