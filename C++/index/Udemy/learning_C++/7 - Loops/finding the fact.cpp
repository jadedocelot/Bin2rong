
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

int i,n,fact;
	
	cout << "Enter a number for N:" << endl;
	cin >> n;

for (i = 1; i <= n;i++)
{
	if (n%i==0){	
		cout << i << endl;

	}
}
/* 
	while(i <= n){
		if (n % i == 0)
		{
			cout << i << endl;
			i++;
		}
		else
		{
			i++; 
		} 
	}
		cout << "Thes Above Integers Are Your Factorså" << endl;
*/ 
return 0;	
}


