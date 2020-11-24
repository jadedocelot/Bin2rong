
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void swap(int a, int b) // FORMAL PARAMETERS
{
    int temp;
    temp = a; // temp = 10
    a = b; // a = 20
    b = temp; // b = 10
    cout << "This is within the temp function: ";
    cout << a << " " << b << endl; 
    // OUTPUT: 20 10

}

int main(){

int x = 10,y = 20;

swap(x,y);

cout << x << " " << y << endl;

}


// See README.MD for NOTES on this code



