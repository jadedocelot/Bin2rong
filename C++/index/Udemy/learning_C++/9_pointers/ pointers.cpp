
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){

int *p= new int[20];
cout << "The size of p is: " << sizeof p << endl;

p = nullptr;
p=new int[40];

cout << "The NEW size of p is: " << sizeof p << endl;



int size;

	cout << "Please enter a number to declare the size of the array: ";
	cin >> size;

 int num_list[size]; // created in STACK memory

 cout << sizeof num_list << endl;
// The output would be 80 bytes for the array above (size = 20) 
// sizeof num_list will vary depending on the int entered in for 'size'

// Now once an array is created in a programn it cannot be modified
// In order to modify an array we re going to need a dynamic array in heap	

int *p=new int[size];


cout << "Enter new size ";
cin >> size;

p=new int[size];

 cout << sizeof num_list << endl;

return 0;
}