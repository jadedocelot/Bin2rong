// See chapter READ.ME for more details 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int arr[10] = {23,42,34,43,2,1,324,32,7};
int x = arr[3];


cout << "A array: " << arr << endl;
cout << "And your pick is: " << x << endl;

for (int i = 0; i < 5;i++){ // This will print out the array
	cout << arr[i] << endl;
}


return 0;
}