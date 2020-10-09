
// See ch.7 READ.ME for more details on the code

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

int n,o,rev = 0,r; 

	cout << "Please Enter a Number for N" << endl;
	cin >> n;


	while (n > 0 ){
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}




	cout << "And yor input in reverse is: "<< rev << endl;	

return 0;	
} 