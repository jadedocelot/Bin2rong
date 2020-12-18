                                                
                                            _ _ _ _ _ _ _ __  __ _ __ _ _
                                             
                                                 Operator Overloading
                                             _ _ _ _ _ _ _ __  __ _ __ _ _

Complex Number:
  
     a + i b

            a -> Real
            i b -> img  -  i ∫ -1  <- Imaginary number


c1 -> 5 + 7 i
c2 -> 2 + 9 i  
______________

c3 = c1 + c2 :    7 + 16 i


In order to learn operator overloading; 

     1. How to write a function
    2. What should be a signature of a function


    #include <iostream>
#include<cmath>
#include<string>
using namespace std;

class complex{
// This will allow everything within the class to be easily accessed
public:
    int real;
    int img;
# Constructor
# the arguments = 0 for if they receive nada then you will get 0
# default argument constructor
    complex(int r = 0,int i = 0)
    {
        real = r;
        img = i;
    }
# c3 = c1.add(c2) is the function below(add()) 
# the add() function is called upon c1   
# c2 is the x parameter
    complex add(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

     int main(){
# c1-3 have become objects of "complex"
     complex c1,c2,c3;
# c1 = real = 10; img = 3
     c1.real=10; c1.img=3;
# c2 = real = 10; img = 5
     c2.real=10; c2.img=5;   

# c3 = 
# c1.real(10) + c2.real(10)
# c1.img(3) + c2.img(5)
     c3 = c1.add(c2);


# Now
# c3 = c3.real(20); c3.img(8)
# Fucking freeloader
     cout << c3.real << " + i" << c3.img << endl;
 
return 0; 
}




                                            _ _ _ _ _ _ _ __  __ _ __ _ _
                                             
                                             Friend Operator Overloading
                                              _ _ _ _ _ _ _ __  __ _ __ _ _
     
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
# FFFFRRRIIIEEENNNDDDSSS 
# The parameters must = 0 for c3 will not be passing in any values so a default value must be assigned , which is 0
    complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
    
    void display()
    {
        cout << real << " + i" << img;
    }

# The executions included in the outside complex function are also linked to this function
    friend complex operator+(complex c1,complex c2);
};
# This acts as an independent function.
# So this does not belong the class above but is a "friend" of it
# Global Function
    complex operator+(complex c1,complex c2)
    {
        complex t;
        t.real = c1.real + c2.real;
        t.img = c1.img + c2.img;
        return t;
    }


int main()  
{

complex c1(13,5), c2(10,5),c3;
c3 = operator+(c1,c2);

c3.display();

return 0;   
}


                                            _ _ _ _ _ _ _ __  __ _ __ _ _
                                             
                                            insertion Operator Overloading
                                            _ _ _ _ _ _ _ __  __ _ __ _ _



#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

class complex
{
 private:
    int real;
    int img;

 public:
    complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
 
    friend ostream & operator<<(ostream &o, complex &c1);

};

ostream & operator<<(ostream &o,complex &c1)
{
    o << c1.real << " + i" << c1.img << endl;
    return o;
} 


int main()
{

complex c1(50,2);

   cout << c1 << endl;
# The bottom execution is the same as the above COUT
# operator<<(coutr,c);

return 0;
}

# OUTPUT:
# 50 + i2d