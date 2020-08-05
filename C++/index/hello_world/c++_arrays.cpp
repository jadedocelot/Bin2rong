									++____________________________++			
												C++ Arrays
										 ++____________________++
// Arrays are used to store multiple values in a single variable, instead of declaring seperate variables for each value.


// To declare an array, define the variable type, specify the name of the array followed by [square brackets] and specify the number of elements it shoild store.
____________________________

		string Dcar[4];
____________________________

// We have now declared a varible that holds an array of four srings. To insert values to itm we can use an array literal - 
// Place the values in a comma-seper,a,t,e,d list, inside {curly braces}.
____________________________

 		string dreamCars[4] {"Tesla","Volvo","Cadilac","Toyota"};

____________________________

// To create an array of Three integers, you could write:



		int myNumbers[3] = {2, 4, 6};




											 	Access the elements of an Array

// You can access an array element by referring to the index number
// This statement accesses the value of the first element in cars:

#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

int main(){

string dreamCars[4] = {"Tesla","Volvo","Cadilac","Toyota"};


cout<< dreamCars[0] << endl;


return 0;

}

/* 
OUTPUT: 

Tesla

*/



															C++ Array Loops
// any_of( )u can loop through the array elements with (for) loop
// The loop example outputs all elements in the cars arrays: 
__________________________________________________________________________


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){ 
string dreamCars[4] = {"Lotus","Chevy","Volvo","Tesla"};	// Our array which is can store [4] values

for (int i = 0; i < 4; i = i + 2) {
	cout << dreamCars[i] << endl;

	}

return 0;
}																

______________________________________________________________________________
// The following example outputs the index each element together with its value:

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){ 
string dreamCars[4] = {"Lotus","Chevy","Volvo","Tesla"};	
 
for (int i = 0; i < 4; i++) {
	cout << i << ": " << dreamCars[i] << endl;

	}

return 0;
}

_______________________________________________________________________________


													C++ Omit Array Size
Omit Array Size 
// You don't have to specify the size of the array. But if you dont, it only be as big as the elements that are inserted

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){ 
string dreamCars[] = {"Lotus","Chevy","Volvo","Tesla"};	
 
for (int i = 0; i < 4; i++) {
	cout << i << ": " << dreamCars[i] << endl;

	}

return 0;
}	

/* 
OUTPUT: 

0: Lotus
1: Chevy
2: Volvo
3: Tesla
*/


// This method is completely fine. However, the problem arise if you want extra space for future elements. Then you have to overwrite the existing values:

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){ 
string dreamCars[] = {"Lotus","Chevy","Volvo","Tesla"};	// DELETE
string dreamCars[] = {"Lotus","Chevy","Volvo","Tesla","GMC","Toyota"};	// NEW LIST


for (int i = 0; i < 4; i++) {
	cout << i << ": " << dreamCars[i] << endl;

	}

return 0;
}


// If you specify the size however, the array will reserve the unused space
	
	string dreamCars[8] = {"Lotus","Chevy","Volvo","Tesla"}; 
		// 4/8 slots have been used, which means that 4 slots will be reserved for future values





												Omit Elements on Declaration
// It is also possible to declare an array without specifying the elements on declaration, and add them later: 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
	string cars[5]; // We have assigned a (string) type to carry a total of 5 element
	cars[0] = "Tesla"; // Assigning the value to the [0] index space within cars
	cars[1] = "Chevy";
	cars[2] = "GMC";
	cars[3] = "Volvo";
	cars[4] = "Toyota";
	cars[5] = "Cadilac";

for (int i = 0; i < 5; i++) {
	cout << i << ": " << cars[i] << endl;

	}

return 0;
}







