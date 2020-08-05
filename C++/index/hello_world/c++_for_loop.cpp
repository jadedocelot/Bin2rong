                                                        C++ For Loop                                                 
// When you know exactly how many times you want to loop through a block of code, use the (for) loop instead of the (while) loop:

for(statement 1; statement 2; statement 3) 

// statement 1: is executed (one time) begfore the execution of code
// statement 2: defines the condition for executing the code block 
// statement 3: is executed (every time) after the code block has been executed 
  
// The example below will print the numbers 0 to 4: 

for (int i = 0; i < 5; I++ ) {
	cout << i << "\n"; 

}

//Example:

#include <iostream>
#include <string>
using namespace std; 

int main() {
for (int i = 0; i < 5 ; i++ ) {
	cout << i << "\n"; 
}

return 0;

}
													       /////Whats what///

// Statement 1: i = 1; // i = 1
// statemet 2: i < 5; // if i is less than 5 
// statement 3: i++; /// This will allow the output to increment (add up 0-5)
// and I think I have  to be the one to say that I want to be one with  
 
													      ///Example Explained//
// Statement 1: sets the variable before the loop starts (i = 0).
// statement 2: defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end..
// statement 3: increase the value (i++) each time the code block in the loop has been executed. (OUTPUT: 0,1,2,3,4,5)   



// The example below will print out in increments of 2


#include <iostream>
using namespace std; 


int main() { 

for (int i = 0; i < 100;i = i + 2) { 
	cout << i << endl;
}

return 0;

}




