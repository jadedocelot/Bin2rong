____ --__---__----___---_-__--__-_--__-_-_-----_____ -__-

				Fundamentals of Database Theory

____ --__---__----___---_-__--__-_--__-_-_-----_____ -__-

What Will Be Learned in This Section
- Candidate Keys 
- Primary Keys
- foreen keys
- Structured data

- What is relational model



____ --__---__----___---_-__--__-_--__-_-_-----_____ -__-

			Structured vs Unstructured data 

____ --__---__----___---_-__--__-_--__-_-_-----_____ -__-

Structured data ideas:

- A simple table, that does not contradict any rules 
	- HAVE complete CONTROL over the data (like the control SQL offers)
	- We need to EMPHASIZE on the simplicty that SQL offers

UN-structured rules:

- directories
- music 
- movies 
- pictures 
- MS Excel

	- RICH data 

		MORE than 80% of data out there is UNSTRUCTURED 


			)))))))))))))))))))))))))))))))))))))))))))))

			SO WHAT ARE THE ADVANTAGES of STRUCTURED DATA

			)))))))))))))))))))))))))))))))))))))))))))))

			- Data conisitency
				
				* Simple table with very defined rules will maintain the same way till the end

			- More information from the same data
				
				* Just becuase the data is neatly organized doesnt mean you can't approach it from different angles and get different results every time

			- Improved data integrity

				* If you input all the data correctly then your data will never be compromised, lost, corrupted

			- Improved security

				* many security prcautions can be take witin SQL

			- Improved maintenance

			


			)))))))))))))))))))))))))))))))))))))))))))))

					   Elements of a Database

			)))))))))))))))))))))))))))))))))))))))))))))


- Databases consist of several elements

- The most common element of a database is a table, because it carries all the data

- There are also schemas, to manage dependancies between different tables to store differnt functions 


- So lets go back to our console_games database

	* console_games is our relation/table

- And every named column within the table 

	* game_rank, game_name, and platform are attributes/columns

- And every row of data is called 
	
	* a tuple/rules

- Then the number of columns within any table is called: Degree
- And the number of rows is called: Cardinality

- And the final element is a domain 


- And lastly every table has primary or foreign keys otherwise known as super keys 

	* for example we can use game_rank as our PRIMARY KEY, cause we can use game_rank to uniquely identify any one row of data in this table. Cause no two games can share the same rank

- Foreign Keys A FOREIGN KEY is a field (or collection of fields) in one table that refers to the PRIMARY KEY in another table. Think of it like a personal ID  


			)))))))))))))))))))))))))))))))))))))))))))))

					   		Relational Keys

			)))))))))))))))))))))))))))))))))))))))))))))



- Relational keys are divided between 4 types in SQL
 	* Primary keys, foreign keys, super keys, and candidate keys

- Superkey is any combination of columns that uniquely identifies a row in a table

- Candidate key is a superkey such that no proper subset is a superkey, and has the following two properties

	* Uniqueness
	* Irreducibility

- Primary key: is the candidate key that is selected to identify tuples uniquely within the relation:

	* If a relation has several candidate keys only one is chosen to be primary key - UNIQUE AF - EMPLOYEE_ID


- Foreign key: is an attribute, or set of attributes, within one relation that matches the candidate key of some other relation

	 * Allows use to connect to other data



			)))))))))))))))))))))))))))))))))))))))))))))

					 What is Relational Database

			)))))))))))))))))))))))))))))))))))))))))))))


			- Relational database is a digital database whose organization is 	 based on the relational model of data

			- Relational database is a set of tables that satisfy following data integrity:

					* Entity Integrity:

					  No duplicate rows in the table. There can be some information that is shared amongst the table but nothing identical, this is where primary and candidate keys come in handy. 

					* Domain Integrity:

					 	There has to be some restriction on the data in order for it to be classified as relational

					 * Referntial Integreity:

 						Rows cannot be deleted that are used by other records. You cant delete rows.....da fuck, you can force to enforce to be deleted though this is defenitely not reccommended since it may corrupt the data


 					* User-Defined Integrity: 


 						That it enforces some specific business rules					 

			
			STRUCTURED DATA IS GOOD!



							)))))))))))))))))))))))))))))))))))))))))))))

					 			Functional Dependency 

					)))))))))))))))))))))))))))))))))))))))))))))




- Dependency occurs when an attribute or set of attributes identifies a particular value of another attribute


- When designing an efficient database that avoid redundancy, identifying dependencies help us to:
	
		- Ensure every column in a table is dependant on the primary key

		- Have the primary key as simple as possible 


- The best example of a dependancy is a foreign key

- Tables dont just depend on each other but depend on themselves 