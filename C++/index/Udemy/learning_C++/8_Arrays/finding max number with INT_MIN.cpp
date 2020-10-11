#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int dig_net;
int chum_bucket = INT_MIN;
int dig_bucket = 0;

int arr[] = {-32,-422,-43,-246,-2,-900,-54,-3,-23,-21,-212,-53,-44,-7}; 

	for (dig_net = 0;dig_net < 14;dig_net++) {
		if (arr[dig_net] > chum_bucket){
			chum_bucket = arr[dig_net];	
		}

	}

cout << "The max element within your array is: " << chum_bucket << endl;

return 0;
}

// Say the array above consisted of negative integers then locating the max
// number with zero ('dig_net') will be somewhat impossible since 0 is greater
// than all negatitve numbers, this is where;
// dig_net = INT_MIN comes in hady


// In the example below we try to locate the smallest number within the array 
// which is -900
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int dig_net;
int chum_bucket = INT_MAX;
int dig_bucket = 0;

int arr[] = {-32,-422,-43,-246,-2,-900,-54,-3,-23,-21,-212,-53,-44,-7}; 

	for (dig_net = 0;dig_net < 14;dig_net++) {
		if (arr[dig_net] < chum_bucket){
			chum_bucket = arr[dig_net];	
		}
	}

cout << "The SMALLEST element within your array is: " << chum_bucket << endl;

return 0;
}