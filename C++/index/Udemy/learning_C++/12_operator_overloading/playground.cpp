#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class rational
{
 private:
    int p;
    int q;
 
 public:
     rational()
     {
        p = 1;
        q = 1;
     } 
     
     rational(int p,int q)
     {
        this -> p = p;
        this -> q = q;
     }
     rational(rational &r)
     {
        this -> p = r.p;
        this -> q = r.q;
     } 

    int getP(){return p;}
    int getQ(){return q;}
    
    void setP(int q)
    {
        this -> q = q;
    }
    rational operator+(rational r)
    {
        rational t;
        t.p = this ->p*t.q + this -> q * r.p;
        t.q = this ->p*t.q;
        return t;
    }  

    friend ostream & operator << (ostream &os, rational &r);

 };

ostream & operator<<(ostream &os, rational &r)
{
    os << r.p << "/" << r.q;
    return os;
 } 

int main()
 {

 rational r1(3,4),r2(2,5),r3;
 r3 = r1+r2;

 cout << "Sum of " << r1 << " and " << r2 << " is " << r3 << endl;

 return 0;
 } 


 // OUTPUT:
 // Sum of 3/4 and 2/5 is 11/3-