                                                    ______________________________________________________

                                                                        SQLite Database
                                                    ______________________________________________________

- A database is an organized collection of data, generally stored and accessed electronically from a computer system.
- Data is organized into rows, columns and tables, and it is indexed to make it easier to find relevant information. Data gets updated, inserted, and deleted as new information is added.
                                                                    


                                                                    What is SQLite?

- SQLite is an in-process library that implements a self-contained, serverless, zero-configuration, transactional SQL database engine. 
- SQLite is an embedded SQL database engine. Unlike most other SQL databases, SQLite does not have a seperate server process. SQLite reads and writes directly to ordinary disk files.

- NOTE: Once again this is a serverless program

# Python has a built in support for the SQLite database



                                                                ______________________________

                                                                    Creating our Database
                                                                ______________________________

- Now to kick off our database we re going to have to import SQLite

    import sqlite3 


import sqlite3

- Then the following syntax

conec = sqlite3.connect("mydatabase.db")
- above we specify the database, though if it is not there then it will create it
cur = conec.cursor()
- cur = cursor object, this will help use execute the queries

cur.execute("create table student(name text, rollno integer, average real)")
- now we will execute the query
- cur.execute("create table <table name>(<fill name> <data type>, <fill name> <data type>, <fill name> <data type>)") 
- Data type can be either integer (for numbers), text ("For strings"), REAL (REAL numbers are the number with double floating points precision)

conec.commit()
- Now the table will not be created until you submit this

conec.close()
- Once commited we then must close it 

# Once you have entered in all the needed code, you may proceed with exectuting the syntax, once the python code has been run a .db fille will appear in your directory. Though in order to view we will need 3rd part software. DB BROWSER for SQLite

-  which may be installed using brew

    brew cask install db-browser-for-sqlite

- once the DB BROWSER SQLite has been installed you may open your .db file through the program

## If user attempty to run .py file which created .db file, a traceback message will be returned notifying you that "tabke student already exitsts."

- Now this tracback can be avoided using try/except/finally

    try:
        cur = conec.cursor()
        cur.execute("create table student(name text, rollno integer, average real)")
        conec.commit()
# try to perform the above actions
    except Exception as err:
        print(err)
# If the actions above have been created, then print error
    else:
        print("Table has been created")
# and if above actions have not been created, create table and notify user.
    finally:
         conec.close()
# once through with then close conec




                                                    ______________________________________________________

                                                                Inserting a Record into a database
                                                    ______________________________________________________


try:
    cur = conec.cursor()
# cur.execute("create table student(name text, rollno integer, average real)")
    cur.execute("insert into student values('Lucy',27,69.4 )")
# What we are doing above is inserting records into our table
# We have commented out our .execute(create table)
# and within our new execute, we will be including parameteres which will be treated as values
    conec.commit()
except Exception as err:
    print(err)
else:
# print("Table has been created")
    print("Data has been inserted")
finally:
     conec.close()

                                                    _____________________________________________________

                                                                    SQL Injection Attack
                                                    ______________________________________________________

- SQL injection is a code injection technique, used to attack data-driven applications, in which nefarious SQL statements are inserted into an entry field for execution.

- Python holds a support for these attacks

- Put "?" as a placeholder wherever you want to use a value, and then provide a tuple of values as the second argument to the cursors execute(method) method.
    * I wonder if you could change the type from tuple to list, edit data, then reinsert as tuple


student = ("Sara",22,88.3)
# We have gone ahead and created a new varaible, which contains tuple with our table data

try:
    cur = conec.cursor()
# cur.execute("create table student(name text, rollno integer, average real)")
    cur.execute("Insert into student values(?,?,?)",student)
# What we have done is include placeholders(?) which will collect the data from our "student" variable/tuple 
 
    cur.execute("insert into student values('Lucy',27,69.4 )")
# This isnt really the proper (safest) way to inject data into a table
# We need a create a variable/tuple with new data 


- The above is the safest method to prevent data from being manipulated by SQL injection attacks





#                                                    ______________________________________________________

#                                                                    Insert Multiple Records
#                                                    ______________________________________________________

students = [("Dan",322,51.4),("Monica",311,87.0),("Edgar",1821,90.2)] 
# In the example above we create a variable ("students") which will inject multiple records 
# This variable will contain a list of tuples 

    try:
        cur = conec.cursor()
