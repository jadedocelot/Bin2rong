
/// Guess the numbe that will unlock the the locks
// Player will have point deducted for every increments
// So for some reason I'm thinking like a game of 21

// I have managed to add a random numbher generator

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {


bool coin = false;

while (coin == false) 
{
//bool coin = false;
while (coin == false)
{
int lock_one;
 // int lock_increments;

cout << "Enter in A Number To Gain Access" << endl;
cin >> lock_one;


while (lock_one <= rand()) // I want to add arguments
{
	lock_one = lock_one + 200; 
	}
	cout << endl << "Lock One Unlocked\n" << endl;
	coin = true;
	} 

} 						
bool coinTwo = false;

while (coinTwo == false)
{
	
int lock_two;
// int lock_increment_two;

cout << "Enter in A Number To Gain Access" << endl;
cin >> lock_two;

while (lock_two <= rand()) // I want to add arguments
{
	lock_two = lock_two + 200; //
	cout << lock_two << endl; 
}
	cout << endl;
	cout << "\nLock two Unlocked";
	coinTwo = true;
} 

coin = true;
cout << "\n_________________________________\n";
cout << endl << "\nChest Unlocked!\n" << endl;

return 0;
}



