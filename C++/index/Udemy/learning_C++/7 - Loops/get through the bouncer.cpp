// Need to work on this one a bit more 
// will really only work if x is lest than 34


#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {

int x;
int z;

cout << "Enter a Number For x: " << endl; 
cin >> x;

do{ 
	x++; 
	//cout << x << endl;
} while (x <= 400);(z = x * 12);

if (z < 10000){
	cout << "\nGuest # "<< z << ". Welcome to Z\n";
}
else if (z > 10000) {
	cout << "\nGuest # " << z << " Sorry, we have reached full capacity. Please come back again next week.";
}  

return 0;	
}

//while (x <= 100);(z = z * 12);