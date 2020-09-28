 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int n;
int i = 1;
int sum = 0;

cout << "Enter N" << endl;
cin >> n;

while (i <= n){
	if (n % i == 0){
		//i++;
		sum = sum + i;
		i++;
		cout << sum << endl;
		}	
		else{
			i++;
		}
	} 
	if (2 * n == sum) {
		cout << "Perfect Number!" << endl;
	}
	else {
		cout << "Not a Perfect Number!" << endl;
	} 

cout << endl << "Sum of Factors is: " << sum << endl;

return 0;
}


//cout << "Enter N" << endl;
//cin >> n;

// Below is the same thing but in a (for) loop


