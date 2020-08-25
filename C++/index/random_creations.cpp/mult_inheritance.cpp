
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// BASE
	// Parent class
class myClass {
public:
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
myChildClass myObj;

myObj.myFunc();
myObj.myTwo();


return 0; 	
} 
