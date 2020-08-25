
// Dynamic Memory Allocation (DMA)

#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
int size;
int *pntr;

	cout << "Enter the number of values you'd like to store (size of array)" << endl;
	cin >> size;

	pntr = new int[size]; 
	cout << "Enter values to be stored in the array"<< endl;

	for(int i=0;i<size;i++){
		cin >> pntr[i];

	}
	cout << "Values in the array are:" << endl;
	for(int i=0;i<size;i++){
		cout <<pntr[i]<<endl;

	}

 cout << pntr << endl;

return 0;
} 
