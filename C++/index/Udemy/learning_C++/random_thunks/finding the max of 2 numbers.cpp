#include <iostream>
using namespace std;


int main() {

int x,y;

cout << "Enter 2 numbers!" << endl;
	cin >> x >> y;
	// You gotta remember that endl; cannot be included within cin....or can it??? 

if (x > y)
{
	cout << "x is greater than y";
}
else 
{
	cout << "x is smaller than y\n ";

}

return 0;
} 