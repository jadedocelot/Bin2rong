// COMPLETE
	// Need to fix the random num gen after every compile. 
	// Though clean it up?

// FIRST COMPILE: 14 ERRORS!
// SECOND COMPILE: 18 ERRORS! (WTF! I just made one correction)
// THIRD COMPILES: 1 ERROR (That unfinished class was really fucking me over )
// FORTH COMPILE: COMPILE COMPLETE

#include<iostream>
#include<string>
#include<cmath>
#include <stdlib.h>
using namespace std;

/// Start


// Random NUM formula: rand() % (max_number + 1 - minimum_number) + minimum_number

// print: "Enter in what hour youd like to sumit"

//   0 <==============> 23 

int main(){

int TICKET_NUMBER;
int USER_RESPONSE;
string user_EMAIL;
TICKET_NUMBER = rand() % (10000 + 1 - 0) + 0;
// srand(time(NULL)); <-- this might be for C
//rand() % (65 + 1 - 0) + 0
string verify;

cout << "Please Enter The Current HOUR in Military time (0-24)" << endl;
cin >> USER_RESPONSE;

if (USER_RESPONSE >= 0 && USER_RESPONSE <=9) 
{

	cout << "========================================================\n";
	cout << " Sorry, our offices are currently closed. Please provide\n an email so that a ticket # may be provided and a representative\n will reach out at their earliest convenience" << endl; 
	cout << "========================================================\n";
	cin >> user_EMAIL;	
		if (user_EMAIL.size() > 3)
		{
 			cout << "THANK YOU! Your Pick # Is: " << TICKET_NUMBER << endl;
		}

} 
	else if (USER_RESPONSE >= 10 && USER_RESPONSE <= 17) 
	{
 	  cout << "Please Hold For a Representative will be with you shortly" << endl;
	} 
	
	/// Im not geting the the OPENED hour response
	else if (USER_RESPONSE >= 18 && USER_RESPONSE <=24) 
		{
	cout << "========================================================\n";
	cout << " Sorry, our offices are currently closed. Please provide\n an email so that a ticket # may be provided and a representative\n will reach out at their earliest convenience" << endl; 
	cout << "========================================================\n";
			cin >> user_EMAIL;
 		}
			if (user_EMAIL.size() > 3)
			{
 				cout << "THANK YOU! Your Pick # Is: " << TICKET_NUMBER << endl;
			}

return 0;
}



