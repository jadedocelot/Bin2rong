
// Below I was attempting to access varaible from different functions

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int g = 20;

int func(){
	int g = 10;
	int x = ::g + 5;

	cout << x << endl;

return 0;	
}


// our main function
int main(){

	func();

return 0;
} 
