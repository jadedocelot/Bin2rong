 										//// C++ Break and Continue

// You have already seen the (break) statement used in an earlier chapter of this tutorial. It was used to "jump out" of a (switch) statement. 
// The (break) statment can also be used to jump out of a loop
// This example jumps out of the loop when (i) is equal to 4:

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() { 
i = 0; // we have entered the value of 0 into 1

for (int i = 0; i < 10; i++) {   // There are 3 
	if (i == 4) { // 
		break; // We are using this (break) to jump outside of the statement
 }

cout << i << "\n"; 

return 0;
 
}
 

// In the example below we use a (break) statement which will end the the (for) loop once the block of code reaches 15. 
// Though if you look at the statements within the (for) loop, youll see that we have included the a 2 count increment process which will have the count skip 15, which means the break statement will never run


#include <iostream>
#include <string>
#include <cmath>
using namespace std; 



int main() {

for (int i = 0; i < 20; i = i + 2 ) { //i = i + 2: will count in increments of 2
	if (i == 15) { 
		break; // Will go into effect  once 15 is reached 


		}	

cout << i << endl;


	} 

return 0;

}




// The example below reaally shows our (break) in action! We will once I reaches 18 then our (for) loop will BREAK and move on to the loop and proceed to the next statment/function. 
// In this case the next statements is the (switch) statement



#include <iostream>
#include <string>
#include <cmath>
using namespace std; 



int main() {

for (int i = 0; i < 20; i = i + 2 ) { //i = i + 2: will count in increments of 2
	if (i == 20) { 
		break; // Will go into effect  once 15 is reached 
	}	

cout << i << endl; 


if (i == 18) {
	switch(i) {
	break;
case 18:
	cout << "our break worked!";
	break;
case 19:
	cout << "It didnt work so it worked";

			}


		}

	} 


return 0;

}






																C++ Continue  

// The (continue) statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop,
 
#include <iostream>
#include <string>
#include <cmath>
using namespace std; 



int main() {

for (int i = 0; i < 22; i = i + 2 ) { //i = i + 2: will count in increments of 2
	if (i == 18) {
		continue;
 }	
		
if (i == 20) { 
		break; // Will go into effect  once 15 is reached 
		}	
		cout << i << endl; 

if (i == 18) {
	switch(i) {
	break;
case 18:
	cout << "our break worked!" << endl;
	break;
case 19:
	cout << "It didnt work so it worked";

		}


	}

} 

return 0;

}

// In the example above, we use the (continue) statement to skip 18 which then prevents the loop from breaking and moving on to the (switch) statement 


															Break and Continue in While Loop! 

														________________________________________

// You can use (break) and (continue) in while loops:


#include <iostream>
#include <string>
using namespace std;

int main() {
int x = 0; 

while (x < 10) {
	cout << x << "\n"; 
	x++; 

	if (x == 4){
		break;
		}

	}

cout << "You lose bitch!" << endl; 
return 0;
}

// We can also use the continue statement within a (while) 






#include <iostream>
#include <string>
using namespace std;

int main() {
int x = 0; 

while (x < 11) {
	cout << x << "\n"; 
	x++; 
if (x == 4) {
	continue;

	}

	if (x == 4){
		break;
		}

	}

cout << "_____________________ " << endl;
cout << " " << endl;
cout << "You lose bitch!" << endl; 
cout << " " << endl;
cout << "_____________________ " << endl;
return 0;
}

