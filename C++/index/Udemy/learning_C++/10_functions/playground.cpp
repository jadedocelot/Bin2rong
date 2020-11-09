#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// Actual parameters are passed as reference
// for the Formal Parameters we call teh address (&)
// This method is similar to CALL BY ADDRESS for it actually modifires the actual parameters
// for a and b are now references of x and y
void swap(int &a, int &b) // FORMAL PARAMETERS
{
    int temp;
    temp = a; // temp = 10
    a = b; // a = 20
    b = temp; // b = 10
    //cout << a << " " << b << endl; 
    // OUTPUT: 20 10

}

int main(){ 

int x = 10,y = 20;

swap(x,y);

cout << x << " " << y << endl;

}


// See README.MD for NOTES on this code