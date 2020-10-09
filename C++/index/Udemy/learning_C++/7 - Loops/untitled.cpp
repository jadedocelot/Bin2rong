// Looking for 

#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){ 

int sum = 0, n;

cout << "Enter a Number For N: " << endl;
cin >> n;

for (int i = 1; i <= n; i++){
	sum = sum + i;
	//cout << sum << " + " << i << " = " << sum << endl;
}

cout << "Sum of first "<<n<<" Natural number is "<<sum<<endl;

return 0;
} 