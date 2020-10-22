				_--____--__-____-__--__--___-__---__
				
				
							POINTERS
				
				_--____--__-____-__--__--___-__---__



- Pointers are the type of variables in C++, and also the C language

- A pointer is a variable which is stored for storing the address of data

	1. Data Variable
		- Storing Data -> INT x = 10 

	2. Address Variable
		- (P = point in the coming examples)- int *P 
		- To assign out address varible to x 
				- p = &x; 
		
		- Declarized Pointer:  	int *p 
		- Initialized Pointer:  p = &x
		- Dereferencing Pointer: cout << *p;
  
_________________________________________________
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
int c = 32;
int x = 10;
int clone = &p;

int *p;
p = &x;

cout << &x << endl;  // 0x7ffee5b30794
cout << p << endl;	//	0x7ffee5b30794

cout << &c << endl;	//	0x7ffee5b30798
	
	// Adding & to variable in cout will print out the variable address


return 0;
}

_________________________________________________

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
int c = 32;
int x = 10;

int *p;
p = &x;

cout << x << endl;       // 10 <- value of x
cout << &x << endl;     // 0x7ffeee48a774 <- Address of x
cout << p << endl;     // 0x7ffeee48a774 <- Address of x
cout << &p << endl;   // 0x7ffeee48a768 <- Address of p
cout << *p << endl;  // 10 <- value of x



return 0;
}


Pointer Review: 

 - Pointers is an address variable
 - It can be used to store the address of a variable

 - Pointers are used for accessiong heap memory
 	- 5 Arithmetic operations are allowed pointer
 		* p++ - move pointer to next element 
 		* p-- move pointer to previous element
 		* p+k gives address of kth element from pointer location to right
 		* p-k gives address of kth elements between 2 pointers p and q 
 	- pointers can be of many levels
 	
 	- Double pointer is used for accessing 2D arrays
