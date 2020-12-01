#include <ctime>
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
//#include<stdio>
#include<time.h>
using namespace std;

class myDoors{
private:
// doors are pivate 
// Doors may change but doors may not be controlled  
// v2 in the range 1 to 100
int masterNum = rand() % 100 + 1; 
int doorOne;
int doorTwo;
int doorThree;

public:

// This can be where conditions come into play 

void doorRotation(int x)
{
 	if(masterNum => 10){


	}
} 

int theNum()
{
	cout << masterNum << endl;
}



};


int main(){	

srand( time(NULL) );

myDoors d1;

	d1.theNum();

return 0;
}
