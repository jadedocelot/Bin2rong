
// The syntax below will show us element position within an array as well as
// the element itself

#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main() {

int key;
int arr[] = {32,4356,43,23,55,34,2,335,43,67,86,4,5};


cout << "Enter a number for key: " << endl;
cin >> key;

for (int i = 0;i < 15;i++) {
	if(key == arr[i]){
		cout << "The number " <<  arr[i]  << ":"<< endl; 
		cout << "Is in position " << i << " of the array." << endl;
	  return 0;
	} 
}

return 0;
} 