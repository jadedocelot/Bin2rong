#include <fstream> // This will allow doc scanning? 
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;


int main(){

string user_pass; 

cout << "Please Enter the Password to Access The Data Count: " << endl; 
cin >> user_pass;

if(user_pass == "can") 
{

int x;

cout << "Enter a Number For X" << endl;
cin >> x;

		if (x <= 100){
		// cout << "That Shit is True!" << endl;
		while(x < rand()){
		x++;	
		cout << x << endl;
		}
	} 
else 
	{
	cout << "I Have No Idea What You Are Talking About...." << endl;
	} 
}

return 0;	
}