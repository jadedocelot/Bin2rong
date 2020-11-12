
// Below I was attempting to access varaible from different functions

#include<iostream>
#include<string>
#include<cmath>
using namespace std;


   int g = 20;


int func(){

 int g = 10;
	
	{	
		//func_two();		
		::g++;
		//int *g;
		//g = &g + 4;
		cout << g << endl;
	}
		cout << g << endl;
}


int func_two(){
	int g = 5;
	cout << "This belongs to func_two: " << g << endl;
}

// our main function
int main(){

func();

return 0;
} 
