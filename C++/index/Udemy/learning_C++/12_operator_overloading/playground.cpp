#include <iostream>
#include<cmath>
#include<string>
using namespace std;

class complex{
public:
    int real;
    int img;
    // Constructor
    // the arguments = 0 for if they receive nada then you will get 0
    // default argument constructor
    complex(int r = 0,int i = 0)
    {
        real = r;
        img = i;
    }
    // c3 = c1.add(c2) is the function below(add()) 
    // the add() function is called upon c1   
    // c2 is the x parameter
    complex add(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};

int main(){

complex c1,c2,c3;
c1.real=5; c1.img=3;
c2.real=10; c2.img=5;   

c3 = c1.add(c2);

cout << c3.real << " + i" << c3.img << endl;
 
return 0; 
}