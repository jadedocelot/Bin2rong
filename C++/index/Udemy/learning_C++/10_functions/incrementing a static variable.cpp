

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// 'v' is a global variable
//int v = 3 ;

void func()
{
	// Static variable 
	// static is similar to global, only difference is that 
	// global can be accessed through any function
	// static can only be be accessed through function it was called through
		// The scope of a static variable is only limited to this function
	int static v = 3;
	// local variable for func function
	int a = 5;
	v--;
	//v++;
	cout << a << " " << v << endl;
}


int main()
{
	func();
	func();
	func();

return 0;
}

