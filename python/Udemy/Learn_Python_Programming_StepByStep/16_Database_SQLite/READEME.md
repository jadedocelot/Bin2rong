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




                                                                    Creating our Database

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
