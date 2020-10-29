				_--____--__-____-__--__--___-__---__
				
				
							POINTERS
				
				_--____--__-____-__--__--___-__---__



- Pointers are the type of variables in C++, and also the C language

- A pointer is a variable which is stored for storing the address of data

	1. Data Variable
		- Storing Data -> INT x = 10 

	2. Address Variable
		- (P = point in the coming examples)- int *P 
		- To assign out address varible to x 
				- p = &x; 
		
		- Declarized Pointer:  	int *p 
		- Initialized Pointer:  p = &x
		- Dereferencing Pointer: cout << *p;
  
_________________________________________________
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
int c = 32;
int x = 10;
int clone = &p;

int *p;
p = &x;

cout << &x << endl;  // 0x7ffee5b30794
cout << p << endl;	//	0x7ffee5b30794

cout << &c << endl;	//	0x7ffee5b30798
	
	// Adding & to variable in cout will print out the variable address


return 0;
}

_________________________________________________

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
int c = 32;
int x = 10;

int *p;
p = &x;

cout << x << endl;       // 10 <- value of x
cout << &x << endl;     // 0x7ffeee48a774 <- Address of x
cout << p << endl;     // 0x7ffeee48a774 <- Address of x
cout << &p << endl;   // 0x7ffeee48a768 <- Address of p
cout << *p << endl;  // 10 <- value of x



return 0;
}


Pointer Review: 

 - Pointers is an address variable
 - It can be used to store the address of a variable

 - Pointers are used for accessiong heap memory
 	- 5 Arithmetic operations are allowed pointer
 		* p++ - move pointer to next element 
 		* p-- move pointer to previous element
 		* p+k gives address of kth element from pointer location to right
 		* p-k gives address of kth elements between 2 pointers p and q 
 	- pointers can be of many levels
 	
 	- Double pointer is used for accessing 2D arrays






  															Why Pointers?



- When a program is executed (using C or C++), the memory is divided into 3 sections

							HEAPP:
							_______









							STACK:
							______










							CODE SECTION:
							______________

							Main(){}
								- main can access the code section or the STACK. Though it cannot access the HEAP. The main function can access the HEAP with pointers
								- A program can access a file with the help of a pointer 
								- Pointers can even assist a program to assist a network connection
								- external objects such as (printers,keyboards,monitors, ETC) can be accessed by programs with the use of 		printers
								- The address is key
								- overall pointers can access variouse points within the computer

							


														How is Heap Memory Accessed Using Pointers 


- Heap memory is accessed dynamically: The memory is located dynamicaly, the size of the memory is decided at RUN TIME and not COMPILE TIME



				main(){
					int A[5] = {1,2,3,4,5};
				

					- The above array within main will be stored in the STACK memory. Now how can we store the array within the HEAP memory?
 
					int *p;

					- When a pointer is declarized like the one above (int *p;) it is stored within the STACK memory

					p = new int[5];

					- What has now been done above is, that the the delared (p) pointer has been initialized with a zero value, 'p' will be stored witin our heap memory. And the word (new) is what allows it to be stored within HEAP
					- It is called heap because it is a pile of memory space available to programmers to allocated and de-allocated


					- Now when the program is through the the 'A' array will be deleted when it has gone outside of the scope, since it is locted within the stack memory

					- When something is within the heap memory it will not be deleted as long as your program is running. Now if you only wanted heap memory to be availble for a limited time then you will to DELOCATE the heap memory 

						- delocating your heap memory is very important, and it can be done with the following

							delete []p;

						- delete above will will delocate the heap memory and will delete it even though the program is running 
						- You will experience a "Memory Leak Problem" if UNused heap memory is not deleted

						- Now if you want to disconnect the connection of a pointe to initialize with another pointer

							p =  nullptr;

							- do not use the above NULL method to delete HEAP memory, the is only use to



								int main(){

								 	int = *p;

								 	po  = new int[5]
								 	po[0] = 12;
								 	po[1] = 13;
 
								 	cout << *p;

								 	delete []p;


								 	return 0;
								}




				}	




