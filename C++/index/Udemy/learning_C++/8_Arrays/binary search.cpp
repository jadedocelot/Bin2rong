 // Check CH READ.ME 

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

int arr[10] = {32,4,56,333,12,2,7,54,1,22};
int l = 0, h = 9, key, mid;
//int l = 5, h = 9, key, mid;
//int l = 5, h = 6, key, mid;
//int l = 6, h = 6, key, mid;


cout << "Enter a number for key" << endl;
cin >> key;
 
while (l <= h) 
{
	mid = (l + h)/ 2;

	if (key == arr[mid]){ 
		cout << "Found at: " << mid << endl;
		return 0; // <- This will end the program
	 	else if (key < arr[mid]) h = mid - 1;
	else{
		l = mid + 1; 
	}


 cout << "Not Found" << endl;

return 0;
}



// 32
// Not Found
// 4
// Found at: 1 <--
// 56
// Not Found
// 333
// Not Found
// 12
// Found at: 4 <--
// 2
// Not Found
// 7
// Not Found
// 54
// Found at: 7 <--
// 1
// Not Found
// 22
// Not Found
