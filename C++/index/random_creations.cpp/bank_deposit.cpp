///// Playground

/// The bottom example presents a simple simmulation of depositing mone into a bank account
// Again, VERY SIMPLE


#include <iostream>
using namespace std; 


int main() { 
int x; 
	cout << "How much would like to deposit into your savings account? Your current balance is $10:"; 
	cin >> x;
	int y = 10 + x;  
	cout << "Your new balance is:" << "$" << y << endl; 
	return 0;
 }
