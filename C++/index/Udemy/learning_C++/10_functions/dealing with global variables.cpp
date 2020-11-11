#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// X will be a global variable
//Global variables reside outside of the the main and sub functions(They reside outside of all the functions)
// global variables can be accessed by any funcntion
// As long as the program is running it will always be there in the memory
// global variables arent stored in the STACK or HEAP memory  but in the CODE memory (SUB section of code section)
int x = 0;

// local variables withing subfuncntions

// Sub function
// "func" function goes into sub section of stack memory
int func(){
	// Local variable
	int a =10;
	x = x + a;
	for (int i = 0; i < 10;i++){
		x = (x + i) * 5; 
		//cout << "The value of x within our sub function: " << x << endl;
 	}
 	return x;
}

//main function
int main(){

func();

int sum = x + 5;
cout << "And the nex value of x is: " << sum << endl; 

return 0;	
} 



// New value of sum should 100708000
// So theres no need to create a poniter for x since it is a global variable