
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// % (divisible) remainder after DIVISION

int main(){

int year;

cout << "Enter a Year: \n";
cin >> year;


if (year % 4 == 0)// 1600 %(remainder)4 = 0
{ 
	if (year % 100 == 0)
	{ 
		if (year % 400 == 0)
			cout << year << " A Leap Year Indeed.";
		else
			cout << year << " Is Not a Leap Year.";
	}
	else 
		cout << year << " Is a Leap Year.";
}
else 
	cout << year << " Is Not a Leap Year.";


return 0;
}