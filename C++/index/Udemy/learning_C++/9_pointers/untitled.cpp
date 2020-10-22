#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
int c = 32;
int x = 10;
int *p;
p = &x;


cout << x << endl;
cout << &x << endl; 
cout << p << endl;
cout << &p << endl;
cout << *p << endl;


return 0;
}