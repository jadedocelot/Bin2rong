* C++ Variables
// Variables are containers for storing data values
// in C++ there are differnt types of variables (defined with different keywords)

int // stores integers (whole numbers), without decimals, such as 123 or -123
double // stores floating point numbers, with decimals such as 19.99 or - 19.99 
char // stores single characters, such as 'a' or 'b'. Char values are surrounded by single quotes
string // stores texts, such as "Hello World!". String values are surrounded by double quotes
bool // stores values with two states; true or false

 * Declaring (creating) Variables

 // To declare a variable, you must specify the type and assign it a value

type variable = value; 
// type = one of C++ types such as (int)
// variable = the name of VAR such as x or myName 
// (=) is used to assign values to the variable 

//EXAMPLE: 

#include <iostream>
using namespace std;

int main() { 
	int myAge = 28;
	cout << "My current age is: " << endl;
	cout << myAge; 
	return 0;

} 

// The above example uses a created variable called myAge of type (int) 
	type // int  
	variable  // myAge
	value // 28 

// And say your're still uncertain on the value of a varibale. No worries, you can always leave that variable blank and assign a value to it later 

	#include <iostream>
 	using namespace std;

		int main() { 
		int myAge; 	
		cout << "This function consists of a blank variable.";
	
	}
	
// As you can see the above example consists of a blank variable (myAge)
// NOTE that one can overide the the value of a declared variable, like so: 

#include <iostream>
using namespace std; 

int main() { 
	int myAge = 10; // OLD VALUE
	myAge = 28;	// New value
	cout << "my age is "; 
	cout << myAge; 
	return 0;
// OUTPUT 28 
}
	
// The above example revises an already declared variable with new value

// Some Type example 

int myNum = 28;
double myFloat = 19.99;
char personalChar = "X";
string greeting = "Hello World!";
bool isSheLying = true; 


* Display Variables 

// The (cout) object is used together with << operator 
// To combine text and a variable, you must serperate them with << (Python uses + and JS used , to seperate text and variables) 

#include <iostream>
using namespace std;

int main() { 
	int myAge = 28;
	cout << "My current age is: " << myAge << "(Virgo)";
	return 0;

}


* It is also possible to ADD Variables Together 
// To add a variable to another variable, you can use the (+) operator

#include <iostream>
using namespace std;

int main() { 
	int x = 3;
	int v = 5;
	int sum = x + v;

	cout << sum;
	return 0; 


}


// You can even declare multiple variables of the same TYPE in one line: 

#include <iostream>
using namespace std;

int main() { 
	int x = 6, y = 23, c = 12;
	cout << x + y + c;
	return 0; 


}

C++ Identifiers 

// As you may have already guess all variables require an identer which consists of a unique name
	// identifiers can be be short names (x or y) or longer descriptive names (age, sum, or sunAv)

// #NOTE# that it is best to be as descriptive with your identifiers in order to create understandible and maintainable code 

// GOOD and NOT SO GOOD identifier examples 

// GOOD

int minutesPerHour = 60; 


// NOT so good 

m = 60;

/* General rules for constructing names for variables*/ 

* Name can contain letters, digits, and underscores
	- hello 
	- helloWorld 
	- hello_World 
	- hello_World87

* Names must begin with a letter or an underscore  
	- hello_World 
	- _helloWorld 

* Names are CASE SENSITIVE 
	- hello
	- Hello
	- helloWorld 
	- Helloworld 
	- helloworld

			 * All seperate unique variables

* Names cant contain whitespaces or special charaters

* RESERVED C++ keywords such as (int) cant be used

C++ Constants 

// When you dont want other or yourself to change the value of a variable, use the (cont) keyword 
	// This will declare the variable a constant which means that it can't be changed at any point and is strictly READ-ONLY 

// EXAMPLE 7.1

#include <iostream>
using namespace std;

int main() {
	const int myAge = 28; 
	myAge = 18; 

	cout << myAge; 
	return 0; 

}

// EXAMPLE 7.1 shows us an attempt at a CONT variable  to be changed
// once built you will receiver an error message that reads:
	"error: cannot assign to variable 'myAge' with const-qualified type 'const int'"



// REMEMBER: You should only declare a variable as a constant when the value is unlikely to change at any point

#include <iostream>
using namespace std; 
 int main() { 
	const int minPerHour = 60;
	const double pi = 3.141; 
		cout << "There are " << minPerHour <<  " minutes per hour." << endl;
		cout << "also would you like a piece of " << pi;
 return 0; 

 }


































