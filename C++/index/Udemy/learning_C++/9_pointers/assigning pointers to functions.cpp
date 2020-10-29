#include<iostream>
#include<cmath>
#include<string>
using namespace std;

void dis_greeting(){
    cout << "Hello World!" << endl;
} 

//function 1 which takes 2 int args which looks for the MAX of 2 integers
int max (int x,int y){
    return x > y?x:y;
    // return x greater than y return(?) x otherwise(:) y
    
}

//function 1 which takes 2 int args which looks for the MAX of 2 integers
int min(int x,int y){
    return x < y?x:y;
    // return x less than y return(?) x otherwise(:) y
}

int main(){

//void(*fp)();
int(*fp)(int,int);
// The above method is DECLARING a pointer to a function
// The pointer must be within the brackets
// The left you will include the functions written type (int)
// to the right you will include any parameters within said function (int,int)
// Now if we have multiple functions (with 2 parameters?) we can now assign our (fp) pointer to eiter function

fp = max;
// now we have initialized our pointer by assigning it a name the MAX function 

//fp();
// Now we will be executing the function through the pointer that have been assigned to it 
(*fp)(5,2);
cout << (*fp)(5,2) << " :Max function is called" << endl;
// 5
// Now we will be executing the function through the pointer that have been assigned to it 

fp = min;
// now we have initialized our pointer by assigning it a name the MIN function 
cout << (*fp)(5,2) <<  " :Min function is called" << endl;
// 2
return 0;
} 


// See chapter README for notes