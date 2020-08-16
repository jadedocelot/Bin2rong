C+_+ Encapsulation


Encapsulation

	- The meaning of (Encapsulation)
		 - Is to make sure that "Sensitive" data is hidden from users.

		 - To acieve this, you must declare class variables/attributes as 	   private (cannot be accessed from outside the class)

		 - If you want others to read or modify the value of private member, you can provide public (get) and (set) methods



		 Access Private Members

		 	- To access a private attribute, use  public "get" and "set" methods: 

		 	// untitled.cpp


___________________________________________________________________________________________________


#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Employee { 
 private:
 	int restricted_salary; //
 		//(int) 'restricted_salary' has been assigned a (private) access specifier

xz
 public: // public setter for a private access specifie r
 	void setSalary(int s) { // our new (public) method which will allow our private specifier to be accessed
 		restricted_salary = s; // (restricted_salary) has been declared and is ready to take in arguments

 	} 
 	// Getter
 	int getSalary() { // (restricted_salary) is no longer void (or private) and will now return an (int)
 		return restricted_salary; //

 	}
};

int main(){

Employee myObj; // We have set Employee as an object (myObj) 
	myObj.setSalary(50000); // a value is assigned to restricted_salary(setSalary)
	cout << myObj.getSalary(); // lastly, we print restricted_salary as it now has a value(getSalary)

return 0; 
}



										Now Why Encapsulation?

 - It is considered good practice to declare your class attributes as private (as often as you can)

 	- Encapsulation ensures better control of your data, becuase you (or others) can change one part of the code without affecting others parts

	- Increased data security