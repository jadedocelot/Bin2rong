																		Data Types

// Data types in C refer to an extensive system used in declaring variables or functions of different types
// The type of variable determines how much space it occupies in storage and in bit pattern stored is interepreted

_______________________________________________________________________________________________________________________________________________________________

	1. Basic Type:
		 - They are aerithmetic types and are further classified into: (a) integer types and (b) floating-point types

  	2. Enumerated Types:

  		-  They are again arithmic types and they are used to define variables that can only assign certain discreet integer values throughout the program

  	3. the type (void):

  		- The type specifier (void) indicates that no value is available (was introduced to this when creating functions in C++)

  	4. Derived types: 

  		- They include (a) pointers types, (b) array types, (c) Structure Types, (d) Union types and (e) function types

  ____________________________________________________________________________________________________________________________________________________________

- The array type and structure types are referred collectively as the aggregate types. The type of function specifies the type of functions return value.


Integer Types:

	- The following table provides the details of standard integer types with their storage sizes and value ranges.


			Types   | Storage Sizee	| Value Range
		  ______________________________________________
			Char	|	1 byte		|	-128 to 127 OR 0 to 255 
					|				|	
	  Unsigned Char	|	1 byte		|	0 to 255	
					|				|	
	    Signed Char	|	1 byte		|	128 to 127
					|				|	
		   int		|  2 or 4 byte	|  - 32,768 to 32,767 or -2,147, 483, 648 to 2, 147, 483, 647
					|				|	
	Unsigned Int 	| 2 or 4 byte	|	0 to 65,535 or 0 to 4,294, 967, 295
					|				|  		  
			Short	|   2 byte		|  - 32,768 to 32, 767
					|				|  		  
					|				|  		  
	Unsigned Short	|   2 bytez		|  	0 to 65, 535	  
					|				|  		  
					|				|  		  
			Long	|   8 bytes		|  - 9223372036854775808 to 9223372036854775808		  
					|				|  		  
					|				|    
	Unsigned Long	|	8 bytez		|  	0 to 18446744073709551615



	- To get the exact size if a type or a variable on a paticular platform.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

printf("CHAR_BIT:%d\n",CHAR_BIT); // CHAR_BIT:8
printf("CHAR_MAX:%d\n",CHAR_MAX); // CHAR_MAX:127
printf("CHAR_MIN:%d\n",CHAR_MIN); // CHAR_MIN:-128
printf("INT_MAX:%d\n",INT_MAX); //  INT_MAX:2147483647
printf("LONG_MAX:%d\n",LONG_MAX); // LONG_MAX:-1
printf("LONG_MIN:%d\n",LONG_MIN); // LONG_MIN:0
printf("SCHAR_MAX:%d\n",SCHAR_MAX); // SCHAR_MAX:127
printf("SCHAR_MIN:%d\n",SCHAR_MIN); // SCHAR_MIN:-128
printf("SHRT_MAX:%d\n",SHRT_MAX); // SHRT_MAX:32767
printf("SHRT_MIN:%d\n",SHRT_MIN); // SHRT_MIN:-32768
printf("UCHAR_MAX:%d\n",UCHAR_MAX); // UCHAR_MAX:255
printf("UINT_MAX:%d\n",UINT_MAX); // UINT_MAX:-1
printf("ULONG_MAX:%d\n",ULONG_MAX); // ULONG_MAX:-1
printf("USHRT_MAX:%d\n",USHRT_MAX); // USHRT_MAX:65535

 return 0;
}


 																The VOID Type
 	- The void type specifies that no value is available. It use in 3 kinds of situations:

 	1. Functions Returns as Void:
 		There are various functions in C which do not return any value or you can say they return void (HA HA HA, so funny). A function with no return value has the return type as void.
 			* For Example: void exit (int status)

 	2. Function arguments as (void): 
 		There are various functions in C which do note accept any parameter. A function with no parameter can accept void.
 			* for Example: int rand(void)

	3. Pointers to Void:
		A pointer of type void * represents the address of an object, but not its type.
			* For example: 
							A memory allocation function void *malloc(size_tsize); returns a pointer to void which can be casted to any data type			



