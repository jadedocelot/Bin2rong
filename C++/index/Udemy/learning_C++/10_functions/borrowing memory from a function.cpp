
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// This is pointer of type int( int *)
// NOTE: That within a function, you cannot return the address of a local variable, for once a function has ended, memory is then wiped
    // In other words, int num = 5; will not work
int * fun()
{
    int * p = new int[5];
    // p(pointer) is creating an array in HEAP memory of 5 integers
    for (int i = 0;i < 5;i++)
    {
        // cout << "p address: " << p << endl;
        p[i] = i * 5;
    }
        return p;
}

int main(){

// Now the memory of P in "fun" will be stored in our pointer "ptr"
int * ptr = fun();

for(int i = 0;i<5;i++)
{
    // cout << "prt address: " << ptr << endl;
    // Cout will print out the address of p within fun function 
    cout << ptr[i] << endl;
}

return 0;
}