					C++ Booleans


// A boolean is something that outputs TRUE or FALSE......Am I right or am I wrong? To no surprise you could use booleans as an ON or off trigger. 

// very often in programming you will only need one or two data types that can only have one or two values like: 	
 1. YES/NO
 2. ON/OFF
 3. TRUE/FALSE 

// For this, C++ has a bool data type, which can take the values TRUE (1) or FALSE (0) 

// Remeber that TRUE = 1 bit and FALSE = 0 bit 

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
bool isCodingFun = false; // OUTPUT: 0
bool isCodingTasty = true; //OUTPUT: 1
        cout << isCodingFun << endl;
        cout << isCodingTasty << endl;
        return 0;

 }


					    BOOLEAN VALUES


// It is more common to return boolean values from the boolean exrpressions
// A boolean expression in C++ expression that returns a boolean value: 1 (true) or 0 (false)

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
int x = 10;
int y = 9;
        cout << (x > y) << endl; // OUTPUT: 1 (but I want true!) --- Because 10 is greater than 9....DUH 
        return 0;


}

// You can use a comparison operator, such as the greater than (>) operator to find out if an expression (or a variable) is true. 
#include <iostream>// real quick this is to search C++ standard library
#include <string> //  This will go through C++ STRING library
#include <cmath> // and this will go through the C++ math library?
using namespace std; 

//// In the example below we are using the equal to (==) operator to see if x (20) is equal to 50

int main() {
int x = 20;
        cout << (x == 50) << endl;
        return 0;

// This output should give us 0, which indicates False
} 


// Testing this out 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
bool x = 0;
bool y = 1;
        cout << x << endl;
        cout << y << endl;
        return 0;
         }



