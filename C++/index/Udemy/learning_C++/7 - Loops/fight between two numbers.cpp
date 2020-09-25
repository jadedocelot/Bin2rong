
#include<iostream>
#include<string>
#include<cmath>
using namespace std;



int main(){

int x,z;

cout << "Please Enter in a Number for X:\n";
cin >> x;
cout << "Please Enter in a Number for X:\n";
cin >> z;

if (x > z){
	while(z <= x){
		cout << "\n" << z << " <-- Z" << endl;
		cout << "\n" << x << " <-- X" << endl;
		z++;
	} 
cout << "___________________________________________________\n" << endl;	
cout << "Z Was Trailing Behind X But has finally Caught Up.\n" << endl;
}

else if (x < z) {
	while(x <= z){
		x = x + 1;
		cout << "\n" << x << " <-- X" << endl;
		cout << "\n" << z << " <-- Z" << endl;
		x++;
	} 
cout << "___________________________________________________\n" << endl;
cout << "X Was Trailing Behind Z But has finally Caught Up.\n" << endl;
} 

return 0;
}


