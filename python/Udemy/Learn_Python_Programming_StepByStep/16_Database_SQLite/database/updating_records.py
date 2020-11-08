import sqlite3

conct = sqlite3.connect("mydatabase.db")

try:
    cur = conct.cursor()
    cur.execute("UPDATE student SET rollno = 1099, average = 85.00 WHERE name = 'Lucy'")
    # SET <column name> = <NEW VALUE>,<column name> = <NEW VALUE> WHERE <row "name"> = <value>,
    # NOTE: that the WHERE (condition) is VERY IMPORTANT, or else SET will update the values of ALL rows
    conct.commit()
    # NOTE: that  is is very important to incluce <cursor name>.commit() to push UPDATES into database, otherwise changes will not be made
except Exception as err:
    print(err)
finally:
    conct.close()