#include <iostream>
using namespace std;
// big_boi is our function
int big_boi(int a,int b,int c) {
    if (a > b && a > c){
        return a;
    }
    else if (b > c){
        return b;
    } 
    else {
        return c;
    }
}

int main(){

int x,y,z;
int (*fp)(int,int,int);
fp = big_boi; 

cout << "Enter a number for x " << endl; 
cin >> x;
cout << "Enter a number for y " << endl;
cin >> y;
cout << "Enter a number for z " << endl;
cin >> z;

cout << "And the one with the biggest dick in the room is: " << (fp)(x,y,z) << endl;

return 0;
}