#include <iostream>
using namespace std;

int func(int n){

if (n <= 1)
	return 1;
else
	return n * func(n-1);

}


int main(){

int num;

cout << "Enter a number:" << endl;
cin >> num;

cout <<  "Factorial of entered number: " << f(num) << endl;


return 0;
}