#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void dis_greeting(){
    cout << "Hello World!" << endl;
} 

int max (int x,int y){
    return x > y?x:y;
    // return x greater than y return(?) x otherwise(:) y
}

int min(int x,int y){
    return x < y?x:y;
    // return x less than y return(?) x otherwise(:) y
}

int main(){

int(*fp)(int,int);
fp = max;

(*fp)(5,2);
    cout << (*fp)(5,2) << " :Max function is called" << endl;

fp = min;
    cout << (*fp)(5,2) <<  " :Min function is called" << endl;


return 0;
} 


// See chapter README for notes