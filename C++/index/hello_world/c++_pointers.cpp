														C++ Pointers

* Creating pointer
	// You learned in the previous chapter, that we can get the (memory address) of a variable by using the (&) operator"

// 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
string mealOne = "Pizza"; // Our (string) variable

string* pntrMeal = &mealOne; // (pointer) varible stroing the memory address of (mealOne) as its value


cout << mealOne << endl; // outputs the value of mealOne (pizza)
cout << pntrMeal << endl; // Output the memory address of food with the pointer (0x7ffeeceb9708)
cout << &mealOne << endl; // Output the memory address (0x7ffeeceb9708)

	return 0;
}

// How the above example works: 
// string* pntrMeal = &mealOne;
// Created a pointer variable with the name (pntrMeal), that points to a (string) varible, by using the asterisk sign (*) 
// We then use the (&) operator to store the memory address of then variable called (mealOne), and assign it to the pointer
// Now (pntrMeal) holds the value of (mealOne)'s memory address



// Note there are (3) ways to declare pointer variables, but the first way is prefferred:

	1. string* pntrMeal
	2. string * pntrMeal
	3. string *pntrMeal











														C++ DE-reference

// Get Memory Address and Value


														#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
string mealOne = "Pizza"; // Our (string) variable
string* pntrMeal = &mealOne; // (pointer) declaration

 
cout << pntrMeal << endl; // pointer varible will output the address value of (mealOne) -- (0x7ffee3cd7718) 
cout << *pntrMeal << endl; // using the asterisk(*) will output the value of (mealOne) -- (Pizza) -- Dereferencing 



	return 0;
}



														  Modify Pointers
// You can also change the pointer's value. But note that this will also change the value of the original variable

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() { 
string mealOne = "Pizza"; // Our (string) variable
string* pntrMeal = &mealOne; // (pointer) varible stroing the memory address of (mealOne) as its value

 
cout << pntrMeal << endl; // pointer varible will output the address value of (mealOne) -- (0x7ffee3cd7718) 
cout << *pntrMeal << endl; // using the asterisk(*) will output the value of (mealOne) -- (Pizza)


*pntrMeal = "Gyro"; // Not only will the address value be changed but the original value of the (mealOne) variable will also be changed

cout << pntrMeal << endl;  // OUTPUT: 0x7ffee9fd16e8 // NEW - ADDRESS
cout << *pntrMeal << endl; // OUTPUT: Gyro // NEW - VALUE

	return 0;
}






