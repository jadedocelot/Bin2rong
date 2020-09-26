
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

bool coin = false;

while (coin == false) 
{
//bool coin = false;
while (coin == false)
{
int lock_one = 5;
while (lock_one <= 50)
{
	lock_one++;
	cout << lock_one << endl; 
	}
	cout << endl << "Lock One Unlocked\n" << endl;
	coin = true;
	} 

} 						
bool coinTwo = false;

while (coinTwo == false)
{
	
int lock_two = 3;
while (lock_two <= 41) 
{
	lock_two++;
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



