C++ Data Types 


// as in explained in our variables.cpp file, a variable must be specified with a data type.
// The examples below can be found in variables.cpp in our hello_world directory

int myNum = 28; /* int = integer which stores whole positive and negative numbers */ ====> 4 bytes
double myFloat = 2.23; /* Double represents floating numbers with decimals, Sufficient for storing 15 decimal digits */ ====> 4 bytes 
float myDouble = 3.32; /* Double represents floating numbers with decimals, Sufficient for storing 7 decimal digits */ ====> 8 bytes 
char myLetter = "A"; /* char is a single charater type that uses "A" and "B" and so on and so on */ ====> 1 byte
bool myBool = True; /* bool represents boolean which use TRUE or FA string text = "Hello world!"; /* and strings uses. You guessed it, strings/text */  ====>

Float vs Double: 
// The precision if a floating point value indicates how many digits the value cab can have after the decimal point. 
// The precision of (float) is only six or seven decimal digits
// while (double) variables have a precision of about 15 digits
// Therefore, (double) is safer to use for most calculation



BOOLEAN 
/// Boolean data type is declared with the (bool) keyword and can only take values TRUE or FALSE. When the value is returned: 
// true = 1 
// false = 0 

#include <iostream>
using namespace std;

int main() { 
	bool isCodingFun = true; // 1 
	bool isCodingTasty = true; // 1 
	bool isCodingEasy = false; // 0
	cout << isCodingFun << endl;  // << endl newiline following the output of isCodingFun 
	cout << isCodingTasty << endl; 
	cout << isCodingEasy << endl;
	return 0;

 }

 /* 
OUTPUT: 
1
1
0
*/

 Characters: 
 /// The (Char) data type is used to store a single character. The area must be surrounded by SINGLE quotes

 //// Playground 

#include <iostream>
using namespace std;


int main() {
char mySingleChar = 'A';
char mysingleChar = 'B'; 
	cout << mySingleChar << endl;
	cout << mysingleChar;
	return 0;



 }


/// Now if  you thourougly read the above notes on CHAR data types then you should understand why one would get an error message after printing

#include <iostream> 
 using namespace std; 

int main() { 
char myChar = "A";
char myCharTwo = "B";
	cout << myChar << endl; 
	cout << myCharTwo;
	return 0;

  }

// Our compiler will present us with the following bugs, myChar and myCharTwo cannot initialize since they contain ("") instead of (''). Remember that CHAR data types can only contain double quotes

// ALternatively, you can use ASCll values to display certain characters......Still don't know how this would come in handy.


#include <iostream> 
using namespace std; 

int main() { 
char a = 65, b = 66;
	cout << a << endl; 
	cout << b << endl;
	return 0; 

/* 
OUTPUT: 
A
B 
*/ 


C++ String Data Types
// The (string) type is used to store a sequence of characters (text within double/single quotes) 
// NOTE: this is not a built in type. But, it behaves like one in its most basic usagee

// EXAMPLE: 

#include <iostream> 
using namespace std; 

int main() { 
string greeting = "Hello C++"; // string 
string dontForget = "and greeting to one and all!."; // string 
	cout << greeting << " " << dontForget;  
	return 0; 
 
 } 

/// Below is an example of a small intro machine using a string data type;

#include <iostream> 
using namespace std; 

int main() { 
string x; 
	cout << "What is your name?";	
	cin >> x;
	cout << "Wow, that's a silly name.";
	return 0; 

}	


// To use strings, you "must" include an additional header file in the source code, the <string> library
 //NOTE: Do I really need to use this? Cause it seems to work without it but we ll touch down on this  later
		// In the example below, rather than (using) namespace, we plug STD:: to each line.

#include <iostream>
#include <string> // string library has been implemented

int main() { 
std::string x; 
	std::cout << "What is your name?";
	std::cin >> x;
	std::cout << x << ", that's a silly name.";
	return 0; 

}	






