int main(){

int *p= new int[20]; // OG size of array pointer


delete []p // Delete the OG size of array p so that you do not encounter a memory leak
p=new int[40]; // UPDATED size of array pointer

// With the help of heap memory and pointers; pointer remains same and can be pointing at any size of memory so our programs can be more dynamic










										___--__--_----_-__-_-__------------_________-----


														 Pointer Arithmetic

										___--__--_----_-__-_-__------------_________-----


int A[5] = {2,4,6,8,10};

int *q = &A[3] <--- q = 206 address of A (array)
int *p = A;

	  0   1   2   3   4

A = | 2 | 4 | 6 | 8 | 10 |    <- (pointer) p = beginning of address A (array) 200

200/1 202/2 204/5 204/7 208/9.   <- Addresses 



				VALID POINTER OPERATIONS

				 1. P++ : 
				 	
				 	-Pointer will move to next location. (pointer)p current location is 200, with p++ it will move to 202. Did that bitch just move to the next location?
				 		* ++ does not mean adding 1 (DUUUHHHHH)
				 	- If it were a FLOAT pointer then it move by 4 bytes and not just 2 (cause ya know, float takes 4 bytes). If it were a 
				 		character pointer then it would move by 1 bytes. So when you say ++ the bytes it will move up will depend on the data type

				 2.p-- :

				 	- Just how ++ goes forward, -- will go backwards.

				 3. p = p + 2: 

				 	- This will move the element forward by 2 elements


				 4. p = p - 2:

				 	- This will go down by 2 elements


				 5.  d = q - p:

				 	 206(q) - 200(p) = 6 / 2 = 3
				 		
				 		- Remeber that INT = 2 bytes hence why we divided 6 by 2


				 	d = p - q;

				 		200 - 206 = - 6 / 2 = -3


				 			So the difference between p and q is d?   


	#include<string>
	#include<iostream>
	using namespace std;

	// Pointer Arithmetic

	int main(){

	
	int A[5] = {1,2,3,4,5};
	int *p = A, *q = &A[3]; // p has been give the base address of A. Which is the first of A which is 1

	//cout << *p << endl; // 1 will presented in the output
	//cout << p << endl; // pointer address: 0x7ffee1bfa7e0

	//p++; // The pointer will now increment to the next element which is 2

	//cout << *p << endl; // 2 will presented in the output
	//cout << p << endl; // pointer address: 0x7ffee1bfa7e4

	//p--;
	//cout << *p << endl; // 1 
	//cout << p << endl; // 0x7ffeea24e7e0

	// Note that when using pointer arithemetic you dont need to use *

	// cout << p << endl; // 1  -- 0x7ffeeef557e0 -- As you can see at the end of the address 0 bytes
	// cout << p + 2 << endl; // 3 -- 0x7ffeeef557e8 -- As you can see at the end of the address 8 bytes

	// The for loop below will print out the address of each elements within the 'A' array
	// for (int i = 0;i < 5;++i){
	// 	cout << &A[i] << endl;
	// } 



	// The for loop below will still print out the elements within the A array
	// Not using a start at will print out the addresses
	//for (int i = 0;i < 5;++i){
	//	cout << *(p+i) << endl; 
	//} 

	//cout << *p << endl; // 1
	
	// for (int i = 0;i < 5;++i){
	// 	cout << p << endl; // Will print out the address of each element within the array
	// 	p++; // Will increment up
	// } 
	
	// cout << *p << endl; // 32766 -- pointer has moved outside of the array

	cout << q - p; // 3 - which that they 3 elements away from each other
	cout << p - q; // -3
	return 0;
	}





										______________________________________

												 Problem With Pointers
										______________________________________
- Pointers can be very dangerous, pointers can actually cause systems to crash. Due to runtime error. At time of compile we may not get the error but at runtime we may get an error

# Some ways POINTERS can totally fuck you over: 

	1. Uninitialize a pointer
	2. Memory Leak
	3. Dangling Pointer

- These are some of the main causes, due to the neglagence of a programmer


# Uninitialized Pointer:

	int * p; 
		- above we have declared a pointer
			BUT
			- Invalid address, becuase it is not pointing anywhere, unknown location. How might we correct this? there are several methods;
				1. Say we already have a variable like X;

					int x = 10; 

						We can assign our pointer to X

							p = *X; 

				2. You can initialize a pointer using an address with hexadecimal codes

					p = (int *)ox5638;

					- This method has to be type casted like some kind of integer pointer. Also we have to make sure that that address belongs to a program (Though note that this method is not comonly used, this is mostly used in systems programming)

				3. Or you can assign it to the heap memory

					p = new int[5]


			- So if not using any of these methods once should NOT use the a pointer

	* p = 25;
		- And now we will store the value of 25 in our pointer



# Memory Leak

- Oh shit, you can eventually run out of memory. So be sure to delete all UNUSED pointers

- say we create a new pointer linked to an array; 

	int *p = new int[5];

	- And say at some point that pointer is no longer needed, so we will need to delete said ponter and de-nitialize it;

	 	delete []p;  <--- DELETE THAT BISH

		 p = NULL;  <--- DE nitialize it



# Dangling Pointer

-  Say when we create a pointer within our main  but we delete at the end of a function, if  deleted within a function it will also delocate the pointer from our code entirely






										______________________________________

												 		Reference
										______________________________________

- Referece a powerful features in C++ which is also not included in any other language

int x = 10;
int &y = x;

int a;

 
R - value --> a = x  | <- DATA of X
L - valie --> x = 25 | <- ADDRESS of X

 
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

int x = 10; <- L value

int &y = x; <- R value
// y is now referrence to x, it otherwords it is a NICKNAME to x. An alias 

if (y == 10){
    cout << "Y is inded a referrenct to x!" << endl;
    cout << "X address: " << &x << endl; // address: 0x7ffeea7c5788
    cout << "Y address: " << &y << endl;// address: 0x7ffeea7c5788
    while (y > 0){
        --y; 
        // What is happening here is that we ve thrown a reference of x into a (while) loop 
        // which will decrement the value of y(x)  
        // At the end of the loop, the new value of x will be 0
    }
}
else{
    cout << "Do you even reference BRUH!" << endl;
}
cout << "The value of X is: " << x << endl; 
// modifying our referrence will modify the original variable

return 0;
}