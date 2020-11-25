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


rectangle r1,r2;
int x,y;

cout << "Please enter the dimensions: " << endl;
cin >> x >> y;

r2.length = x;
r2.breadth = y;

r1.length = 10;
r1.breadth = 5;

cout << "The area of R1 is: " << r1.area() << endl; 
cout << "The parimeter of R1 is: " << r1.perimeter() << endl; 

cout << "The area of R2 is: " << r2.area() << endl; 
cout << "The parimeter of R2 is: " << r2.perimeter() << endl; 


return 0;
}
