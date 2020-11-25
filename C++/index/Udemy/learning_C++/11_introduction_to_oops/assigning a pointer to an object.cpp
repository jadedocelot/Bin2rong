  // See chapter README.md for NOTES
#include <iostream>
using namespace std;


class rectangle
{

public:

	int length; 
	int breadth;
	
	int area()
	{
		return length * breadth;
	}
	
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};


int main()
{

// r is consuming 4 bytes (for length(2 bytes) and perimeters(2 bytes) within rectangle)
// This object is created in stack 
rectangle r;

// Creating a pointer 
rectangle *p;
// assigning the address of r to our p pointer
//p = &r;

// This will put object in HEAP memory
p = new rectangle;

// A pointer called 'q' which has created another object in the heap memory
// Though there is currently no name to said pointer
rectangle *q = new rectangle(); 

// we can now use our pointer to access our class memebers 
// arrow operator or a dereferencing operator 
// This is used to access the memory 
p -> length = 15;
p -> breadth = 10;

// Our pointer will now access the functions within the 'rectangle' class
cout << p -> area() << endl;
cout << p -> perimeter() << endl;

return 0;
}

