import sqlite3

conct = sqlite3.connect("database/mydatabase.db")

try:
    cur = conct.cursor()
    
    for records in cur.execute("SELECT * FROM student WHERE name in ('Sara','Edgar')"):
        print(records)
        # We will only select records which include Sara and Edgar
        # OUTPUT:
        # ('Sara', 22, 88.3)
        # ('Edgar', 1821, 90.2)

    # cur.execute("SELECT count(average) FROM student where average > 80")
    # Once WHERE clause is included we can count the averages that surpass 80
    # OUTPUT: (4,)

    #cur.execute("SELECT sum(average) FROM student")
    # sum(average) will accumilate the SUM of  all the averages within the student table
    # OUTPUT: (484.5,)

    # cur.execute("SELECT count(average) FROM student")
    # count(average) select the QTY of averages

    # cur.execute("SELECT avg(average) FROM student")
    # avg(average) will accumilate the average of student 
    # OUTPUT: (80.75,) 

    #cur.execute("SELECT max(average) from student")
    # max(average) will print out the max average
    # OUTPUT:(98.2,)
    #print(cur.fetchone())
    
    #cur.execute("SELECT min(average) from student")
    #print(cur.fetchone())
    # OUTPUT:(51.4,)

    # for records in cur.execute("SELECT min(average) FROM  student "):
    # min(average) will select the MINNNIMUM average from students
        # print(records)
        # OUTPUT:(51.4,)

except Exception as err:
    print(err)
finally:
    conct.close()