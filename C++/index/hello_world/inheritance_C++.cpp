// C++ Inheritance 

		Inheritance


- In C++, it is possible to inherit attributes and methods from one class to another. We group the "ingeritance concept" into two catgories.

	* derived class (child) - The class that inherits from another class
	* base class (parent) - The class being inherited from

To inherit from a class, use the (:) symbol

In the example below, the (car) class (child) inherits the attributes and methods from the (vehicle)



#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Base class
// Parent
class vehicle {
public:	
	string brand = "Ford";
	void honk(){
		cout << "beep beep" << endl;

	}

};

// Derived class
//child
class car: public vehicle { //(:) has allowed car to inherit vehicle methods
public:
	string model = "Mustang";

};


int main() {

car myCar; 


cout << myCar.brand + " " + myCar.model; //myCar obj can now inherit (methods/attributes) from either "vehicle" and "car" classes
cout << "\n";
myCar.honk();

return 0;	
}


// It  is useful for code reusability: resuse attributes and methods of an existing class when you create a new class



							
								Multilevel Inheritance

- A class can also be derived from one class, which is already derived from another class

// In the example below we not only inherit from a parent class, but we inherit from an inherited class which has inherited from a parent


// untitled.cpp
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// BASE
// Parent class
class myParent {
 public:
 	void myFunc() {
 		cout << "Some content in parent class.";
 	}
};

// Derived class
//(child)
class myChild:public myParent {

};


// Derived class
// (grandchild)
class my_GrandChild:public myChild {

};


int main() {
	myChild theFam;
	theFam.myFunc();

return 0;	
}

			


					
						 			C++ Multiple Inheritance


- A class can also be derived from more than one base class, using a comma-seperated list:

