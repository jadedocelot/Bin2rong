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

rectangle r;
rectangle *p;
p = new rectangle;

rectangle *q = new rectangle(); 

p -> length = 15;
p -> breadth = 10;

cout << p -> area() << endl;
cout << p -> perimeter() << endl;

return 0;
}

