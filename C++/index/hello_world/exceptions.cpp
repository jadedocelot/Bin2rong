
				C++ Exception

- When executing C++ code, different errors can occur: coding errors made by the programmer, errors dude wrong input, or other unforesceeable things.

// Is this similar to the try/except
- When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error)


	C++ try and catch 

- Exception handling in C++ consists of three keywords: (try), (throw), and (catch):

	* (try) statement: this allows you to define a block of code to be tested for errors while it is being executed.
	
	* (throw) keyword: Throws an exception when a problem is deleted, which lets us create a custom error.

	* (catch) statement: allows you to define a block of code to be executed, if an error occurs in the try block

	* (try) and (catch) keywords come in pairs 


	try {
		// Block of code to try
		throw exception; // Throw an exception when a problem arise
	 }

		catch (){

		//Block of code to handle errors¡™

	 }


	 int main() {
try { // The (try) block will test some code.
	int age = 15;
	if (age > 18) { // if(age) variable is less that 18 - Print X
		cout << "Access granted - you are old enough." << endl; // <- X
	} else { // else if (age) is less than 18
	  throw (age); // our block will throw an 'exception' and it will be handled by our (catch) block below//
	}
} 
// The catch statement below will "catch" the error and allow us to avoid a an error message to be throw out by our compilers

catch (int myNum) { 
// Im guessing the myNum parameter will inherit the value of the (age) value above thanks to the (catch) statement.
// the int variable (myNum) will inherit the exception int type in
cout << " Access denied - you must be at least 18 years old.\n";
cout << "Age is: " << myNum << endl;	
} 

// NOTE: if NO errors occured (age > 18), then the syntax within the (try) block would print out

return 0;
}




// You can also use the throw keyword to output a reference number, like a custom error numeber/code for organizing purposes.





#include <iostream>
#include <cmath>
#include <string>
using namespace std;



int main(){

try {
int age = 15;
if (age > 18) {
	cout << "Access granted - you are old enough";
	} else {
		throw 202;
	} 	
}
catch (int myNum) {
	cout << "Access denied - You must be at least 18 years old. \n\n";
	cout << "Error number:" << myNum << endl;
}

return 0;
}





			Handle Any Type of Exceptions

- If you do not know the (throw) type used in the (try) block, you can use the "three dots" syntax (...)inside the (catch) block, which will handle any type of exception

