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
    // FFFFRRRIIIEEENNNDDDSSS 
    complex(int r=0,int i=0)
    {
        real = r;
        img = i;
    }
    
    void display()
    {
        cout << real << " + i" << img;
    }

    // The executions included in the outside complex function are also linked to this function
    friend complex operator-(complex c1,complex c2);
};
    // This acts as an independent function.
    // So this does not belong the class above but is a "friend" of it
    // Global Function
    complex operator-(complex c1,complex c2)
    {
        complex t;
        t.real = c1.real + c2.real;
        t.img = c1.img + c2.img;
        return t;
    }


int main()  
{

complex c1(13,5), c2(10,5),c3;
c3 = operator-(c1,c2);

c3.display();

return 0;   
}



