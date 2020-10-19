// in the example below we presnet a two dimensional array, and everytime j (our column index increment) = 4, 4 will be added to x(0). At the end of the loops we will see the grand total of x 
//

#include <iostream>
using namespace std;

int main() {
int x = 0;

	for(int i=1;i <= 5;i++)
	{
		for (int j= 1;j <= 5;j++)
		{
			cout << "( " << i << " , " << j<< " ) ";
				if (j == 4){
					x = (x + j) * 4;
				}			
		}
		cout << endl;
	}		

int user_input;

	cout << "Now enter a number to deduct: " << endl;
	cin >> user_input;

	x = x - user_input;


	if (x < 10) {	
		cout << "Welp you don't enough to enter buddy" << endl;
		cout << "And the totatl for x is: " << x << endl;
		//return 0;
	}
	else if (x > 10) {
		cout << "Congrats! You got enough to enter.";
		cout << "And the totatl for x is: " << x << endl;
		//return 0;
	}
return 0;
}
/*
input: 

14

OUTPUT:

( 1 , 1 ) ( 1 , 2 ) ( 1 , 3 ) ( 1 , 4 ) ( 1 , 5 )
( 2 , 1 ) ( 2 , 2 ) ( 2 , 3 ) ( 2 , 4 ) ( 2 , 5 )
( 3 , 1 ) ( 3 , 2 ) ( 3 , 3 ) ( 3 , 4 ) ( 3 , 5 )
( 4 , 1 ) ( 4 , 2 ) ( 4 , 3 ) ( 4 , 4 ) ( 4 , 5 )
( 5 , 1 ) ( 5 , 2 ) ( 5 , 3 ) ( 5 , 4 ) ( 5 , 5 )
Now enter a number to deduct:
5442
Congrats! You got enough to enter.And the totatl for x is: 14
*/
