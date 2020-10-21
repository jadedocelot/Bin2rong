#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

int main(){

int x[100]; 
float avg = 0.0, sum = 0.0,elements;

cout << "Enter the number of elements for your x array: " << endl;
cin >> elements;

for (int i = 0;i < elements;i++){
	cout << i + 1<<".Number for x: " << endl;
	cin >> x[i]; 
}

for (int i = 0;i < elements;i++){
	sum += x[i];
}

avg = sum / elements;

cout << endl;

cout << "The sum of your x array is: " << sum << endl;
cout << "The average of your x array is: " << avg << endl;
cout << endl << "----------------------------" << endl;

for (int i = 0; i < elements;i++){
	cout << x[i] << endl;
}


return 0;
} 

/// We need to get the sum of the array and then get the average by getting
// the qty of elements and dividing by the array




//OUTPUT:Enter the number of elements for your x array:
//INPUT: 6
//OUTPUT:1.Number for x:
//INPUT:54
//OUTPUT:2.Number for x:
//INPUT:23
//OUTPUT:3.Number for x:
//INPUT:1
//OUTPUT:4.Number for x:
//INPUT:33
//OUTPUT:5.Number for x:
//INPUT:2
//OUTPUT:6.Number for x:
//INPUT:89

//OUTPUT: The sum of your x array is: 202
//OUTPUT: The average of your x array is: 33.6667

//OUTPUT:
//----------------------------
//54
//23
//1
//33
//2
//89