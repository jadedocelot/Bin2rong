#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class rectangle
{
private:
	// Data Members are not private and cannot be accessed from the user
	int length; 
	int breadth;

public:
// Functions are now made public

	// Here we create a void function called 'setLeng'
	// which takes 1 int parameter called 'l' 
	void setLeng(int l)
	{	
		// here length will take in an argument
		if(l >= 10)
		{
			length = l;
		}
		else if(l < 10)
		{
			cout << "You suck!" << endl;
		}	
	}
	// Here we create a void function called 'setLeng'
	// which takes 1 int parameter called 'l' 
	void setBread(int b)
	{	
		// here length will take in an argument
		breadth = b;
	}
	// All we  want to do with the get__() functions below is return the value 
	int getLeng()
	{
		return length;
	}

	int getBread()
	{
		return breadth; 
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}
}; 



int main(){

// length and breadth can no longer be initialized from main() func
rectangle r;

// Now Avoiding
// r. lengths = 10;

// Now implementing 
// Instead of initializing we are passing in an argument
r.setLeng(8);
r.setBread(10);


	//cout << r.perimeter() << endl;


return 0;	
}

