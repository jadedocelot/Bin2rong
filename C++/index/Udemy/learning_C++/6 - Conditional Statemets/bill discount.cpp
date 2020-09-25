
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

float bill,sum,tax,dis;

cout << "\nPlease Enter the Customers Total Bill:";
cout << "\n______________________________________\n";
cin >> bill; 

if (bill < 100) {
	tax = bill * 0.0725;
	sum = bill + tax;
		cout << "No Discount Was Applied to The Customers Bill.\n";
		cout << "Bill: $" << bill << endl;;
		cout << "Tax: $" << tax << endl;;
		cout << "\n______________________________________\n";
		cout << "\nYour Customers Total with Tax is: $"<< sum << "\n\n";
} 
else if (bill >= 100 && bill < 500)
{
	tax = bill * 0.0725;
	dis = bill * .10;
	sum = (bill + tax) - dis;
		cout << "\nDiscount Has Been Applied to Customers Bill.\n";
		cout << "Bill: $" << bill << endl;
		cout << "Tax: $" << tax << endl;
		cout << "Discount: $" << dis;
		cout << "\n______________________________________\n";
		cout << "\nYour Customers Total with Tax is: $"<< sum << "\n\n";
}
else if(bill >= 500)
{
	tax = bill * 0.0725;
	dis = bill * .20;
	sum = (bill + tax) - dis;
		cout << "\nDiscount Has Been Applied to Customers Bill.\n";
		cout << "Bill: $" << bill << endl;
		cout << "Tax: $" << tax << endl;
		cout << "Discount: $" << dis;
		cout << "\n______________________________________\n";
		cout << "\nYour Customers Total with Tax is: $"<< sum << "\n\n";
}

return 0;
}