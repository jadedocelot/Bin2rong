#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int mul_Score(int x, int y) {
cout << "\nWhen subtracting the function (mul_Score) you end up with:\n";
    return x - y;
} 

double mul_Score(double x, double y){
cout << "\nWhen multiplyings the function (mul_Score) you end up with:\n";
    return x * y;

}

int rand_Num = rand();  
int rand_Num_Two = rand(); 


int main(){ 

    cout << mul_Score(rand_Num,rand_Num_Two);
    cout << "\n";
    cout << mul_Score(23.3,2.4) << endl;
    cout << "\n";

/// the two (int)variables below will output the values of (rand_Num) and (rand_Num_Two)
//cout << rand_Num << endl;// variable value: 16807
//cout << rand_Num_Two << endl;// variable value: 282475249
////


return 0;
}