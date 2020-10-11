__ -_-__--__-_-______----_____--_--_---__--__


					ARRAYS

__ -_-__--__-_-______----_____--_--_---__--__

scalar: magnitued -  Single value 

X = 5

----------------------------

vector/list: List of values - magnitude as well as dimension

A = (5,8,3,9,7,4,8,6,3,2)					
  
	index position of arrays:

	  ( 5, 8 , 3 , 9 , 7 , 4 , 8 , 6 , 3 , 2 )
	   A0  A1  A2 A3  A4  A5  A6   A7  A8  A9



--- Setting up an array in C++



#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int arr[10] = {23,42,34,43,2,1,324,32,7};
int x = arr[3];

 
cout << "And your pick is: " << x << endl;

return 0;
}



- And say we wanted to print out the ints within the our array, this is where the for loop comes in handy.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int arr[10] = {23,42,34,43,2,1,324,32,7};
int x = arr[3];


cout << "A array: " << arr << endl;
cout << "And your pick is: " << x << endl;

for (int i = 0; i < 5;i++){  We will have i increment throug the array and 									print each int
	cout << arr[i] << endl;
}

 -The for loop above We will have i increment throug the array and print each int


return 0;
}


NOTE: That you have to use curly brackets when initialzing arrays

- TYPES OF ARRAYS

-You can have multiple types of arrays such as:
	* floats A[5] = {4,3,7,5,3};
	* ints B[5] = {1.2f,5.4f,3.2,3.4};
	* char C[5] = {'w','e','w','q','h'};
		 - for chars you have to use single quotes


- You can just create arrays without out assigning an index value: 

int arr[] = {32,4,66,5,32,1,2};

 - AUTO 

 	 * Will allow you to use a for loop to go through an array without needing to know the type of said array;


 	float A[] = {}

 	 float(auto x:A)
 	 	cout << x << endl;

 	 	return 0;

 	 }





 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 						Adding All Elements of an Array

					__ -_-__--__-_-______----_____--_--_---__--__



- The sytax below will add up all the eledments of an array and give you the sum



#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,1,54,3,23,21,212,53,44,7,876}; 

	for (int dig_net = 0;dig_net < 15;dig_net++) { 
		chum_bucket = chum_bucket + arr[dig_net];	

	}

cout << "You currently have. the following in your pocket: " << chum_bucket << endl;


return 0;
}







 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 					 Finding the Max Element of An Array

					__ -_-__--__-_-______----_____--_--_---__--__



- We will now see if we can find the 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int dig_net;
int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,900,54,3,23,21,212,53,44,7}; 

	for (dig_net = 0;dig_net < 14;dig_net++) {
		if (arr[dig_net] > chum_bucket){
			chum_bucket = arr[dig_net];	
		}

	}

cout << "The max element within your array is: " << chum_bucket << endl;


return 0;
}



 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 					 			Linear Search

					__ -_-__--__-_-______----_____--_--_---__--__

- linear search is the search through of an array

- C++ will see if the users input is within the array, if so the a success message will be sent out. Anf its not, well, we ll let you know.


#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){

int z;
int i = 0;
int x;
int arr[] = {32,422,43,246,2,900,54,3,23,21,212,53,44,7};

cout << "Please enter the number you are searching for: " << endl;
cin >> x;

for(int i = 0;i < 14 ;i++){ <- Say you had no idea how many numbers were within the array, you could always use a larger numebr/variable to be safe
	if (arr[i] == x){
		z = arr[i];
		cout << "Success!" << endl;
		break;		
	}
}

if (z != x){ 
	cout << "Not Successful..." << endl;
}

return 0;	
}




 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 					 			Binary Search

					__ -_-__--__-_-______----_____--_--_---__--__

- Binary Search: 
Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

- The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).

- In order to do binary search all elements must be in sorted order 
	- A binary search is alwaus checking the middle by dividing the array in half everytime

		* o (log n) ("logn time"?)

			* linear search o(n)

- X array starts at INDEX position 0 and ENDS at 9 \/



L (low)       |      H(high)    |    mid = [l + h / 2]
______________________________________________________
      0  	  |		  9	        |      0 + 9 / 2 = 4                
      5 	  |		  9	        |      5 + 9 / 2 = 7                 
      5  	  |		  6	        |      5 + 6 / 2 = 5                
      6  	  |		  6	        |      6 + 6 / 2 = 6               
 




#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

int arr[10] = {32,4,56,333,12,2,7,54,1,22};
int l = 0, h = 9, key, mid;

// 32 = l 
//22 = h 

cout << "Enter a number for key" << endl;
cin >> key;
 
while (l <= h) 
{
	mid = (l + h)/ 2; // 4 (4.5)

	if (key == arr[mid]){ // if key == 4 
		cout << "Found at: " << mid << endl;
		return 0; // <- This will end the program
	}
	else if (key < arr[mid]) h = mid - 1; // if key < 4 
	else l = mid + 1; 
	}


 cout << "Not Found" << endl;

return 0;
}


/*
32
Not Found
4
Found at: 1 <--
56
Not Found
333
Not Found
12
Found at: 4 <--
2
Not Found
7
Not Found
54
Found at: 7 <--
1
Not Found
22
Not Found
*/

// int arr[10] = {32,4,56,333,12,2,7,54,1,22};
					 1         4     7 


 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 					 			 Nest For Loop

					__ -_-__--__-_-______----_____--_--_---__--__

- As you imagined this is a for loop within a for loop

#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int main(){

for (int i = 0; i < 3; i++){
	for(int j = 0;j < 3;j++){
		cout << i << j << endl; 
	}
}


