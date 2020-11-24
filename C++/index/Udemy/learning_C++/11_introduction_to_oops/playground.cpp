#include <iostream>
using namespace std;


template<class y>
y func(y x, y j){
	y sum = x + j;
	return sum;
}

int main(){

int x;
float u;

cout << "Enter sum numbers?" << endl;
cin >> x >> u;

cout << func(x,u) << endl;

return 0;
}