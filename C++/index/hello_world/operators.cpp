C++ operators
// Operators are used to perform operations on variables and values 

// The operators below include the following; =, +, <<

int x = 4; // The (=) operator assigns the value
int y = 6; // The (=) 

int sum = x + y; 
// (+) adds the x and y variabless
// and the value we get from add the two var is then a (=) to sum

#include <iostream>
using namespace std; 

int main() {
	cout << sum; // The left shift operator (<<) will shift to the (cout) output. 
	return 0; 

 }

 // NOTE: (cout) = output and (cin) = inputs

 // In the example above we used the (+) operator to add two variables 
 // but it may also be used to add two values together and or a value AND a variable


int sum1 = 200 + 200; 
int sum2 = sum1 + 200; 
int sum3 = sum1 + sum2; 

#include <iostream>
using namespace std; 

int main() { 
	cout << sum3;
	return 0; 

 }

 // There are a number of operator groups:
 	- Arithmetic operators 
 	- Assignment operators 
 	- Comparison operators 
 	- Logical operators 
 	- Bitwise operators 


Arithmetic Operators

  (+) Addition operator 
  		// Add together two value/variables

		#include <iostream>
		using namespace std; 
		
		
		int main() { 
		int x; 
			cout << "How much would like to deposit into your savings account? Your current balance is $10:"; 
			cin >> x;
			int y = 10 + x;  
			cout << "Your new balance is:" << "$" << y << endl; 
			return 0;
		 }






  (-) Subtraction operator
  	   // Subtracts one value from another

  (*) Multiplication operator 
  	  // Multiplies two values

  (/) Division operator 
  	  // Divides one value from another

  (%) Modulus operator
  	  // Returns the division remainder 

				int x = 20; 
				int y = 90;
				int sumRemain = y % x;
				
				#include <iostream>
				using namespace std; 
				
				int main() { 
					cout << sumRemain; //OUTPUT: 10
					return 0; 
				
				 }

(++) Increment operator
	// Increases the value of a variable
		
		#include <iostream>
		using namespace std; 
		
		
		int main() { 
		int x = 0;
			++x; /// (+) operators are used to add one ] 
			cout << x << endl;
			++x;
			cout << x;
			return 0;
		
		 }
				// OUTPUT: 2 	

// You can even implement your (++) operators can even be implemented within the same line as your cout
		#include <iostream>
		using namespace std; 
		
		
		int mainI() { 
		int x = 0; 
			cout << ++x << endl; // OUTPUT: 1 
			cout << ++x << endl; // OUTPUT: 2
			return 0; 
		
		}

(--) Decrement operator
//Decreases the value of a varible by 1 
	#include <iostream>
	using namespace std;
	
	int main() { 
	int x = 2;
		cout << --x << endl; //output: 1 
		cout << --x << endl; //output: 0 
		return 0; 
	 }


C++ Assignment Operator 
 
// assignment operators are used to assign values to variables

int age = 28; 

// in the example above we have used the (=) assignment operator to assign the value of 28(int) to the (age) variable

/* The addition assignment operator (+=) add a value to a variable */ 

int main() { 
int x = 10;
x += 5;  /// ADD the value of 5 to x 
	cout << x; 
	return 0;
 }

// OUTPUT: 15 


 // now the addition assignment is the only one of it's kind. You can also use the following: 
 (-=) Subtraction 
 
 (*=) Multiplication 
 
 (/=) Division 	 
 
 (%=) Modulus assignment ---> after dividing, it provides you with the remaining value 
	#include <iostream>
	using namespace std; 
	
	
	int main() { 
	int x = 10;
	x %= 5;
		cout << x; 
		return 0;
	 }
	
	// OUTPUT: 0
	
(|=) Bitwise OR assignment 
	// each bit in x OR each bit in y
	#include <iostream>
	
	using namespace std; 
	int main() { 
	int x = 5;
	x |= 1;
		cout << x; 
		return 0;
	 }
	
	// OUTPUT: 5
	

(>>=) Bitwise right shift assignment
 
	

(<<=) Bitwise  left shift assignment
	// Moves the specified number of bits to the left and assigns the results to the result. The bit vacated by the operation are filled with zero.

	#include <iostream>
	using namespace std; 
	
	int main() { 
	int x = 1;
	x <<= 5;
		cout << x; 
		return 0;
	 }
	// OUTPUT: 32


(&=) Bitwise AND assigment 

----------------------------------------

C++ Comparison Operators
// comparison operators are used to compare two values
/// NOTE: The return value of a comparison is either TRUE (1) or FALSE (0)


(>) Greater than
#include <iostream>
using namespace std; 

int main() { 
int x = 1;
int y = 4;
	cout << (x > y); 
	return 0;
 }

	// OUTPUT: false(0)


// In the example above we use the GREATER THAN operator (>)

// In the example below we use the LESS THAN operator (<)

(<) Less than
#include <iostream>
using namespace std; 

int main() { 
int x = 1;
int y = 4;
	cout << (x < y); 
	return 0;
 }

// OUTPUT: true (1)


// A list  of comparison operators: 

(==) Equal to
#include <iostream>
using namespace std; 

int main() { 
int x = 8;
int y = 8;
	cout << (x == y); /// 8 is equal to 8
	return 0;
 }

// OUTPUT: true (1)



(!=) Not equal 
#include <iostream>
using namespace std; 

int main() { 
int x = 8;
int y = 18;
	cout << (x != y); // 8 is NOT equal to 18
	return 0;
 }

// OUTPUT: true (1)




(>=) Greater than equal to
#include <iostream>
using namespace std; 

int main() { 
int x = 8;
int y = 18;
	cout << (x >= y);  // 8 is not GREATER than or equal to 18
	return 0;
 }

// OUTPUT: FALSE (0)


(<=) less than equal to
#include <iostream>
using namespace std; 

int main() { 
int x = 2;
int y = 8;
	cout << (x <= y); // 2 is less than/equl to 8
	return 0;
 }

// OUTPUT: true (1)


C++ Logical Operators
// Logical operators are used to determine then logic between variables or values

(&&) Logical and 
		// Returns true if both statemens are true
	#include <iostream>
	using namespace std; 


	int main() { 
	int x = 3 > 1;
	int y = 2 < 21;   
		cout << x && y;  
		return 0;

	// OUTPUT: true (1)

 }



#include <iostream>
using namespace std; 


int main() { 
int x = 3;
int y = 2; 
 cout << (x > 5 && y < 5); // 3(x) is NOT greater than 5 but 2(y) is less than 5  
 return 0;

}

// OUTPUT: false (0)
__________________________________________________________-



(||) Logical or 		
			// Returns true if one of the statements is true
		#include <iostream>
		using namespace std; 
		
		
		int main() { 
		int x = 3 > 1;
		int y = 2 > 22;   
			cout << x || y;  
			return 0;
		
		// OUTPUT: true (1)
		
		 }




		#include <iostream>
		using namespace std; 
		
		
		int main() { 
		int x = 3;
		int y = 2; 
		 cout << (x > 5 || y < 5); // 3(x) is NOT greater than 5 bit 2 is less than 5
		 return 0;
		
		}
		
		// OUTPUT: true (1)


__________________________________________________________





(!) Logical not
	// Reverse the result, returns false if the result is true

#include <iostream>
using namespace std; 


int main() { 
int x = 3;
int y = 2; 
 cout << !(x > 5 || y < 5); //true since 2(y) is less than 5, wiht (!) it's reversed to false
 return 0;

}

// OUTPUT: false (0)























































