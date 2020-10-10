
/// The syntax goes through an int type array and adds up all the numbers larger than 100

#include <iostream>
#include <string>
#include <cmath>
#include <array>
using namespace std;

int main() {

int dig_net;
int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,1,54,3,23,21,212,53,44,7,876}; 

	for (dig_net = 0;dig_net < 15;dig_net++) {
		chum_bucket = chum_bucket + arr[dig_net];	
			if (arr[dig_net] > 100){
				dig_bucket = dig_bucket + arr[dig_net];	
				cout << "\nYou just Caught: " << arr[dig_net] << endl; 			
			}
	}

cout << "\n-------------------------------------------------"<< endl; 
cout << "\nTodays catch leaves you with the grand total of $" << dig_bucket << endl << "\n"; 

return 0;
}


/*

You just Caught: 422

You just Caught: 246

You just Caught: 212

You just Caught: 876

-------------------------------------------------

Todays catch leaves you with the grand total of $1756

*/


/// END RESULTS SHOULT TOTAL OUT TO 1756








å/////// PLAYGROUND

/*
for (dig_net = 0;dig_net < 15; dig_net++){
	cout << arr[dig_net] << endl;	
	while (arr[dig_net] > 100) {
		dig_bucket = arr[dig_bucket] + dig_bucket;
	}
}



	for (dig_net = 0;arr[dig_net] > 100; dig_net++){
		dig_bucket = dig_bucket + arr[dig_net];
		cout << "Todays catch leaves you with the grand total of $" << dig_bucket << endl; 
		break;
		cout << arr[dig_net] << endl;
		if (arr[dig_net > 100]){
			dig_bucket = dig_bucket + arr[dig_net];
		}



	dig_net = dig_net + 1;
	if (arr[dig_net] > 100){
		dig_bucket = dig_bucket + arr[dig_net];	
	}
}

cout << "Todays catch leaves you with the grand total of $" << chum_bucket << endl; 
*/