# cur.execute("create table student(name text, rollno integer, average real)")
    
# cur.execute("Insert into student values(?,?,?)",students)
# Though if we were to execute with this new variable which contains multiple students we will get an errors for .execute may only support 1 set of parameters
# In order to make this work we will need to use .executemany
    cur.executemany("INSERT INTO STUDENT VALUES(?,?,?)",students)
 
# cur.execute("insert into student values('Lucy',27,69.4 )")
# This isnt really the proper (safest) way to inject data into a table



#                                                    ______________________________________________________

#                                                                          Select Record
#                                                    ______________________________________________________


    import sqlite3

    conct = sqlite3.connect("database/mydatabase.db")

 ## NOTE: that we need to connect to our database, if .db does exist it will be created 

    try:
        cur = cont.cursor()
# We place our 'conct' variable within 'cur' which is our cursor object

    for records in cur.execute("SELECT * FROM student"):
        print(records)
## We use the for loop to print out the data of our 'student' table 
## 'records' will SELECT everything(*) FROM our 'student' table
## We will then print out all the data within 'student'
## NOTE: (*) Means SELECT ALL

    OUTPUT:
        ('Lucy', 27, 69.4)
        ('Sara', 22, 88.3)
        ('Dan', 322, 51.4)
        ('Monica', 311, 87.0)
        ('Edgar', 1821, 90.2)
        ('Alex', 3244, 98.2)

## NOTE: The aboe method is the best method to access data

## ANCHOR: Below are some other methods of pulling records

    cur.execute("SELECT name FROM student")We 
## We will be focus(SELECT) on "name" (row) from the "student" table

    print(cur.fetchmany(3))
## .fetchmany takes an integer argument to specify the number of results youd like to fetch and print
    print(cur.fetchall())
## .fetchall will collect all the results and print
    print(cur.fetchone())
## .fetchone will print the ONE fetched record
        except Exception as err:
            print(err)
        finally:
            conct.close()
## Remember to always close your "connection"




#                                                    ______________________________________________________

#                                                                          Where Clause
#                                                    ______________________________________________________


# # Say we want to only pull records with an 'average' that surpasses 80.0
# This is where the (WHERE) comes in handy

    for records in cur.execute("SELECT * FROM student WHERE average > 80.0"):
        print(records)

OUTPUT:

    ('Sara', 22, 88.3)
    ('Monica', 311, 87.0)
    ('Edgar', 1821, 90.2)
    ('Alex', 3244, 98.2)


#                                                    ______________________________________________________

#                                                                          Order By
#                                                    ______________________________________________________

# This is actually very helpful for eccommerce sites

 # We will be using ORDER BY to order our fetched/printed data alphebetically
   
    import sqlite3

    conct = sqlite3.connect("database/mydatabase.db")

    try:
        cur = conct.cursor()

    for records in cur.execute("SELECT * FROM student order by name"):
### Say we want to order our print by NAME (alphebetical)
### This will (...order by <column names>)
        print(records)

    except Exception as err:
        print(err)
    finally:
        conct.close()




#                                                    ______________________________________________________

#                                                                           SQL Functions
#                                                    ______________________________________________________

- The first function we are going to use will locate the MIN or the MAX
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

     cur.execute("SELECT count(average) FROM student where average > 80")
 # Once WHERE clause is included we can count the averages that surpass 80
 # OUTPUT: (4,)

    cur.execute("SELECT sum(average) FROM student")
# sum(average) will accumilate the SUM of  all the averages within the student table
# OUTPUT: (484.5,)

    cur.execute("SELECT count(average) FROM student")
# count(average) select the QTY of averages

    cur.execute("SELECT avg(average) FROM student")
# avg(average) will accumilate the average of student 
# OUTPUT: (80.75,) 

    cur.execute("SELECT max(average) from student")
# max(average) will print out the max average
# OUTPUT:(98.2,)
    #print(cur.fetchone())
    
    cur.execute("SELECT min(average) from student")
    print(cur.fetchone())
# OUTPUT:(51.4,)

     for records in cur.execute("SELECT min(average) FROM  student "):
# min(average) will select the MINNNIMUM average from students
      print(records)
# OUTPUT:(51.4,)


    except Exception as err:
        print(err)
    finally:
        conct.close()



#                                                    ______________________________________________________

#                                                                           Updating Records
#                                                    ______________________________________________________





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