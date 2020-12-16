#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class complex
{
 public:
    int real;
    int img;

    complex(int r = 0,int i = 0)
    {
        real = r;  
        img = i;
    }

    complex add(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img =  img + x.img;        
        return temp;  
    }
};

int main()
{

complex c1,c2,c3;

cout << "Please enter a 2 real numbers: " << endl;
cin >> c1.real >> c2.real;
cout << "Please enter 2 imaginary numbers: " << endl;
cin >> c1.img >> c2.img;

c3 = c1.add(c2);

cout << c3.real << " + i" << c3.img << endl;

return 0;
}