						C++ Class Methods



Class Methods: 
	- Methodas are (funtions) that belong to the class

		// REAL QUICK - FUNCTION EXAMPLE:

				void myFunc(int x, int y) {
					return x + y;
				}  


	- There are two ways to define funtions that belongs to a class: 


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

					cout << myObj.myMethod(12,12) << endl;

				return 0;	
				} 


// Example #2
#include<iostream>
#include<cmath>
#include<string>
using namespace std;


class const_car {
public:
	void dans_constant(string x){ 
		cout << "Dan's car: " << x << endl;
	}

}; 


int main(){

 const_car dans_car; 

	dans_car.dans_constant("BMW");


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


- To declare a function outside the class definition, you have to declare it inside the class and define it outside of the clas. 

	- This is done by specifying the name of the class, followed the scope resolution (::) operator, followed by the name of the funtion.


		* Outside class definition -- EXAMPLE: 1
		_______________________________		
 		

				class myClass { // The class
					public: // Access specifier
						int myMethod(); // method function declaration

				};

					/// Method/Fuction definition outside the class

				int myClass::myMethod() { // myMethod is the FUNCTION, FYI
					return x + y;
				} 



				int main() {

					myClass myObj; // create the object
					myObj.myMethod(); // call the methods


				return 0;	
				}





				 									PARAMETERS

	- You can also add parameters (NO WAY!) 

// My example

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



//W3school example:

#include <iostream>
using namespace std;


class Car {	 // Create class
 public: // Access specifier
 	int speed(int maxSpeed); 
 		// Method function declaration
 	   // parameters are included unpon declaring class
};

 // Method/Function definition outside of class
// And once again parameters are brought up upond defining a method
int Car::speed(int maxSpeed) {
	return maxSpeed;

} 

int main(){
	Car myObj; // Create object of (Car)
	cout << myObj.speed(200) << endl; // Call method


return 0;
}

	// OUTPUT: 200













