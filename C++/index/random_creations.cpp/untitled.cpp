// untitled.cpp


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class myClass{

// Since an access specifier was not assigned to this class, by default it will be teamed with (private) specifier 
	
string color;
string brand; 
string year;

	myClass(string x, string y, string z){
		color = x;
		brand = y;
		year = z;
	}
} ;
