#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
int i = 1;
int n; 

cout << "Please enter in a number for N" << endl;
cin >> n;

while(i <= 10){
    int sum = n * i;
    cout << endl << i << " x " << n << " = " << sum << endl; 
    i++;
}

return 0;
}
