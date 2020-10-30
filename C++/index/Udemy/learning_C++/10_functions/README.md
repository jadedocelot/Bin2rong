                                    _______________________________________

                                                    Functions
                                    _______________________________________
 
 - Function a piece of program/code which performs a specific task, maybe a tiny task. 
    # Refer to encapsulation.cpp (within random thunks directory) for function/class for examples

- It takes in parametes and returns a value, functions are useful for procedural and module programming
- Functions can be used multiple times

- Every C++ program must have at least ONE main function

    void main(){



    return 0;
    }


- You can also write int main 

- Monolithic Programming, is when you write ALL your code within 1 function  
- FUNCTIONS will allow you to properly split your code up into sections

- First thing a function will need is a name and parameters list for arguments. Also required is a return type 

   reutrn-type function-name(parameter list )


- Return type will handle the OUTPUT(O/P) and the parameter-list will hand the INPUT(i/p)
- A function may take in 0 or more input  
 
- a function may or may not return a value but at most it may only return 1
- if the function is not returning any value then the return-type should be VOID 

- You should consider naming you function as though you are naming a variable


- Below you will see an example of a VOID funcuion


#include<string>
#include<cmath>
#include<iostream>
using namespace std;

# Using a CIN/COUT within a sub function as to using it in the MAIN() is bad practice
void greeting(){
    cout << "Hello coq!" << endl;  
}


int main(){

greeting();

return 0;
}

# OUTPUT:
# Hello coq!


- Think of the main function as the main() function as the employer and the greeting() function as the employee
- It is good practice to keep all CIN and COUT within the MAIN function, user interaction should never be stored within sub function (Like the example above)
- So all functions should be supporting the main function

_____________________________________________________________________________________________________________________

# The function below uses two numbers tom add 2 numbers:

#include<string>
#include<cmath>
#include<iostream>
using namespace std;


int add_num(int x,int y){
    return x + y;
}

int main(){

int x,y;
int(*fp)(int,int);
fp = add_num;

cout << "Please enter a number for x" << endl;
    cin >> x;
cout << "Please enter a number for y" << endl;
    cin >> y;

cout << "The sum of x and y is: " << (*fp)(x,y) << endl;

return 0;
}

- Once a (sub) function is through with, all the memory will within it will be cleared
 - Default return type is int



# This function will find the largest input of 3 numbers

#include <iostream>
using namespace std;

# NOTE: That && stands for "as well as" and || stands for "OR"

int big_boi(int a,int b,int c) {
    if (a > b && a > c){
        return a;
    }
    else if (b > c){
        return b;
    } 
    else {
        return c;
    }
}

int main(){

int x,y,z;
int (*fp)(int,int,int);
fp = big_boi; 

cout << "Enter a number for x " << endl; 
cin >> x;
cout << "Enter a number for x " << endl;
cin >> y;
cout << "Enter a number for x " << endl;
cin >> z;

cout << "And the one with the biggest dick in the room is: " << (fp)(x,y,z) << endl;

return 0;
}





                                    _______________________________________

                                             Functions Overload
                                    _______________________________________

- In C++ you have multiple functions with the same NAMES but with different arguments

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int add(int x,int y){
    return x + y;
}

int add(int x,int y,int z){
    return x + y + z;
}

int main(){
int a = 10,b = 5,c,d;

c = add(a,b);
d = add(a,b,c);

cout << "C add function presents this: " << c << endl;
cout << "D add function presents this: " << d << endl; 

return 0;
}

_________________________________________________

  ->    int max(int,int)
        float max(float,float)
        int max(int,int,int)
X ->    float max(int,int) 

# just because the return type in the two above are different doesnt mean that the functions are different
# Which means we have reached a name conflict  




                                    _______________________________________

                                             Functions Templates
                                    _______________________________________   

- Function templates are the functons that are generic, generalized, in terms of data types. Say we  have two functions which perform the same arguments but have two diffrent return types. Is there some way we can consolodate them into ONE generic functon? Well you can with with FUCKING function templates

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

# We can use function templates to consolodate into one function

# Now in order to define the return type ('t') we must add the following;
# template<class t> which will allow us to create a function template, now note that we can name our return type anything and it does not have to 't', it can be anything your heart desires

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
}