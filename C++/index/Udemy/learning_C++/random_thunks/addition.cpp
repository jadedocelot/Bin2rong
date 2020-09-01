#include <iostream>
using namespace std; 


int main() {

#we assign an int data type to a,b, and sum. They now can take in integer values    
int a,b,sum;
# A string data type has been assigned to "name"
string name;
    
    cout << "What is your name? " ; 

    getline(cin,name );

    cout << name <<  ", Please Input Two Numbers: "; 
    cin >> a >> b;

sum = a + b;
    
    cout << "And the sum is: " << sum << endl; 


return 0;
}
