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
	* ints B[5] = {1.2,5.4,3.2,3.4};
	* char C[5] = {'w','e','w','q','h'};
		 - for chars you have to use single quotes


- You can just create arrays without out assigning an index value: 

int arr[] = {32,4,66,5,32,1,2};

