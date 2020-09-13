#include <iostream>	
#include <string>
#include <cmath>
using namespace std;


int main(){

int age;	

	cout << "Please enter you age to check for eligability \n(Please note that this offer only pertains to children between the ages of 4-11 and 50+):\n"; 
	cin >> age; 

		if (age<=11 || age>50 ){
			// Will print out if "age" is between 0-11 and 50+
			cout<<"You Are Eligable For The Special Offer."; 
		}
		else{
			// Will print out if "age" is between 12-
			cout<<"Sorry Bish, You Old..";
		}

 return 0;
}
