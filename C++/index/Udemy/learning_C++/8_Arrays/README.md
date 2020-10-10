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
	else if (key < arr[mid]) h = mid - 1;
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

