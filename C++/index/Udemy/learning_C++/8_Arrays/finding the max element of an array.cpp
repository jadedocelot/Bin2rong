#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int dig_net;
int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,900,54,3,23,21,212,53,44,7}; 

	for (dig_net = 0;dig_net < 14;dig_net++) {
		if (arr[dig_net] > chum_bucket){
			chum_bucket = arr[dig_net];	
		}

	}

cout << "The max element within your array is: " << chum_bucket << endl;


return 0;
}