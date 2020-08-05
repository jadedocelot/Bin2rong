							C++ Conditions
 
C++ Conditions and IF statements
// C++ supports the usual logical conditions from mathmatics
 1. Less than a < b  
 2. Less than or equal to: a <= b 
 3. Greater than: a > b 
 4. Greater tha or equal to: a >= b 
 5. equal to: a == b  
 6. not equal to; a != b 

// You can use these conditions to perform different actions for different decisions. 
//C++ has the following condition statements: 
 - if : to specify a block of code to be executed, if a specified condition is true
 - else: to specify a block of code to be executed, if the same condition is false 
 - else if: to specify a new condition to test, if the first condition is false 
 - switch: to specify an alternative blocks of code to be executed (WTF!)
							
							 THE if STATEMENT

use the if statement to specify a block of C++ code to be executed if a condition is true.

if (condition) { 
	// block of code to be executed if the condition is true 
} 

Note: That if is in lowercase. uppercase letter (if or IF) will generate an error
/// In the example below we will be using the if condition
/// For all the dinguses out there, this will be included within the int main()  

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

if (20 > 10)  {
 cout << "20 is greater than 10" << endl; // OUTPUT: since 20 is greater


 return 0;

 }

}

// We can also test variables
	// I will explain the process of what is happening here:
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int x = 20; // we have assigned the value of 20 to x
  int y = 45; // we have assigned the value of 45 to y 
  if (y > x) { // in our (if) condition we are asking if y is larger than x
	 cout << "y is greater than x" << endl; // if so then it will print out "y is greater than x" 
     return 0;
  }

}

				                  C++ Else

use the else statement to specify a block of code to be executed if the condition is false 
 

#include <iostream> 
#include <string> 
#include <cmath> 
using namespace std; 

int main(){
int x; 
int y;

if(condition){
// block of code to be executed if the condition is true
} else {
// block of code to be executed if the condition is false 	

return 0; 
}

} 
//
///
/////
////////
//  //// 
///  //// 
//// /// 
////  ///
////  ///
//   //// 
//  ////
// ///
/////
//
//
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
int x = 55;
int y = 45;

if(x < y){ // IF x is less than Y (TRUE) -- CONDITION
 cout << "x is less than y" << endl; //PRINT THIS OUT
  } else { // ELSE if it is not then (FALSE) -- STATEMENT 
      cout << "x is greater than y" << endl; // Print this out 
	return 0;
  }
}

/// NOTE: Learn to present clean code, cause I feel like your shit is sloppy BB 




						  Else if!!! 


The else if statement 

USE the else if statement to specify a new condition if the first condition is false 

if(condition) {
 // block of code to be executed if conditional is TRUE 
} else if (condition 2) {
 // block of code to be executed if the conditional is false and condition 2 is TRUE 
} else {
 // block of code to be executed if the conditional is false and condition 2 is FALSE	
} 

//// Below is a solid EXAMPLE OF ALL THREE if, esle if, else being used: 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
int time = 22;
if (time < 10) {  // Turu 
        cout << "Time is less than 10";
 } else if (time < 20) {
        cout << "time is less than 20";
 } else {
        cout << "Youre a fucking idiot sometimes." << endl;
 }

return 0;

}

                                GUESSING GAME I THUNKED UP 
/// we have created a lil guessing game using all 3 major conditions (if, else, else if)
#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

int main() {
int x; 
int guess = 23; 

cout << "Please enter in your guess here: "; 
cin >> x;

if (x == guess) {
  cout << "You have guessed the correct number, congrats! You're still an assholeππππππππππππππππππππππππππππππππp\nπππππππππππππππππ\t\tøøøøøøøøøøøøøønπππππππππππ\nππππππππππ\nπππππππππ" << endl;
    } else if (x < guess) {
      cout << "Your guess is too low, please try again" << endl;
    } else {
      cout << "Your guess is too high, please try again" << endl; 
    }

return 0;
}


                                                                                          C++ Short Hand if else 


// Short Hand if.....else (terneary operator)
// Thee are short-hand if atomic_fetch_and( ) else, which is known as the (ternary operator), because it consists of 3 operators
// It can be used to replace multiple lines of code with a single line, oftern used to replace simple if else statements; 

variable = (condition) ? expressionTrue:expressionFalse; 




// Instead of typing this out: 

#include <iostream>
#include <string>
#include <cmath>
using namespace std; 


int main() {
int time = 20; 
  if (time < 24) {
    cout << "Good Day" << endl;
  } else {
    cout << "Good Evening";

  }

return 0;

 } 


// You can simply write: 


int time = 20; 

string result = (time < 18) ? "Good Day" : "Good Evening";
cout << result; 

