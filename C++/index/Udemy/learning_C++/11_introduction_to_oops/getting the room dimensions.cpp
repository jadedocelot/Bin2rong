
#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

class roomDim
{
private:
	
	int breadth;
	int length;

public:

	void setLeng(int l)
	{
		if(l <= 0)
		{
		 	length = 10;
		 	cout << endl << "An incorrect number has been entered. 10 has been assigned to your length." << endl; 
		}
		else
		{
			length = l;
		}
	}
	void setBread(int b)
	{
		if(b <= 0)
		{
		 	breadth = 10;
		 	cout << endl <<"An incorrect number has been entered. 10 has been assigned to your breadth." << endl; 
		}
		else
		{
			breadth = b;
		}
	}
	int getLeng()
	{
		return length;
	}
	int getBread()	
	{
		return breadth;
	}
	int roomSum()
	{
		return 2 * (length + breadth);
	}
}; 	



int main(){

int l,b;
roomDim r1;

	cout <<"Please enter the length of the room" <<endl;
		cin >>  l;
	cout <<"Please enter the breadth of the room" <<endl;
		cin >> b;

r1.setLeng(l);
r1.setBread(b);

	cout << endl << "And the **** of your room is: " << r1.roomSum() << endl;


return 0;
}; 