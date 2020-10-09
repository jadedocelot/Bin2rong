___________________________		

	   JOINING TABLES
___________________________


	== =	=	==	==	

	  Types of Joins

	==	=	=	==	==


- joins are operations that are performed on tables relational databases 

TABLE A: 

POSITION: LEFT

	
	Customer | Gender | Age						
	__________________________

	Adam	 | male  |	24	   

	Benjamin |	male  |	32

	Jack     | male  | 29

	Nick 	 | male  | 37 

	Susan    | female| 31




TABLE B:

POSITION: RIGHT

	Employee | title | wage
	__________________________

	jack	 | clerk  |	17 $/hr	   

	John     | clerk  |	19 $/hr

	Mary     | mgr    | 21 $/hr

	Susan 	 | mgr    | 19 $/hr 





INNER JOIN:
___________________________
ON: A.Customer = B.Employee

- This will take two tables and look at there intersects. So this will only pull the matching rows and "glues" them together  




LEFT Outer Join:
___________________________
ON: A.Customer = B.Employee

it says the primary table (table A) is compared to the TABLE B (the right) NON matching rows will be discarded from TABLE B since it is a NON primary table and nothing will be discarded from the primary table. Row eliminated will be NULL




RIGHT Outer Join:
___________________________
ON: A.Customer = B.Employee

it says the primary table (table B) is compared to the TABLE A (the left) NON matching rows will be discarded from TABLE A since it is a NON primary table and nothing will be discarded from the primary table. Row eliminated will be NULL



FULL Outer Join:
___________________________
ON: A.Customer = B.Employee

- We are looking at all of the rows. NOTHING WILL BE DISCARDED, once the mathhes between both tables have been made them both tables are glued together 











							___________________________		
							
								 Duplicates in Joins
							___________________________

			- We re going to take an inter join between these numbers


TABLE A: 

POSITION: LEFT

	
	Order # | Region | Status						
	__________________________

	001	 | North  |	unpaid	   

	002  | North  |	unpaid

	003  | North  | paid

	004  | North  | paid 





TABLE B:

POSITION: RIGHT


	Order # | Item | Sales
	__________________________

	001	   | Chair    |	$97

	001    | Desk     |	$123

	002    | Stapler  | $8

	003    | pen      | $3 

	003    | pencil   |	$1

	003    | erase    | $1




INNER JOIN:
___________________________
ON: A.Customer = B.Employee

- This will take two tables and look at there intersects. So this will only pull the matching rows and "glues" them together. The rows which contained no matches will be discarded



order# | Region | Status | Order# | Item | Sales 
001 	  North   unpaid 	001		Chair	$ 97
001 	  North	  unpaid	001		Desk	$ 123
002		  North	  unpaid	002		Stapler	$8
003		  North   paid		003 	Pen     $3
003 	  North	  paid		003		Pencil  $1
003 	  North   paid		003		Eraser  $1


- As you can see in the example above some rows from  TABLE A have been duplicated 






								___________________________		
							
								 Joining on Multiple Fields
								___________________________


POSITION: LEFT

	
	Store | Order# | Customer						
	__________________________

	NORTH  | 001  |	Mike	   

	NORTH  | 002  |	Jack

	SOUTH  | 001  | Susan






TABLE B:

POSITION: RIGHT


	Order # | Item | ITEM | Sales
	__________________________

	North	 | 001 | LAPTOP | $999

	North    | 001 | MOUSE  | $49

	North    | 002 | MONITOR | $155

	South    | 001 | CAMERA  | $97 





LEFT JOIN:
___________________________
On: A. ORderNum = B.OrderNum
AND A.Store = B.Store 

	- This will prevent NORTH results from being match with SOUTH results, since SOUTH and NORTH have matching order # 



	Order # | Item | ITEM | Sales
	__________________________

	North	 | 001 | Mike  | North | 001| LAPTOP | $999

	North    | 001 | Mike  | North | 001 | MOUSE  | $49

	North    | 002 | Jack  | North | 002 | MONITOR | $155
 
	South    | 001 | Susan | South | 001 | Camera | $ 97






					__________________________________________________________________

											
											Your First Left Outer 

					__________________________________________________________________ 

- In this section we will be working in the (pets) database, and the two following tables we will be working on will be the 'owners' and 'pets'


