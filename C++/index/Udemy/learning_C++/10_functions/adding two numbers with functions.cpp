#include<string>
#include<cmath>
#include<iostream>
using namespace std;


int add_num(int x,int y){
    return x + y;
} 

int main(){

int x,y;
int(*fp)(int,int);
fp = add_num;

cout << "Please enter a number for x" << endl;
    cin >> x;
cout << "Please enter a number for y" << endl;
    cin >> y;

cout << "The sum of x and y is: " << (*fp)(x,y) << endl;

return 0;
}