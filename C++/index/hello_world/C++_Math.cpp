															 C++ Math 
//C++ has many functions that allow you to perform mathmatical tasks on numbers. 

Max and min 
// The max(x, y)function can be used to find the highest value of x and y;

#include <iostream>
#include <string>
using namespace std;

int main() { 
	cout << max(5,10); // OUTPUT: 10 
	return 0;

 }

// And the min(x,y) funtion can be used to find the lowest value of x and y;

#include <iostream>
#include <string>
using namespace std;

int main() { 
	cout << min(5,2);
	return 0;

 }


C++ <cmath> Header
// Other functions, such as SQRT(square root)
// ROUND (rounds a number)
// LOG (natural longarithm)
//// Can be found in the <math> HEADER

#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

int main() { 
 cout << sqrt(64); // The square root of 64 is 8
 cout << round(2.6); // When rounding 2.6 you end up with 3
 cout << log(10); // output: 2.30259
 return 0;
}


			 							Other Math Functions
// A list other popular math functions (from the <cmath> library) can be found in the table below
//cout << abs(12.3); //Returns the absolute value of -- OUTPUT: 10
//cout << acos(120); // Returns the arccosine of x, in radians
//cout << asin(23); // Returns the arcsine of x, in radians
//cout << cbrt(23) << endl; // Returns the cube root of 23 (2.8347)
//cout << ceil(55.3453) << endl; // Returns the vaulue of 55.3453 (56) rounded to the nearest INT
//cout << cos(34.233) << endl;//Retunrs the coseine of 34.233 (-0.947804) in radians
//cout << cosh(23.324) << endl; // Returns the hyperbolic cosine of 23.324 (6.73681e+09), in radians
//cout << exp(5) << endl;//Returns the value of E
//cout << expm1(5) << endl;//Returns ex - 1 -- 5 (147.413)
//cout << fabs(25.43) << endl;//Returns the absolute value of a floating x
//cout << fdim(x,y) << endl; // Returns the posistive preference between x and y
//cout << floor(x) << endl; // Returns the value of x rounded down to its nearest int
//cout << hypot(x,y) << endl;// returns SQRT (x2 + y2) (I believe this is to the power) without intermediate overflow or underflow
//cout << fma(x,y,z) << endl; // Returns X*y+z without losing precision
//cout << fmax(x,y) << endl; // Returns the highest value of a floating x and y
//cout << fmin(x,y) << endl; // Returns the lowest value of a floating x and y
//cout << fmod(x,y) // returns the floating point of the remainder of x/y
//cout << pow(x,y) << endl; // Returns tge value of x to the power of y
//cout << sin(x) << endl; // Returns sine of x (x is in radians)
//cout << sinh(x) << endl; // Returns hyperbolic sine of double value
//cout << tan(x) << end; // Returns the tangent of an angle2) (I believe this is to the power) without intermediate overflow or underflow
//cout << fma(x,y,z) << endl; // Returns X*y+z without losing precision
//cout << fmax(x,y) << endl; // Returns the highest value of a floating x and y
//cout << fmin(x,y) << endl; // Returns the lowest value of a floating x and y
//cout << fmod(x,y) // returns the floating point of the remainder of x/y
//cout << pow(x,y) << endl; // Returns tge value of x to the power of y
//cout << sin(x) << endl; // Returns sine of x (x is in radians)
//cout << sinh(x) << endl; // Returns hyperbolic sine of double value
//cout << tan(x) << end; // Returns the tangent of an angle
//cout << tanh(x) << endl: // Returns the hyperbolic tangent of a double value
