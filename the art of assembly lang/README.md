#                       _____________________________________
#                           Hello, World of Assembly Lang
#                       _____________________________________


### 1.1  - The Anatomy of an HLA Program
- HLA: High Level Assembly
- Eech program requires "Identifiers"(exam: program pgmID;), all identifiers within said program must be the same

        program pgmID;
            <<Declaration>>  

- The Declaration section is where you declare constants,types, variables, procedures and other objects
- And other objects in an HLA program     

        begin pgmID;
           <<statements>> 

- The statements section is where you place the executable statements for your main program

        end pgmID;

NOTE: program, begin, and end are HLA reserved words that delineate the program. Also, 
NOTE: the placement of the semicolons in this program
- The above is the basic [HLA] program

- [pgmID] in the template above is the USER defined program identifier, make sure to choose an appropriate and descriptive name for your program.
        * One must really consider on what to name their program (As one would when naming a variable)
        * HLA identifiers may begin with an underscore or an alphabetic character and may be followed by zero or more alphanumeric or underscore characters.
        * HLAs identifiers are case neutral
        *NOTE: You may not declare two identifiers in the program whose name differs only by alphabetic case
        
## Below is our first HLA program; helloworld.asm


        statemenprogram helloworld;
        #include("stdlib.hhf");

        begin helloworld;

            stdout.put("Hello, World of Assembly Language", n1);

        end helloworld;

- [#include]: statement in this program tells the HLA compiler to inceclude a set of declarations from the [stdlib.hhf] library, HLA HEADER FILE
        * the [stdout.put] statement is the print statement for HLA
                * It is used to write data to the standard output device (generally in console)
        *[n1] at the end  of this statement is a constant, also defined in [stdlib.hhf], that corresponds to the newline sequence
        * [;] notice that semicolons follow the program, beginm stdout.put, and end
                *NOTE: that [#include] does not require to be followed by by a semicolon [;], it is possible to create include files that generate errors if a semicolon follows #include statements..... SO YOU MAY WANT TO GET IN THE HABBIT OF NOT INCLUDING SEMICOLONS WITH INCLUDE......Already ahead of you asshole! THANKS C++   
        * [#include] itself isnt a declaration but it does tell the HLA compiler to substitute the file [stdlib.hhf] in place of [#include] directive
                * Most HLA programs you will write will need to include one or more of the HLA standard library header files
                        *[stdlib.hhf] actually includes all teh standard library difinitions in your program
        * compiling this program produces a console application. Running this program in a command window prints the specified string, and then control returns to commmand line interpreter
- HLA  is free-format language. Therefore, you may split statements across multiple lines if this helps to make your program more readable

        
- For EXAMPLE you may write out the stdout.put statements in teh following manner;

        stdout.put
        (
                "Hello World of Assembly language",
                n1
        );

- HLA autmoatically concantenates any adjacent string constants it finds in your source file. Therefore, the statements above is also equivalent to 

        stdout.put
        (
                "Hello,"
                "World of assembly language",
                n1
        );

- NOTE: [n1](NEW_LINE) is really nothing more than a string constant, so really teh comma between n1 and prior string insnt necessary