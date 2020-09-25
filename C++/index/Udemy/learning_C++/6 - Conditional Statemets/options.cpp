#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){


int a,b,c,option; 

cout << "Please Enter in a number for how you would like to proceed:\n";  
cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide:\n"; 
cout << "__________________\n";
cin >> option; 

cout << "\nNow Enter Two Numbers\n";
cout << "__________________\n";
cin >> a >> b;



switch(option) {

case 1:
    c = a + b;
    cout << "__________________\n";
    cout << "\nAfter adding, your sum is: " << c << "\n\n";  
    break;
case 2:
    c = a - b; 
    cout << "__________________\n";
    cout << "\nAfter Subtracting, your sum is: " << c << "\n\n"; 
    break;
case 3:
    c = a * b; 
    cout << "__________________\n";
    cout << "\nAfter Multiplying, Your Sum is: "<< c << "\n\n" ;  
    break;
case 4:
    c = a/b;
    cout << "__________________\n";
    cout << "\nAfter Dividing, Your Sum is: " << c << "\n\n";
    break;

}
return 0;
}


