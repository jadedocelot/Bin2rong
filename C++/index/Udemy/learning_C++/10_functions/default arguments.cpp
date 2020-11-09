#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// z(0) becomes optional
template<class t>
t add(t x, t y, t z = 0){
    return x + y + z;
}

int main(){

float a = add(32.3,2.32);
float b = add(32.33,32.4,32.9);
int c = add(32,9,0);

cout << a << endl;
cout << b << endl;
cout << c << endl;

return 0;
}
