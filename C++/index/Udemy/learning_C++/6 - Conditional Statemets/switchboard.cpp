
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

bool input = false;

// I was trying to figure out how to repeat the code if a 'default' was selected

int day;

	cout << "Whom Are You Trying to Reach";
	cout << "\1.Jim\n\n2.Lexi\n\n3.Tim\n\n4.Sara <CURRENTLY OUT OF THE OFFICE>\n\n5.Doug\n\n6.Alex\n\n7.Sam\n\n";
	cout << "_______________________________\n";
	cin >> day;

do {
switch(day){
case 1:cout << "\nHold for Jim...\n";
	//input = true;
	break; 
case 2:cout << "\nHold for Lexi...\n";  
	//input = true;
	break;
case 3:cout << "\nHold for Tim...\n";  
	//input = true;
	break;
//case 4:cout << "Hold for Sara...\n";  
	//break;
case 5:cout << "\nHold for Doug...\n";  
	//input = true;
	break;
case 6: cout << "\nHold for Alex...\n";
	//input = true;
	break;
case 7: cout << "\nHold for Sam...\n";
	//input = true;
	break;
default: cout << "\nPlease Enter a New Extension" << endl;
	//input = false;
	break;
}
 //while (input == false);

} while (day == 4);

return 0;
}