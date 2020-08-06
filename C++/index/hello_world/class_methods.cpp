						C++ Class Methods



Class Methods: 
	- Methodas are (funtions) that belong to the class

		// REAL QUICK - FUNCTION EXAMPLE:

				void myFunc(int x, int y) {
					return x + y;
				}  


	- There are two ways to define funtions that belongs to a class: 

		* Outside class definition -- EXAMPLE: 1
		_______________________________		

				void myMethod(int x, int y) { // myMethod is the FUNCTION, FYI
					return x + y;
				}  

				class myClass {
				public: /// STOP FORGETTING TO INCLUDE PUBLIC!

				};


		* Inside class definition -- EXAMPLE: 2
		_______________________________
	
				class myClass { // THE CLASS
				public: /// STOP FORGETTING TO INCLUDE PUBLIC! -- THIS IS THE ACCESS SPECIFIER
					void myMethod(int x, int y) { // Method/function defined inside class
					return x + y;
					}  

				};



				int main() {

				myClass myObj;

				myObj.myMethod();

					cout << myObj.myMethod(12,12) << endl;s

				return 0;	
				} 


- In Example 2 (seen above), we can see a method (function) being defined within a class. And as you can see we have named it "myMethod"

NOTE: You can access methods. just like you can access (Attributes); by creating an object of the class and by using the dot syntax (.);



// EXAMPLE: 3

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class myClass {
public: // STOP FORGETTING to make publicx
	int myMethod(int x, int y){ // int fuctio
		return x * y;
	}
}; // semi to close  class


int main() {

myClass myObj;

cout << myObj.myMethod(12,32) << endl; // Cout since method/funtion includes (return)


return 0;
} 

// OUTPUT: 384