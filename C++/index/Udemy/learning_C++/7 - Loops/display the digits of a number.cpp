

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

int n,r;

cout << "Enter a Number For n" << endl;
cin >> n;


while (n > 0){
	r = n % 10;
	n = n / 10;
	cout << r << endl;

}


return 0;
} 