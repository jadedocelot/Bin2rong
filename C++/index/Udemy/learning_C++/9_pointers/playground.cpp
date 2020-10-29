#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
float x[] = {32.3,44.2,32.32,6.54,1.2};
int *c= new int[5];
float *z= x, sum = 0;;


c[0] = 12,c[1] = 65,c[2] = 55,c[3] = 4,c[4] = 32,c[5] = 2;


for (int i = 1; i < 5;++i){
    cout << i << "." << c[i] << endl;
    for (int j = 0;j < 6;++j){
        sum = sum + z[j];
    }
}

cout << "Your for LOOPS through pointers has ended" << endl;
cout << "The sum of Z is: " << sum << endl;
return 0;
}