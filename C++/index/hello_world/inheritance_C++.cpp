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

// Random Note:
	// Return from void:
		// void is intended to no return any values, though yes they do not return a value they are capable of returning something


// Example 1:

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// BASE
	// Parent class
class myClass { // class created and assigned a keyword 
public: // it is then made public which will then allow it to be accessed from.
 void myFunc() {
 	cout << "Some content in parent class";
 	}
};


// Another base class
class myClassTwo{
public:
 void myTwo(){
 	cout << "\nAnd a lil bit from my other func\n";
 	} 
};

// Derived class
class myChildClass: public myClass, public myClassTwo {

};


int main(){
myChildClass myObj; // Created object may now derive from either myClass or myClassTwo

myObj.myFunc();
myObj.myTwo();


return 0; 	
} 





									Access Specifier




- Some past access specifiers we have learned about in the past were PUBLIC (which can be accessed from outside a class) and PRIVATE (members that can only be accessed within the class) 

- The next specifier we will be focusing on will be the PROTECTED access specifier 
	
	* the protected is similar to private, but it can also be accessed in the inherited class (OH WOW!)


	// untitled.cpp 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Base Class
class employeeId {
 protected:
	int emp_ID;	
};

// Derived class
class user_admin: public employeeId {
 public:
	//int logIn;
	void setEmployeeID(int x){
		emp_ID = x;
	}
	int Edgar_SetID(){
		return emp_ID;
	}
}; 


int main(){

user_admin edgars_ID; // (user_admin) object created
edgars_ID.setEmployeeID(760448); 

	cout << "Edgar Ortegas employee ID: " << edgars_ID.Edgar_SetID() << endl; 

return 0;	
}

// OUTPUT: Edgar Ortegas employee ID: 760448

////// W3school example
/*
#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
*/