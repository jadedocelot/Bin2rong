
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
## In order to pass in an ADDRESS as an argument into a function, we need to make sure  the parameters of said function are POINTERS
## Address pf actual parameters are passed
## The parameters of the 'swap' function must be POINTERS 
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
## temp = 200 (x address)
    *a = *b;
## a = 210 (y address)
    *b = temp;
## b = 200 (x address)

    cout << a << " " << b << endl;

## This function is now accessing the variables of main function through the pointers
## THE POWER OF POINTERS!
}

int main(){

int x = 10, y = 20;

##  x addrees = 200 
## y address = 210

swap(x,y);
## We will pass the addesses of x and y to 'swap' function
cout << x << " " << y << endl;

return 0;
}


// See CHAPTER README for notes on code