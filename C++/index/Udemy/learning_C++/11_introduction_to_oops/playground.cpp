#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class rectangle
			{	
			private:
				int length;
				int breadth;

			public:
				rectangle(int l,int b)
				{
					length = l;
					breadth = b;

				}

				int area()
				{
					return length * breadth;
				}   

				// "Prototype of a function"
				int perimeter();
			}; 
				
				// Allaboration with SCOPE RESOLUTION
				int rectangle::perimeter()
				{
					return 2 * (length + breadth);
				}

int main(){


rectangle r(10,5);

cout << r.area() << endl;
cout << r.perimeter() << endl;

return 0;
}