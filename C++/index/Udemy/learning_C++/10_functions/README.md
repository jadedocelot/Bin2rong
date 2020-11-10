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

- In C++ you have multiple functions with the same NAMES but with different arguments (types) or number of arguments  

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
# for funtion templates may accept any data type

# Now in order to define the return type ('t') we must add the following;
# template<class t> which will allow us to create a function template, now note that we can name our return type anything and it does not have to be 't', it can be anything your heart desires

# Function template are used for defining generic functions
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
# Datatype is decided based on the type of value passed
# function can have multiple template variables


cout << (fp)(x,y) << " is greater!" << endl;

return 0;
}




                                    _______________________________________

                                               Default Arguments
                                    _______________________________________  

- Say we have the two following function;


- [Funnction 1] 
   
        int add(int x, int y){
            return x + y;
        }

- [Funnction 2]

        int add (int x ,int y,int z){
            return x + y + z;
        }

- And we execute the following;

        add(2,3); // passing these two arguments will activate function 1 
        add(10,2,32; // passing these two arguments will activate function 2

- Now in the example below, say we pass 0 as an argmument. The user would imagine that function 2 would be acitvated but in fact it is function 1 that is activated since zero takes no value.

        add(20,1,0) 

- So instead of having two seperate functions we can acctually combine them so that it may take in 2 or 3 arguments or even an empty argument like zero 


        int add(int x,int y,in z=0) {
            return x + y + z;
        }

- Since z = 0, it may accept "blank" values and integegers. In other words, it will allow the user to pass in 2 or 3 arguments and we will no longer need two seperate functions

- Using default arguments may take in the following;


## In the bottom example we use [default argument] within a [function template]

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

### z(0) becomes optional
template<class t>
t add(t x, t y, t z = 0){
    return x + y + z;
}

int main(){

float a = add(32.3,2.32);
float b = add(32.33,32.4,32.9);
int c = add(32,9,0);

cout << a << endl;

### 34.62

cout << b << endl;

### 97.63

cout << c << endl;

### 41

return 0;
}


                                     _______________________________________

                                            Parameter Passing Methods
                                    _______________________________________  

There are 3 methods a function can take parameters?

1. Pass the value 
    * "Call by value"
2. Pass the address
    * "Call by address" 
3. Pass the reference
    * "Call by reference"


____________________

# Pass-By-Value

____________________

-  You use this when you want the function to TAKE in values, perform actions, then return the result


#include<iostream>
#include<string>
#include<cmath>
using namespace std;

### The below example is refered to as the VALUE METHOD
### SWAP FUNCTION 
void swap(int a, int b) 
### FORMAL PARAMETERS
{
    int temp;
    temp = a; // temp = 10
    a = b; // a = 20
    b = temp; // b = 10
### When function is called upon, and aguments from main func have been passed through, memory is handled within the STACK memory
### Once we are through with the function then STACK memory is dumped, results are NOT passed back to main func

### cout << a << " " << b << endl; 
### OUTPUT: 20 10

}

int main(){

int x = 10,y = 20;

swap(x,y); 
## ACTION PARAMETERS

cout << x << " " << y << endl;
### OUTPUT 10 20

}
### If any changes done to formal parameters in function, they will not modify actual parameters
### In value method, the value of a parameter is passed to a function
### values of actual parameters are passed to formal parameters. Actual parameters cannot be modified by function




____________________

# Pass-By-Address
____________________






#include<iostream>
#include<string>
#include<cmath>
using namespace std;
## In order to pass in an ADDRESS as an argument into a function, we need to make sure  the parameters of said function are POINTERS
## Address pf actual parameters are passed
## The parameters of the 'swap' function must be POINTERS 
void swap(int *a, int *b)
{

## Formal parameters must be pointers
    int temp;
    temp = *a;
## temp = 200 (x address)
    *a = *b;
## a = 210 (y address)
    *b = temp;
## b = 200 (x address)

    cout << a << " " << b << endl;

## This function is now accessing the variables of main function through the pointers
## THE POWER OF POINTERS!
}

int main(){

## Using the (&) in the above function, x now references a and y references b 
int x = 10, y = 20;

##  x addrees = 200 
## y address = 210

swap(x,y);
## We will pass the addesses of x and y to 'swap' function
## The machine code within SWAP function will be put in place of of the CALL of swap
## in otherwords the code from the function is copied here 
cout << x << " " << y << endl;
## OUTPUT: 20 10

## As appose to the pass by method where the main parameters arent affected

return 0;
}


## If you want the funtion to modify the actual parameters, then we will need to use the address mechanism
## References dont take any extra memory





____________________

# Pass-By-Reference 
____________________


 #include<iostream>
#include<string>
#include<cmath>
using namespace std;

### Actual parameters are passed as reference
### for the Formal Parameters we call teh address (&)
### This method is similar to CALL BY ADDRESS for it actually modifires the actual parameters
### for a and b are now references of x and y
void swap(int &a, int &b) // FORMAL PARAMETERS
{
    int temp;
    temp = a; // temp = 10
    a = b; // a = 20
    b = temp; // b = 10
### cout << a << " " << b << endl; 
### OUTPUT: 20 10

}

int main(){ 

int x = 10,y = 20;

swap(x,y);
### The above function

cout << x << " " << y << endl;

}



                                     _______________________________________

                                                 Return by Address
                                    _______________________________________  

- Functions may not only take in address but may also pass an address itself 



#include<iostream>
#include<string>
#include<cmath>
using namespace std;

### This is pointer of type int( int *)
###  NOTE: That within a function, you cannot return the address of a local variable, for once a function has ended, memory is then wiped
### In other words, int num = 5; will not work
    int * fun()
    {
    int * p = new int[5];
### p(pointer) is creating an array in HEAP memory of 5 integers
## NOTE: THAT THE POINTER (*) is REQUIRED! FOR LOCAL VARs will be DELETED
### FOR It can return address of memory allocated in heap
    for (int i = 0;i < 5;i++)
    {
        // cout << "p address: " << p << endl;
        p[i] = i * 5;
    }
        return p;
    }

    int main(){

### Now the memory of P in "fun" will be stored in our pointer "ptr"
    int * ptr = fun();

    for(int i = 0;i<5;i++)
    {
### cout << "prt address: " << ptr << endl;
### Cout will print out the address of p within fun function 
    cout << ptr[i] << endl;
    }

    return 0;
    }

## So im dum dum language, we are borrowing and address from the function(heap memory) rather than that memoring being borrowed from the main func

________________________________________________________________________________________________________________

### AND again the return by reference mechanic for a func borrowing memory from main func is;

#include<iostream>
#include<string>
#include<cmath>
using namespace std; 
### This function will return a reference
### As you can see the parameter will take in a
### So x of 'fun' will be referencing the x of MAIN func
    
    int &fun(int &x){
    return x;
    
    }
    
    int main(){
    
    int x = 10;
    fun(x);
    
    cout << "x address of 'main' is: " << &x << endl; 
    
    return 0; 
    }