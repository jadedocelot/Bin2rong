
#include<iostream>
#include<cmath>
#include<string>
using namespace std;



// Quadratic Equation
// ax**2 + bx + c = 0

// Formula: 
// roots = -b -/+ srt(b**2 - 4ac) / 2a

// ** POWER of in Python
// Discriment
// d = b**2 - 4 ac 

// Discriment
// if d = 0, real and equal
// if d > 0, real and unequal
// if d < 0, imaginary

int main()
{

float a,b,c,d,r1,r2;

	cout << "Enter A,B, and C: ";
	cin >> a >> b >> c;

d = b * b - 4 * a * c; // Refer to Discriment above

if (d == 0) 
{
	cout << "\nRoots Are Real and Equal" << endl;
	cout << endl << "\t" << (-b/(2*a)) << endl << endl;
}
else if (d > 0)
{
	cout << "Roots Are Real and Unequal";
	cout << endl << (-b + sqrt(d)/(2*a)) << endl;
	cout << endl << (-b - sqrt(d)/(2*a)) << endl;

}
else
{
	cout << "You Imagining Shit My Dude." << endl;
}


return 0;
}


//Example 1:
/*
input:
32 4 54 

d = 4 * 4 - 4 * 32 * 54

so d == -6896

>> You Imagining Shit My Dude. (since d < 0)
*/

// =======================================================

// Example 2
/*
input:
432 543 3

d = 543 * 543 - 4 * 432 * 3

d = 289665

Roots Are Real and Unequal

(-543 + sqrt(289665)/(2*432))
-542.377

(-543 - sqrt(289665)/(2*432)
-543.623

  >> Roots Are Real and Unequal


*/






