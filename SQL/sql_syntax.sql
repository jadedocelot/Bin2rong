DATABASE TABLES

-  A DATABASE most often contains one or more TABLES. Each TABLE is identified by a name (e.g "customers" or orders). TABLES contain records (rows) with data



CustomerID	CustomerName	ContactName	Address	City	PostalCode	Country
1   Alfreds Futterkiste	Maria Anders	Obere Str. 57	Berlin	12209	Germany
2	Ana Trujillo Emparedados y helados	Ana Trujillo	Avda. de la Constitución 2222	México D.F.	05021	Mexico
3	Antonio Moreno Taquería	Antonio Moreno	Mataderos 2312	México D.F.	05023	Mexico
4   Around the Horn	Thomas Hardy	120 Hanover Sq.	London	WA1 1DP	UK
5	Berglunds snabbköp	Christina Berglund	Berguvsvägen 8	Luleå	S-958 22	Sweden


SQL STATEMENTS

- Most of the actions you need to perform on a DATEBASE are donw with SQL STATEMENTS
- The following SQL STATEMENT selects all the records in "Customers" table: 

------------------------

ßSELECT * FROM Customers;

------------------------

KEEP IN MIND THAT..

	* SQL keywords are NOT case sensitive: select is the same as SELECT:

	* In this tutorial all SQL keywords are in UPPER-CASE 

SEMICOLON AFTER SQL STATEMENTS? 

	- Some database systems require a SEMICOLON at the end of each SQL statement
	- SEMICOLON is the standard way to seperate each SQL statement in database systems that allow  more than one SQL statement to be exectuted in the same call to the server

Some of The Most Important SQL Commands 

	* SELECT <- Extracts data from DATABASE
	* UPDATE <- Updates data in a DATABASE
	* DELETE <- deletes data from a DATABASE
	* INSERT INTO <- inserts new data into a database
	* CREATE DATABASE <- CREATES a new database
	* ALTER DATABASE <- modifies a database 
	* CREATE TABLE <- creates a new table
	* ALTER  TABLE <- modifies table
	* DROP TABLE <- deletes a table
	* CREATE TABLE <- creates an index (search key)
	* DROP INDEX <- deletes index
