//Finding the Greatest common diviser
//See Chap 7 READ.ME

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

int m, n;

cout << "Enter Two Numbers" << endl; 
cin >> m >> n; 


while (m != n){
	if (m > n){
		m = m - n;
		// cout << "M is " << m << endl;
		// cout << "N is " << n << endl;
	} 
	else if (m < n){
		n = n - m;	
		// cout << "M is " << m << endl;
		// cout << "N is " << n << endl;
	}
}

cout << endl;
cout << "GCD is " << m << endl;


return 0;
} 