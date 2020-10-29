#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
float x[] = {32.3,44.2,32.32,6.54,1.2};
int *c= new int[5], *back_up = new int[3];
float *z= x, sum = 0;


c[0] = 12,c[1] = 65,c[2] = 55,c[3] = 4,c[4] = 32,c[5] = 2;


for (int i = 0; i < 5;++i){
    cout << i << "." << c[i] << endl;
    if (i > 25){
        for(int k = 0;k < 3;++k){
            back_up[k] = i;
        }
    }
    for (int j = 0;j < 6;++j){
        sum = sum + z[j];
    }
}

cout << "Your for LOOPS through pointers has ended" << endl;
cout << "The sum of Z is: " << sum << endl;

for (int i = 0;i < 4;++i){
    cout << "Back-up INTS: " << back_up[i] << endl;
}

return 0;
}