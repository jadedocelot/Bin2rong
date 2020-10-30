
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
int max(int x,int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    } 
}

float max(float x,float y){
    if(x > y){
        return x;
    } 
    else{
        return y;
    }
}
*/

template<class cat>
cat max(cat x,cat y){
    if (x > y){
        return x;
    }
    else{
        return y;
    } 
}

int main(){

float x,y,(*fp)(float,float);
fp = max;

cout << "Enter a number for x" << endl;
cin >> x;
cout << "Enter a number for y" << endl;
cin >> y;

cout << (fp)(x,y) << " is greater!" << endl;

return 0;
}