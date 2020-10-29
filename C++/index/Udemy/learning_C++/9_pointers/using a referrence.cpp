 
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

int x = 10; 

int &y = x;

if (y == 10){
    cout << "Y is inded a referrenct to x!" << endl;
    cout << "X address: " << &x << endl; // address: 0x7ffeea7c5788
    cout << "Y address: " << &y << endl;// address: 0x7ffeea7c5788
    while (y > 0){
        --y; 
    }
}
else{
    cout << "Do you even reference BRUH!" << endl;
}
cout << "The value of X is: " << x << endl; 

return 0;
}