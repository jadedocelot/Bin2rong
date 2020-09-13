#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
float x,y,z;
cout << "Enter 2 Numbers to Divide (Though there is one way to fuck up):"<< endl;
cin >> x >> y;

if (x == 0)
{
	 cout << "There was only one way to fuck this up, and that was to divide by zero" << endl;
}
else
{
	z = x/y;
	cout << "Your sum is " << z << endl;
}

return 0;
}