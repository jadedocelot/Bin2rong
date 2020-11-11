#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int func(int &a)
{
	a = a + 1;

	if (a > 10){
		a = a - 20;
	}
	else{
		return 0;
	}

 return 0;
}

int main()
{	
	int x;

	cout <<  "What is your number?" << endl;
	cin >> x ;

func(x);

 	cout << "This address belongs to x: " << &x << endl;
	cout << x << endl;

	if( x < 1) {
		cout << "You are a cunt!" << endl; 
	} 

}
