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