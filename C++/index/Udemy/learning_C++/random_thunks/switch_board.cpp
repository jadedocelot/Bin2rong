
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

int day;

	cout << "Whom Are You Trying to Reach";
	cout << "\1.Jim\n2.Lexi\n3.Tim\n4.Sara\n5.Doug\n6.Alex\n7.Sam\n";
	cin >> day;

switch(day)
{
case 1:cout << "Hold for Jim...\n";
	break; 
case 2:cout << "Hold for Lexi...\n";  
	break;
case 3:cout << "Hold for Tim...\n";  
	break;
case 4:cout << "Hold for Sara...\n";  
	break;
case 5:cout << "Hold for Doug...\n";  
	break;
case 6: cout << "Hold for Alex...\n";
	break;
case 7: cout << "Hold for Sam...\n";
	break;
}

return 0;
}