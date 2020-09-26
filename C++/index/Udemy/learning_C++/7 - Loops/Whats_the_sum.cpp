#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

int main(){
int sum,n,i;

i = 1;
sum = 0; 

	cout << "Enter a Number For N\n";
	cin >> n; 

while (i <= n){ 	
	sum = sum + i;
	i++;
} 

cout << "And Your Sum Is: " << sum << endl;


return 0;
}



