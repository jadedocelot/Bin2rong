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