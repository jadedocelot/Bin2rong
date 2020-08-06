

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class myClass {
public: // STOP FORGETTING to make publicx
	int myMethod(int x, int y){ // int fuctio
		return x * y;
	}
}; // semi to close  class


int main() {

myClass myObj;

cout << myObj.myMethod(12,32) << endl; // cout since method/funtion includes (return)


return 0;
} 

// OUTPUT: 384