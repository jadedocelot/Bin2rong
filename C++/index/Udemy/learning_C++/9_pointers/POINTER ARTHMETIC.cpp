	#include<string>
	#include<iostream>
	using namespace std;

	// Pointer Arithmetic

	int main(){

	
	int A[5] = {1,2,3,4,5};
	int *p = A, *q = &A[3]; // p has been give the base address of A. Which is the first of A which is 1

	cout << *p << endl; // 1 will presented in the output
	cout << p << endl; // pointer address: 0x7ffee1bfa7e0

	p++; // The pointer will now increment to the next element which is 2

	cout << *p << endl; // 2 will presented in the output
	cout << p << endl; // pointer address: 0x7ffee1bfa7e4

	p--;
	cout << *p << endl; // 1 
	cout << p << endl; // 0x7ffeea24e7e0

	// Note that when using pointer arithemetic you dont need to use *

	 cout << p << endl; // 1  -- 0x7ffeeef557e0 -- As you can see at the end of the address 0 bytes
	 cout << p + 2 << endl; // 3 -- 0x7ffeeef557e8 -- As you can see at the end of the address 8 bytes

	// The for loop below will print out the address of each elements within the 'A' array
 	for (int i = 0;i < 5;++i){
		cout << &A[i] << endl;
	 } 



	// The for loop below will still print out the elements within the A array
	// Not using a start at will print out the addresses
	for (int i = 0;i < 5;++i){
		cout << *(p+i) << endl; 
	} 

	cout << *p << endl; // 1
	
	 for (int i = 0;i < 5;++i){
	 	cout << p << endl; // Will print out the address of each element within the array
	 	p++; // Will increment up
	 } 
	
	// cout << *p << endl; // 32766 -- pointer has moved outside of the array

	cout << q - p; // 3 - which that they 3 elements away from each other
	cout << p - q; // -3
	return 0;
	}