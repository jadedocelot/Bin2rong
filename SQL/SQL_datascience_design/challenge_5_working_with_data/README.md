					   ____________________________
					| Creating and Alterring Tables |
					   ____________________________

- In this example we have IMPORTED 2 CSVs, console_dates and console_games
__________________________________________________________________________


   CREATE NEW TANBLE GLOBAL SALES

   ALTER TABLE console_games
   ADD COLUMN global_sales Float 8;

* ALTER TABLE: Here we will ne adding something to console_games, om this case 	 altering it by adding a new column row

* ADD COLUMN: This will create a new column row in global_sales

* Float 8: This means that we will be add integer values with decimal points


- Another inputting all the data within global_sales. We can do the following to add up the NA/EU/JP/OTHER sales and add that new data to our NEW ROW global_sales

UPDATE console_games
SET global_sales = na_sales + eu_sales + jp_sales + other_sales 

* UPDATE: will let postgreSQL kknow that we will be adding data to console_games 

* SET: will add up the data from na/eu/jp/other sales and add that data to global_sales


- Now we want to add the percantage of global_sale to the na_sales_percent:

UPDATE console_games
SET na_sales_percent = na_sales/global_sales
WHERE global_sales > 0;


* UPDATE: focus on console_games

* SET: We will divide na_sales (/) with global_sales and add that data to na_sales_percent

* WHERE: Since we can't divide by ZERO, we must only divide by numbers greater than ZERO in global_sales

- And to clean up our na_sales_percent

SET na_sales_percent = na_sales/global * 100 

	- must multiply by 100



					   ___________________________
	
						| Organizing our Tables|
   					   ____________________________
- We will organize our console_games table by ascending order (smallest to largest)


SELECT 
FROM console_games
ORDER BY game_rank ASC;

- Orders the list by ascending order going off the game_ranks

- And if you wanted to order it by descending order, you would use DESC in place of ASC

SELECT 
FROM console_games
ORDER by platform ASC, game_year DASC: 

- list will still be somewhat out of order though platform will be in asending order and game_year will be in descending order





						 _____________________
						|					  |
						|Working With Varchars|
						 _____________________


- String function are SQL functions that let you work directly with strings and allows you to manipulate them   


LENGTH() Function 

SELECT game_name, length(game_name) 
FROM console_games

- length(): This function will show use us the number of charaters within each element of the desired row. in the example above we will see the number of char of (game_name)

LEFT() Function

SELECT publisher, left(publisher,4)
FROM console_games;

- The left(), 4 will show present the 4 first letters of the elements under the publisher column

or 

SELECT publisher, right(publisher,4)
FROM console_games;

- To see the last 4 letters 

	* Now note that you can choose the number of characters you would like to see, so 4 can be 2 char or 8 char

Reverse() Functuion

SELECT publisher, reverse(publisher)
FROM console_games;

- The argument within the reverse() fuction will be printed out in reverse order (funny?) - renaming the case sensitivity




						 _____________________
						|					  |
						| Working with Dates  |
						 _____________________



SELECT *, first_retail_availability - discontinued AS days_existed 
FROM console_dates; 

(NOTE: that the results of this function is only temporary, soley for assessmnet)

 * discontinued - first_retail_availability:
 We have subtracted the date in which the colsole was discontinued from the day of its release to get the number of days said console was in the market

	(NOTE: you always want to subtract the earlier date from the following date)


 * AS days_existed: 
 after subtracting the days we end up with the number of days each console was on the market, with this new date we place into a new column titled days_existed.

- Now say we didnt want the days but the approximate amount of years that eac conolse was on the market:

SELECT *, (discontinued - first_retail_availability)/365 AS days_existed 
FROM console_dates; 


* (discontinued - first_retail_availability)/365 AS days_existed: 
	Here we first subtract the discontinued date from the first_retail_availablity (since it resided within the parantesis, remember paranth gets first dibs). Once sub is completed twe then divide that number by 365 which then gives is the uests as oppose to the days. This data is then entered into our new column days_existed.


NOTE: That this is only temporary so this is not an ideal method

- Always practice all the functions that are taught throughout your course:

SELECT *, (discontinued - first_retail_availability)/365 AS days_existed 
FROM console_dates 
ORDER BY days_existed;







						 _____________________
						|					  |
						| Powerful Functions  |
						 _____________________
 
 - The following will give us a more accurate result though I must stress the results are only temporary so once you run another query it will disapear.

inte SELECT *, DATE_PART('year', discontinued) - DATE_PART('year', first_retail_availability) AS years_existed
FROM console_dates 
ORDER BY years_existed;  

	* DATE_PART('year', ): This will subrtract on listted value from another listed value. Which will present you with a rather accurate result of years existed. 

- Though what if you wanted DATE_PART('day') or DATE_PART('month') ? 

- Say we wanted to see all the games that were released before Black Friday which is in November (The 11th month)

SELECT *
FROM console_dates 
WHERE DATE_PART('month', first_retail_availability) - 11  = 0;


* WHERE DATE_PART('month', first_retail_availability) - 11  = 0:
	We basically said that NOVEMBER (DATE_PART('month',<column name>)) - 11 = 0

		_ with this you will see all the consoles that were released in November 

- And maybe we wanted to see the onese that were released right before Christmas (12 month)

SELECT *
FROM console_dates 
WHERE DATE_PART('month', first_retail_availability) - 12   = 0;

- What if you wanted to get the soley the QTY of consoles that were released in November and December:

SELECT  COUNT(platform_name)
FROM console_dates 
WHERE DATE_PART('month', first_retail_availability) - 12   = 0 OR DATE_PART('month', first_retail_availability) - 11 = 0;

- We have gone through the following examples to get an understanding of the date process, but there is in fact an easier method to get all this info and SQL will present it in a much cleaner format

SELECT *, AGE(discontinued, first_retail_availability) as survival_rate // Timespan between both dates entered into our new column row - survival_rate
FROM console_dates 
ORDER BY survival_rate ASC; // order our new row by ascending order

	- This will not only show us the year but will also include the month and day


- This will help us with focusing on current data




 						_____________________________
						|					  		|
						| Implicit Data Conversion  |
						_____________________________

- Data Type Conversion is rather RARE in SQL
	
	- This use to convert column to different types like strings or integers, say the values within one doesnt work with one type then you can always convert it 

 * For example, game_year within console_games, the colomn header states that it is an integer type for it holds WHOLE integers that are years (2009,2000,1999)

- Now say we want to change thje data type of game_year from INTEGER to something elese  


	* NOTE: That this method is temporary and our table will reset once we input a new query

- CAST() function

SELECT  CAST(game_year as varchar(4))
FROM console_games
ORDER BY game_rank

OR

SELECT game_year::varchar(4)
FROM console_games
ORDER BY game_rank


  
SELECT to_date(CAST(game_year as varchar(4)), 'yyyy')
FROM console_games
ORDER BY game_rank