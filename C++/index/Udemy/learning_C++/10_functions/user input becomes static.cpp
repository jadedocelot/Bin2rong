

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//template<class ndt>
int &funcOne(int &x){

int static j = x;

	{
		j++;
		cout << j << endl;
	}
	return x;
} 


int main(){

int input;

cout << "Enter a number for x" << endl;
	cin >> input;

funcOne(input);
funcOne(input);
funcOne(input);

return 0;
}