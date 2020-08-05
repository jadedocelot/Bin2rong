C++ User Inputs

//// Reminder 
cout // is used to output (print) values

// In this segment we will use introduce a new object in which you can obtain the user INPUT, this is called 
cin 
// This is a predefined variable that reads data from the keyboard with the extraction operator (>>)
// EXAMPLE: 
#include <iostream> // C++ will use the preprocessor and open INCLUDE file and pull out everything that applies its content into the souce code

int main(){ 
	int x; // Declaring a variable with zero value // Notice that though (x) is blank, it still has been assigned a numeric type
		cout << "Type in a number: "; // This will print out string 
		cin >> x; // This will now declare (x) with the the (cin)s predefined value which allows the user to intput a number 
		cout << "Your number is:" << x; // And lastly this will not only display the the attached string but it will also include the above INT input within the string. Thanks to the above predefined (cin) variable
	return 0;	
 }


 Creating a simple calculator:

 /* PLAYGROUND */

#include <iostream>
using namespace std; 

int main() { 
	int x, y; /// inserting 2 blank variables (x,y) which at some point may accept an integer value
	int sum ; // Another blank integer variable for the our calculator results
	cout << "Type a number: ";
	cin >> x; // (cin) will allow the user to INPUT an integer with our blank (x) variable
	cout << "Type another number: ";
	cin >> y; /// Now we will use our remaining blank variable to store the second user input. At the point bloth blank VAR will have a value
	sum =  x + y; // We will now add the values of x and y store our results in the sum variable
	cout << "Sum is: " << sum; // once again we bring in cout to print out our (sum) value
	return 0;

 }

 //// And our should (and is: 4)


/// Below is an example of a calculator using dounble types, which stores floating point numbers with decimals

#include <iostream>
using namespace std; 

int main() { 
	double x, y; 
	double sum ; 
	cout << "Type a number: ";
	cin >> x; 
	cout << "Type another number: ";
	cin >> y; 
	sum =  x + y;
	cout << "Sum is: " << sum;
	return 0;

 }
