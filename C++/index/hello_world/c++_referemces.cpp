											
											______________

											C++ References
											______________

// Creating References
// A reference variable is a "reference" to an existing variables, and it is created with the (&) operator;
// To create a reference variable, one must use the (&) operator

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
string mealOne = "Pizza";
string &lastMeal = mealOne;

cout << mealOne << endl;
cout << lastMeal << endl;
// Now, you can either the variable name (mealOne) or the reference name (lastMeal) to refer to the (mealOne) variable



	return 0;
}


													____________________

													 C++ Memory Address
													____________________

// In the example from the previous page, the (&) operator was used to create a "refernce" variable. But it can also be used to get the memory address of a variable;

// When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to a variable, it is stored in this memoru address
// To access it, use the (&) operator (once again) and the result will represent where the variable is stored


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
string mealOne = "Pizza";

string &lastMeal = mealOne;

cout << lastMeal << endl; // OUTPUT: Pizza
cout << &lastMeal << endl; //OUTPUT: 0x7ffeee944718

// As you can see in the example above using the (&) operator we can not only obtain the a REF varaible but we can also get the STORED (memory address) of said REF variabkle wj



	return 0;
}

//NOTE: The memory adderss is in hexadecimal form (0x..). NOTE NOTE: That you may not get the same result in your program



															_____________________________________

															   And Why is it Useful to Know The
															   			Memory Address 
															_______________________________________


 (References) & (Pointers) are important in C++, becuase they give you the ability to manipulate the data in the computers memeory - which can reduce the code and improve the performance

				These are two features are one of the things that make C++ stand out from other programming languages, like Python and Java

_____________________________________________________________________________________________________________________________________________________________________________________________












