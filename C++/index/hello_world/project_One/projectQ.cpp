#include <iostream>
#include <string>
using namespace std;

int main() {
int x = 0; 

while (x < 10) {
	cout << x << "\n"; 
	x++; 

	if (x == 4){
		break;
		}

cout << "You lose bitch!" << endl; 

	}
return 0;
}





/// Can we play with this!
/*
0
You lose bitch!
1
You lose bitch!
2
You lose bitch!
3
[Finished in 0.5s]
*/






#include <iostream>
#include <string>
using namespace std;

int main() {
int x = 0; 

while (x < 11) {
	cout << x << "\n"; 
	x++; 
if (x == 4) {
	continue;

	}

	if (x == 4){
		break;
		}

	}

cout << "_____________________ " << endl;
cout << " " << endl;
cout << "You lose bitch!" << endl; 
cout << " " << endl;
cout << "_____________________ " << endl;
return 0;
}



/*
	OUTPUT:


5
6
7
8
9
10
_____________________ 
 
You lose bitch!
 
_____________________ 
*/