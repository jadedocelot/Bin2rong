#include<iostream>
#include<string>
#include<cmath>
using namespace std; 
// This function will return a reference
// As you can see the parameter will take in a
// So x of 'fun' will be referencing the x of MAIN func
int &fun(int &x){
return x;

}

int main(){

int x = 10;
fun(x);

cout << "x address of 'main' is: " << &x << endl; 

return 0; 
}