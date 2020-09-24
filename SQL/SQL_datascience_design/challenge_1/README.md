			 	 ------------------------
			 	|  # Logical Conditions | 
			 	 ------------------------


- AND, OR CLAUSE

	## Using OR:
		* This logical condition is similar to the OR  in Python

SELECT company,product_name,issue,state_name
FROM consumer_complaints 
WHERE state_name = 'CA' OR state_name = 'NY' 

	- This will present you with tables that consist of rows which include "CA" and "NY" within the state_name column

	## Using AND

SELECT product_name,company, tags, timely_response
FROM consumer_complaints
WHERE tags = 'Servicemember' AND timely_response = 'Yes'

	- WHERE: The AND condition will focus on the values within (tags) and 		(timely_response)



					 ____________________
					|  Using Wildcards  | 
					|___________________|

- We are looking for product_names which consist of anything withn the word 'credit'

SELECT company, product_name
FROM consumer_complaints
WHERE product_name LIKE '%Credit%'

	- The above example is considered a wild card
	- Again, this will look for elements which contain 'Credit'

- Now remember that when one is using the IDE that it is in fact case sensitive, so that when we proceed with wild card One must be certain that the keyword is either UPPERCASE or LOWERCASE. Though what if the user does not know whether the keyword is UPPER or LOWER? You can enter in the following to get exactly what you are looking for.

WHERE LOWER (product_name) LIKE '%credit%'

or 

WHERE UPPER (product_name) LIKE '%CREDIT%'

	- So in order for this to cwork you have to be case-insensitive


- So say we wanted to find all the companies that contain late issues but were not sure if anything is in upercase

SELECT company, product_name
FROM consumer_complaints
WHERE LOWER(issue) LIKE '%late%'



- The following will search for element within 'zip_code' which start with 4 (notice the underscore)


SELECT company,issue,zip_code
FROM consumer_complaints 
WHERE zip_code LIKE '4____';


- The example below will search for elements within zip_code that does NOT start with 2

SELECT company,product_name,zip_code
FROM consumer_complaints
WHERE zip_code NOT LIKE '2%'; 
	
	* Using the NOT condition
	* To make sure that works correctly, you will need to include the % after the two

- AND you can perform the same search for elements which do NOT end with 2 

SELECT company,product_name,zip_code
FROM consumer_complaints
WHERE zip_code NOT LIKE '%2'

_ To look for an element which does NOT incldue a specific number 

SELECT company,product_name,zip_code
FROM consumer_complaints
WHERE zip_code NOT LIKE '%2%'


- Real quick, say you want to only view all the student loans given out by the Nelnet Bank 

SELECT company, product_name,issue
FROM consumer_complaints
WHERE (product_name) LIKE 'Student loan' AND company = 'Nelnet';