

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

int sum = 0,m,n,r;


cout << "Enter a Number For N" << endl;
cin >> n;

m = n;

while (n > 0){
	r = n % 10;
	cout << r << endl;
	n = n / 10;
	cout << n << endl;
	sum = sum + (r * r * r);
	cout << sum << endl;
}

if(sum == m){

	cout << "Armstrong" << endl;
}
else{ 

	cout << "Not Armstrong" << endl;
}

return 0;
} 