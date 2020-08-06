											
																		C Variables
 

 - A variable is nothing but a name given given to a storage area that our programs can maniputlate
 - Each variable in C has a specific type
 	- which determines teh size of the layout of the variable s memory
 - The range of the values that can be stored within that memory
 - Set of operations that can be applied to the variable

 - The name of the variable can be composed of letters, digits, and the underscore character
 	- It must begin with either a letter ir an underscore. 

 	Types & Descriptio

 	1. CHAR: Typically a single (one byte). It is an integer type.
 	2. INT: The most natural size of integer for the machine
 	3. float: a single precision point value
 	4. DOUBLE: a double-precision floating value
 	5. VOID: Reperesents the absence of type




 									Variable Definition C


 			- A variable definition tells the compiler where and how much storage to create for the variable. A variable definition specifies a data type and contains a list  of one or more varaibles of that type as follows

 			(type) variable_list;

 			- Type MUST be a valid C data type including (char), (w_char), (int),(float), (double),  (bool), or any user-defined object.

 			- And (variable_list) may consist of one of more identifire names seperated by commas. 


 			Please see below for some valid declarations: 

 				int i,j,k; 
 				char c, ch; 
 				float f, salary;
 				double d; 


 			- The line (int i, j, k;) declares and definesthe variables i, j and k;
 			- which instructs the compiler to create variables named i, j, and k of type in
 			- Variables can be initialized (assigned an initial value) in their declaration. The initializer consists of an equal sign followed by a constant expression as follows. 

 			------------------------------------------------------------------

 								<type> variable_name = value; 

 			------------------------------------------------------------------		

 		# Some examples: 

 			- extern int d = 3, f = 5; // declaration of d and f.
 			- int d = 3, f = 5;	// definition and initializing d and f.
  			- byte z = 22; // definition and initializing z. 
 			- char x = 'x'; // the variable x has the value of 'x'

 					- For definition without an initialzer. Variables with static storage duration are implicitly initailzed
 					with NULL (all bytes have the value 0); the initial value of all other variables are undefined.






 									Variable Declaration in C 


- A variable declaration provides assurance to the compiler that there exists a variable with the given type and name.
-  Variable definition has its meaning at the time of compilation only, the compiler needs actual  variable DEFS at the time of linking the program

- Variable declaration is useful when you are using multiple files and you define your variable in one of the files which will be available at the time of linking the program
- You will use the keyword (EXTERN) to declare a variable at any place.
		* Though you may declare a variable multiple times in your C program


// See the example below:s


#include <stdio.h>

// NOTE: that the (Extern) is only needed if you are declaring a var outside of the main()
// Variable Declaration:
extern int a,b;     /// You will use the keyword (EXTERN) to declare a variable at any place.
extern int sum;
extern float f;

int main() {

	// variable definition
	int a,b;
	int sum;
	float f;
	
	// actual initialization
	a = 10;
	b = 20;

	sum = a + b;

			// its importat to include the following FORMAT SPECIFIER within quotations -- %d - | - Signed integer
		printf("And the sum of C is : %d\n", sum);	


return 0;
} 



EXAMPLE 2:


#include <stdio.h>


extern int x; // (extern only needed when declar outstide of main())
extern int y;
extern float fundsOne;


int main(){

int x;
int y; 
double fundsOne; 
float sum; // in order for a clean output -- sum will need to be defined as a float since at leat one number/results will include fractions


x = 32; 
y = 54; 

fundsOne = 19.32;

sum = x * fundsOne;

printf("Your pay for Tuesday is : %f",sum);


return 0; 	
}


 	-> The same concept applies when declaring a function when you provide a function name at declaration AND its actual definition can be given anywhere else.


 				// function declaration
 					int myFunc();



 					int main() {
 						// function call
 						int i = func();

 					}


 					// function definition  

 					int func(){


 					return 0;	
 					}


-------- - - - - ---- -- 

LValues and RValues in C

---   ------- -- --- --  


	- There are two kind of expressions in C

			* Lvalue - Expressions that refer to a memory location are called 
			"Lvalue" expressions. An lvalue may appear as either the left-hand or right-hand of an assignment. 

			* Rvalue - The term (ravalue) refers to a data value that is stored at some address in memory. An rvalue is an expression that cannot have a value assigned to it which means an rvalue may appear on the right-hand side but not the left-hand side of assignment.

					- VAR are (Lvalues) and so they may appear on the left-hand side of the assignement (=) 
					- Numeric literals are (Rvalues) and so they may not be assigned and cannot appear on the left-hand side


					// (Lvalue)	
					int  = 20; // valid statement

					// (Rvalue)
					10 = 20; // invalid statement; would generate compile-time error