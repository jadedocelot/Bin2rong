#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,1,54,3,23,21,212,53,44,7,876}; 

	for (int dig_net = 0;dig_net < 15;dig_net++) { 
		chum_bucket = chum_bucket + arr[dig_net];	

	}

cout << "The largest number in your array is: " << chum_bucket << endl;


return 0;
}