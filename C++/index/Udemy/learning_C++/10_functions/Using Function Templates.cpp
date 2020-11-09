
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

template<class t>
t max(t x,t y){
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


// We have compressed the two functions into one function template
// See axamaple above
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
}