SELECT *
FROM PETS;

SELECT *
FROM OWNERS;


- To match these two up we will use 'ownerid' as our primary key

- our first ownerid we need to look up is 4378

SELECT *
FROM OWNERS;
WHERE ownerid = '4378'

- Now we will use  a left join and in order to do this; 

SELECT * <- select all

FROM pets <- from pets (AS OUR PRIMARY TABLE) 

LEFT JOIN owners <- matched with owners table 

ON pets.ownerid = owners.ownerid; <- Now you need to specify which tables to join as well as fields. SQL doenst know this what exacly to join, hence pets. and owners. 


- The above will left-join the pets and owners tables amd matched with ownerid


- "Lets make this a bit more interesting"!

SELECT pets.name,owners.name
FROM pets
LEFT JOIN owners 
ON pets.ownerid = owners.ownerid

- The above will present us with the names from both tables






					__________________________________________________________________

											
								Tips and Tricks........(And Right Join) 

					__________________________________________________________________ 

- In the example above we see which pet owners share the same first letter in their nameså
	 LEFT: LEFT SIDE OF NAME
	 pets.: From pets table
	 name: from name column
	 1: 1 letter 
	 =: to match 
	 LEFT: LEFT SIDE OF NAME
	 owners.: From owners table 
	 name: name column
	 1 = 1 letter



					SELECT pets.name,owners.name
					FROM pets
					LEFT JOIN owners 
					ON pets.ownerid = owners.ownerid
					WHERE LEFT(pets.name,1) = LEFT(owners.name,1) 

- And to get a little spicy, we will see if any owners whose names start with the same 2 letters as their pets

SELECT A.name,B.name
FROM pets AS A 
LEFT JOIN owners AS B
ON A.ownerid = B.ownerid
WHERE LEFT (A.name,2) = LEFT(B.name,2)



- Below you can even assign asliases to our column names (This makes me think of Pythons (AS) name assignments to 	modules)

- You can see that we have assigned aslias A to pets and B to owners


					SELECT A.name,B.name
					FROM pets AS A 
					LEFT JOIN owners AS B
					ON A.ownerid = B.ownerid
					WHERE LEFT (A.name,1) = LEFT(B.name,1)


 * Note that you actually dont need to include the "AS"

					SELECT A.name,B.name
					FROM pets A 
					LEFT JOIN owners B
					ON A.ownerid = B.ownerid
					WHERE LEFT (A.name,1) = LEFT(B.name,1)



- You can even add an alias to your COLUMN name


SELECT A.name james,B.name mike
FROM pets A 
LEFT JOIN owners B
ON A.ownerid = B.ownerid
WHERE LEFT (A.name,1) = LEFT(B.name,1)


	* We can now refer to A.name as james and B.name as mike. And in this example I left 


 
- Now we're going to deal with the RIGHT-JOIN 

SELECT A.name petname,B.name ownername
FROM owners B 
RIGHT JOIN pets A
ON B.ownerid = A.ownerid


 * Though just note that honestly this is the same thing as LEFT JOIN, so we wont really be using this much 

 	* But just familiariaze yourself with this



					__________________________________________________________________

												Inner Join
					__________________________________________________________________ 



SELECT *
FROM pets AS A -- SELECTING from PETS assigning 'A' as an alias
INNER JOIN procedurehistory AS B -- To be inner joined with procedurehistory assigning 'B' as the alias
ON A.petid = B.petid;



- We want to see the procedurehistory of all the animals from OUR facility, and from looking at the procedurehistory table we see that it contains animals from clinics ALL around the country. So using RIGHT or LEFT joins on this one might overwhelm us with unnecessary information. That's where the INNER JOIN comes in handy. 

- What we ve done above is soley pull all the pets from our clinic from the procedurehistory table. 




-- NOTES BELOW:

-- procedure history
SELECT *
FROM procedurehistory;

-- pets
SELECT *
FROM pets;



					__________________________________________________________________
											
												Full Outer Join
					__________________________________________________________________  

----- FULL OUTER JOIN --------
SELECT *
FROM pets AS A 
FULL OUTER JOIN procedurehistory AS B
ON A.petid = B.petid;


- A FULL OUTER join just mushed everything together to present you with a giant pile of shit