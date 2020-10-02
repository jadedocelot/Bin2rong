 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int i = 1, count = 0, n;

cout << "Enter N" << endl;
cin >> n;


while (i <= n){
	if (n % i == 0) {
		i++;
		count++;
		cout << count << endl;
	}
	else{
		i++;
	} 
}
if (count == 2) {
		cout << "Prime Number!" << endl;
}
else {
	cout << "Not a Prime Number!" << endl;
} 

return 0;
}