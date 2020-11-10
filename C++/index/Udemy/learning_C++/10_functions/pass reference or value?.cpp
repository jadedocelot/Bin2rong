// In the code below we have two funtions, one that is a pass by reference mechanic and the other pass by value mechanic.
// The user is asked to input two numbers which then enter an if/else statement. Depending on the conditon only will C++ know which 
// function to activate

// NOTE: Pointers cannot be assigned functions?


#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// We are using a template funtion becuase we dont know what kind of data type we are passing through
//template<class ndt>
void swap(int &a,int &b)
{
 int temp;
    // If first number is smaller than the second then it will be swapped
    temp = a;
    a = b;
    b = temp;
    // If fist number is not larger than the second it will remain as it
}

//template<class ndt>
int swapTwo(int a,int b)
{
 int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

int user_inputOne, user_inputTwo;
int (*fp)(int,int);
fp = swapTwo;

cout << "What is your first number: " << endl;
    cin >> user_inputOne;
cout << "What is your second number: " << endl; 
    cin >> user_inputTwo;


    if (user_inputOne < user_inputTwo)
    {
        swap(user_inputOne,user_inputTwo);
    }
    else
    {
        (fp)(user_inputOne,user_inputTwo);
    }

cout << user_inputOne << " " << user_inputTwo << endl;

return 0;   
}