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

int *n;
void(*fp)();
// The above method is DECLARING a pointer to a function
// The pointer must be within the brackets
// The left you will include the functions written type (void)
// to the right you will include any parameters within said function ()

fp = dis_greeting;
// now we have initialized our pointer by assigning it a name (dis_greeting(function)) 

fp();
// Now we will be executing the function through the pointer that have been assigned to it 
(*fp)();
// Now we will be executing the function through the pointer that have been assigned to it 



return 0;
} 