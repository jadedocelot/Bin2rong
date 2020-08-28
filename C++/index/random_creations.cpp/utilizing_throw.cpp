#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
try {
int age = 15;
if (age > 18) {
	cout << "Access granted - you are old enough";
	} else {
		throw 202;
	} 	
}
catch (int myNum) {
	cout << "Access denied - You must be at least 18 years old. \n\n";
	cout << "Error number:" << myNum << endl;
}
return 0;
}


/// The bottom example uses (...) inside the catch block. This can used when the user does not 
/*
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
try {
int age = 15;
if (age > 18) {
	cout << "Access granted - you are old enough";
	} else {
		throw 202;
	} 	
}
catch (...) { // Seeing as there might be a time which we do not know the data type, we can always use (...)
	cout << "Access denied - You must be at least 18 years old. \n\n";
}
return 0;
}
*/