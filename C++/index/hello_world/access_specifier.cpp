					

					C++ Access Specifier


- Access Specifiers
	- By now, we re familiar with the (public) keyword

				// Example below:
			___________________________________

				class myClass{ // The class
				 public:	// Access Specifier

				 	// class members goes here
				 			// attributes/methods
				}; 


- public = Access Specifier
	
	- Access Specifiers define how the members (attributes and methods) of a class can be accessed.

	- the (public) specifier means that they can be accessed and modified from outside the codes


	In C++ There Are Three Access Specifiers: 

		- (public): members are accessible from outside the class
		- (private): members cannot be accessed (or viewed) from outside the class
		- (protected): members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more aout (Inheritance) later


// In the following examples, we demonstrate the differences between PUBLIC and PRIVATE


// untitled.cpp


#include <iostream> 
#include <cmath> 
#include <string> 
using namespace std; 

class myClass {
 public: // public access specifier
 	int x; 
 private: // private access specifier
 	int y;
} ;


int main(){

 myClass myObj; 

 	myObj.x = 25;
 	myObj.y = 453;

return 0;
}


//
// When attempting to compile, the following errors will appear: 
//
untitled.cpp:23:9: error: 'y' is a private member of 'myClass'
        myObj.y = 453;
              ^
untitled.cpp:13:7: note: declared private here
        int y;
            ^
1 error generated.


// This is because of the private specifier within our class

// NOTE: It is possible to access private members of a class using a public method inside the same class. (See the next chapter (Encapsulation) on how to do this) 

// It is considered good practice to declare your class as pivate (as soon as you can). This will reduce the possiblity of yourself to mess up the code. This is also the main ingrediant of the (Encapsulation) concept.

______________________________________________________________________


// NOTE: By default, all members of a class are (private) if you dont specify  an access specifier



// untitled.cpp


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class myClass{

// Since an access specifier was not assigned to this class, by default it will be teamed with (private) specifier 
	
string color;
string brand; 
string year;

	myClass(string x, string y, string z){
		color = x;
		brand = y;
		year = z;
	}
} ;




