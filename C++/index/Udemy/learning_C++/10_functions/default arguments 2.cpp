#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int max(int a,int b,int c){
    return a > b && a > c ? a:(a>c?b:c);
     // Whats happening above (psuedo code)?
    // (if) a is greater(>) than b and(&&) a is greater(>) than c return(?) a otherwise(:) if b > c return(?) b;
    // conditional statement: a > b && a > c
    // if (statement): ? a
    // else (statement): b>c?b 
        // You may also put the "else" portion in ()
}

int main(){

cout << max(10,43,1) << endl;

return 0; 
}