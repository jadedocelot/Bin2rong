
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
	roomDim(int l,int b)
	{
		length = l;
		breadth = b;
	}

	roomDim(roomDim &r)
	{
		length = r.length;
		breadth = r.breadth;	
	}

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


//Parameterized Constructor
roomDim r1(15,10);

// Copied constructor
// This will copy the values of r1 though will as its own(new) object
roomDim r2(r1);  



//int l,b;

	//cout <<"Please enter the length of the room" <<endl;
		//cin >>  l;
	//cout <<"Please enter the breadth of the room" <<endl;
		//cin >> b;

// Constructor

//r1.setLeng(l);
//r1.setBread(b);

	//cout << endl << "And the **** of your room is: " << r1.roomSum() << endl;
	cout << endl << "And the **** of your room is: " << r2.roomSum() << endl;


return 0;
}; 