					C constants

- Constants refer to fixed values that the program may not alter during an execution.

	-- These are fixed  values are also called (literals)

- Constants can be of any data type, like an (int) constant, a (float) constant, a (char) constant, or a (string) constant. There are also (emumeration) constants as well.

- Constant are treated like regular variables though their value cannot be modified after their definition




	INTEGER LITERALS
   __________________


   			- An integer literal can be a decimal, octal, or hexadecimal constants. A prefix specifies the base. of radix. Ox or 0x for hexadecimal, 0 for octal and nothing for decimal.

   			- An integer literal can also have a suffix that is a combination of U and L, for 		(unsigned) and (long), respectively. The suffix can be uppercase or lowercase and can be in any order. 

   		BELOW ARE SOME EXAMPLES OF INTEGER LITERALS:

   			212		  // LEGAL
			215u     // LEGAL
			0xFeel  //  LEGAL
			078	   // ILLEGAL: 8 is not an octal digit
			032UU // ILLEGAL: cannot repeat a suffix 


		FOLLOWING  ARE OTHER EXAMPLES OF VARIOS TYPES OF INTEGER LITERALS 


			85 	    	// Decimal
			0213       // OCTAL 
			0x4b      // hexadecimal
			30       // int
			30u     // unsigned int
			30l    // long
			30ul  // unsigned long



			_______________________

			FLOATING-POINT LITERALS
			_______________________


				- floating-point literals have an integer part, a decimal point, a fractional par,
				and an exponental part. You can represent floating point literals either in a decimal form or exponential form.

				- While representing decimal form, you must include the decimal point, the exponent, or both; while representing expnential form. You must include the integer part, the fractional part, or both. 

				SOME EXAMPLES BELOW:

					3.14159		 // Legal
					213159E-5L  // Legal
					510E 	   // Illegal: incomplete exponent 
					210f 	  // Illegal: no decimal
					.e55	 // Illegal: missing integer or fraction


							___________________________

								CHARACTER CONSTANTS

						- Character literals are enclosed in single quotes E.G 'X' can be stored in a simple variable CHAR type
						- An escape sequence e.g. '\t' or a universal character e.g. '\u02C0'

						- There are certain charaters in C that represent special meaning when predeceded by a backlash for example, newline (\n) or tab (\t)



										#include <stdio.h>




								int main() {

									printf("Hello\tWorld\n\n");



								return 0;	
								} 

										// OUTPUT: Hello World




				STRING LITERALS
				_______________


						- String literals or constants are enclosed in double quotes (" ")

							- A string contains charaters that are similar to character literals; plain charaters, escape sequences and universal charaters








			_______________

			DEFINING Constants
			_______________________

				---> There are two simple ways in C to define constants = 

						* Using #define preprocessor

						* Using (const) keyword 


							The #define preprocessor

								 # define <identifier> <value>



								#include <stdio.h>

______________________________________________________________________________________


#define SAME 10
	// defining a constant with (#define preprocessor)
		// notice that NO assignment operator was included in declaration and that also the identifier is in ALL CAPS. defining is great way to distinguish normal variables from constants. 
			// Another simple reminder is that the value of a constat never changes
#define SAMETWO 10

extern int sumVal;

int main(){

int sumVal;

sumVal = SAME * SAMETWO;
 
	printf("%d\n", sumVal);


return 0;	
}


// OUTPUT: 100

______________________________________________________________________________________


// NOW WHAT WILL HAPPEN IF I TRY TO CHANGE THE VALUE OF A CONSTANT? 
	- Well if a change attempt is made, then the user will receive an error message


#include <stdio.h>


#define SAME 10
#define SAMETWO 10

int main(){

SAMETWO = 22;

int sumVal;

sumVal = SAME * SAMETWO;
 
	printf("%d\n", SAMETWO);


return 0;	
}


// ERROR MESSAGE upon compiling

untitled.c:14:9: error: expression is not assignable
SAMETWO = 22;
~~~~~~~ ^


______________________________________________________________________________________

// Another EXAMPLE:

#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main() {
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE); //- %n - -Prints nothing


   return 0;
}

______________________________________________________________________________________


		THE CONT KEYWORD

		- You can use the (const) prefix to declare constants with a specific type as follows - 

					 _______________________

				cont <TYPE> <IDENTIFIER> = <VALUE>;

			________________________________________


#include <stdio.h>


extern float area;


int main(){

float area; 

const float WIDTH = 24.25; // defining a constant with (const) "type"
const float HEIGHT = 55.86; // defining a constant with (const) "type"


area = WIDTH + HEIGHT; 

	printf("Total measurment is: %f\n", area);



return 0; 	
}


// OUTPUT: Total measurment is: 80.110001




	// NOTE: that it is a good programming practice to define constants in CAPITALS.