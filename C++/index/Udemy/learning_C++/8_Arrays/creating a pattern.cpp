#include<iostream>
#include<string>
#include<cmath>
using namespace std; 


int main(){

int count = 1;

for (int i = 0; i < 20;i++){
	cout << "&";
	for (int j = 0; j < 20;j++){	
		if (i >= j)
			cout << "*";
		}
	 cout << endl;
	}

return 0;
}