
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int add(int x,int y){
    return x + y;
}

int add(int x,int y,int z){
    return x + y + z;
}

int main(){
int a = 10,b = 5,c,d;

c = add(a,b);
d = add(a,b,c);

cout << "C add function presents this: " << c << endl;
cout << "D add function presents this: " << d << endl; 

return 0;
}