return 0;
}

// OUTPUT:
/* 
// OUTPUT:
/* 
	  i ->	01 <- j
			02
			10
			11
			12
			20
			21
			22
			*/

- WHATS HAPPENING?

i  |  j
0  |  0
0  |  1 
0  |  2 
1  |  0 
1  |  1
1  |  2
2  |  0
2  |  1 
2  |  2 

- As we can see above, the incrementation focuses on 'J' untill it has reached 3, once at 3 it will break out of the loop and begin 'I' incrementation, note that 

- 'i' will act as a row index and 'j' will act as a column index

- Both loops wont end untill 'i' HN

- Nested for loops work like "rows and columns"

- 2 diment 


# Some more examples of nested for loops #


#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int main(){

for (int i = 0; i < 4; i++){
	for(int j = 0;j < 4;j++){
		cout << j << i << j << endl; 
	}
}


return 0;
}
						

                     i	
                    \/
			'j'->	000   <-'j'
			'j'->	101	  <-'j'
			'j'->	202	  <-'j'
			'j'->	303	  <-'j'	
					010  
					111
					212
					313
					020
					121
					222
					323
					030
					131
					232
					333					



------------------------

#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int main(){

for (int i = 0; i < 4; i++){

	for(int j = 0;j < 3;j++){
		cout <<"This is i -> "<< i << " This is j -> " << j << endl; 
	}
}


return 0;
}


This is i -> 0 This is j -> 0
This is i -> 0 This is j -> 1
This is i -> 0 This is j -> 2
This is i -> 1 This is j -> 0
This is i -> 1 This is j -> 1
This is i -> 1 This is j -> 2
This is i -> 2 This is j -> 0
This is i -> 2 This is j -> 1
This is i -> 2 This is j -> 2
This is i -> 3 This is j -> 0
This is i -> 3 This is j -> 1
This is i -> 3 This is j -> 2  



------------------------------------------------

- In the example below we can see a 2 dimensional array

#include <iostream>
using namespace std;

int main() {

	for(int i=1;i <= 5;i++)
	{
		for (int j= 1;j <= 5;j++)
		{
			cout << "( " << i << " , " << j<< " ) ";

		}
		cout << endl;
	}
return 0;
}

OUTPUT: 
( 1 , 1 ) ( 1 , 2 ) ( 1 , 3 ) ( 1 , 4 ) ( 1 , 5 )
( 2 , 1 ) ( 2 , 2 ) ( 2 , 3 ) ( 2 , 4 ) ( 2 , 5 )
( 3 , 1 ) ( 3 , 2 ) ( 3 , 3 ) ( 3 , 4 ) ( 3 , 5 )
( 4 , 1 ) ( 4 , 2 ) ( 4 , 3 ) ( 4 , 4 ) ( 4 , 5 )
( 5 , 1 ) ( 5 , 2 ) ( 5 , 3 ) ( 5 , 4 ) ( 5 , 5 )







------------

- In the example below we fish for 4s in a two dimensional array. And then ask the user to input a number which will be deducted from you grand total, so you better choose wisely. After being cut, you will see if your remaining total will cover the entrance fee.



// in the example below we presnet a two dimensional array, and everytime j (our column index increment) = 4, 4 will be added to x(0). At the end of the loops we will see the grand total of x 

#include <iostream>
using namespace std;

int main() {
int x = 0;

	for(int i=1;i <= 5;i++)
	{
		for (int j= 1;j <= 5;j++)
		{
			cout << "( " << i << " , " << j<< " ) ";
				if (j == 4){
					x = (x + j) * 4;
				}			
		}
		cout << endl;
	}		

int user_input;

	cout << "Now enter a number to deduct: " << endl;
	cin >> user_input;

	x = x - user_input;


	if (x < 10) {	
		cout << "Welp you don't enough to enter buddy" << endl;
		cout << "And the totatl for x is: " << x << endl;
		return 0;
	}
	else if (x > 10) {
		cout << "Congrats! You got enough to enter.";
		cout << "And the totatl for x is: " << x << endl;
		return 0;
	}

}

input: 

14

OUTPUT:

( 1 , 1 ) ( 1 , 2 ) ( 1 , 3 ) ( 1 , 4 ) ( 1 , 5 )
( 2 , 1 ) ( 2 , 2 ) ( 2 , 3 ) ( 2 , 4 ) ( 2 , 5 )
( 3 , 1 ) ( 3 , 2 ) ( 3 , 3 ) ( 3 , 4 ) ( 3 , 5 )
( 4 , 1 ) ( 4 , 2 ) ( 4 , 3 ) ( 4 , 4 ) ( 4 , 5 )
( 5 , 1 ) ( 5 , 2 ) ( 5 , 3 ) ( 5 , 4 ) ( 5 , 5 )
Now enter a number to deduct:
5442
Congrats! You got enough to enter.And the totatl for x is: 14




 	 				__ -_-__--__-_-______----_____--_--_---__--__


 	 					 			 Drawing a Patten

					__ -_-__--__-_-______----_____--_--_---__--__



- This will require a nested for loop


#include<iostream>
#include<string>
#include<cmath>
using namespace std; 


int main(){

int count = 1;

for (int i = 0; i < 20;i++){
			if (i >= j)
			cout << "*";
	for (int j = 0; j < 20;j++){	
		if (i >= j)
			cout << "*";
		}
	 cout << endl;
	}

return 0;
}


// OUTPUT:

/*
*
**
***
****
*****
******
*******
********
*********
**********
***********
************
*************
**************
***************
****************
*****************
******************
*******************
********************
*/