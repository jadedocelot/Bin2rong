																	C++ Strings
														________________________________			
// Strings are used for storing TEXT 

string greeting = "Hello world!" // string type variable storing a, you know it, a variable

#include <iostream>
using namespace std; 

int main() { 
string warmGreet = "Hello world!";
	cout << warmGreet << endl;
	return 0;

}
// Below you will find a lil mirror string example




// To use strings, you must include an additional header file in the source code, the <string> library; 

#include <iostream> 
#include <string> // Include the string library
using namespace std; 

int main() {
	string copyCat; // Create a string (type) variable
	cout << "What's the word?: ";
	cin >> copyCat;
	cout << copyCat << endl;
	return 0; 

 }

															C++ String Concentration
														_______________________________

// The (+) operator can be used between strings to add them together to make a new string. this is called (concatentation)

#include <iostream> 
#include <string> // Include the string library
using namespace std; 

int main(){
string first = "Edgar"; 
string last = "Ortega";
string space = " "; // Ive even gone ahead and stored a space value into a variable. This can be done with a double quote "" and single quotes' '
string fullName = first + space + last; // we use the (+) operator to string together 3 variable and place them into 1 new variable

	cout << fullName << endl;  // OUTPUT: Edgar Ortega
	return 0;

 }

																 Append
															---------------
./
// A string in C++ is actually an object, which contains functions that can perform certain operatios on strings. For example, you can also concatenate string with the append() function.

#include <iostream>
#include <string>
using namespace std; 

int main() {
string first = "Edgar ";
string last = "Ortega";
string fullName = first.append(last);  /// the append() function is used to conncetenate (first) and (last) 

	cout << fullName << endl; 
	return 0;
 
 }														

// SUPPOSEDLY, the append() function is faster than say using the (+) operator. Although for testing, the user might be better off using (+)

 
 /// THE FOLLOWING HAS BEEN COVERED IN OUR VARIABLES CATAGORY 
 

 ////Numbers are added. Strings are concatenated. 


// Numbers are being added below: 
#include <iostream>
using namespace std; 

int main(){ 
	int x = 12;
	int y = 18; 
	int sum = x +y; 

	cout << sum << endl;
	return 0; 


 }



// Strings being added (concatenation) 

#include <iostream>
#include <string>
using namespace std; 

int main() { 
string a = "20";
string b = "20";
string year = a + b; 

	cout << "The year is" << " " << year << endl;
	return 0;



 }


// Though note that its not possible to add a string and an int together, an error message will be returned if attempted

#include <string>
using namespace std;

int main() {
int a = 20;
string b = "20";
string year = a + b;

        cout << year << endl;
        return 0;
 }


																		C++ String Length 

// To get the length of a stringm use the lenth() function: 

#include <iostream> 
#include <string>
using namespace std; 

int main(){ 
string myLeng = "123456789";

	cout << "And the length of the string is: "<< myLeng.length() << endl;  
	// By adding the VARkeyword.length() to the right side of the left-shift (<<), cout will output the numeric length of  the myLeng string
	return 0;
 }

NOTE: /// That the size() function is just another alias if length()

#include <iostream> 
#include <string>
using namespace std; 

int main(){ 
string myLeng = "123456789";

	cout << "And the length of the string is: "<< myLeng.size() << endl;  
	// By adding the VARkeyword.length() to the right side of the left-shift (<<), cout will output the numeric length of  the myLeng string
	return 0;
 }


C++ Access Strings 
// You can  access the charaters in a string by reffering to its index number inside square brackets []
#include <iostream>
#include <string>
using namespace std; 

int main() { 
string truth = "The good times are killing me";

	cout << truth[4]; // will output "g", since g is positioned #4 within the truth string
	return 0;


 }



 							Change String Characters 
/// To chage the value of a specific charater in a string, refer to the index number, AND USE SINGLE QUOTES: 
 

#include <iostream>
#include <string>
using namespace std; 

int main() { 
string truth = "The good times are killing me";
truth[4] = 'm';

	cout << truth; /// OUTPUTS: "The mood times are killing me"
	return 0;

 }



 											User Inputs Strings

// It is possible to use the extraction operator (Right Shift Operator) >> on (cin) to display a string entered by a user:

#include <iostream>
#include <string> 
using namespace std; 

int main() { 
string firstName; 
	
	cout << "Type your first name: ";
	cin >> firstName; 
	cout << "Please verify that this is the correct name: " << firstName << "?" << endl; // OUTPUT: Please verify that this is the correct name: Edgar? 
	return 0; 

 }

/// HOWEVER!
// (cin) condiders a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words)

#include <iostream>
#include <string> 
using namespace std; 

int main() { 
string fullName; 
	
	cout << "Type your full name:";
	cin >> fullName;
	cout << "Confirm your full name: " << fullName <<  endl;  //OUTPUT: Edgar

	return 0; 

 }

 // In the example above the user expects the fuction to print out the full name (Edgar Ortega) but it is only presented with (Edgar
// That't why, when working with string, we often use the GETLINE() function to read a line of text. It takes (cin) as the first parameter, and the string variable as second:

#include <iostream>
#include <string> 
using namespace std; 

int main() { 
string fullName; 
	
	cout << "Type your full name:";
	getline (cin, fullName);
	cout << "Confirm your full name: " << fullName << '?' << endl; // OUTPUT: Edgar Ortega 
	return 0; 

 }

															C++ String Namespace
// You might see some C++ programs that runs WITHOUT the standard namespace library. The (using namespace std) line can be omitted and replaced with the (std) keyword
 // Followed by the :: operator for string (and cout)objects
 #include <iostream>
#include <string>

int main() { 
std::string greet = "Hello world!"; 
	std::cout << greet;
	return 0;

 }

 // In the end it is a personal preference on whether one would prefer to use nameapce or rogue std:: 


















 