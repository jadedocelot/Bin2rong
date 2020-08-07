u]l;
//;;/#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class myClass {
public:
	int myMethod(int x, int y);
};

int myClass::myMethod(int x, int y){
	return x * y;
}

int main(){
myClass myObj;

	cout << myObj.myMethod(32,7) << endl;

return 0;
}
// OUTPUT: 224
