
#include <iostream>
#include <string>
#include <cmath>
using namespace std; 


int main() {
try {
	int age = 19;
	if (age > 18) {
		cout << "Access granted - you are old enough." << endl;
	} else {	
	  throw (age);	
	}
} 
catch (int myNum) {
cout << " Access denied - you must be at least 18 years old.\n";
cout << "Age is: " << myNum << endl;	
} 
return 0;
}
// OUTPUT TIME: 0.5s
