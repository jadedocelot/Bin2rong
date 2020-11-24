#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void fun(int n){


if (n > 0){
//print out n
    cout << n << endl;
    fun(n-1);
    }

}

int main(){

int x = 10;
fun(x);


return 0;
}