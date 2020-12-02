			______________________________________________

						 Introduction to OOPs
			______________________________________________
					 (Dont skip any of the videos)


- Object Oriented Programming
	
	- This is a STYLE or STRATAGY of developing an application/software. It is a methodolgy.

	- Other methodolgies consist of structure programming, procedural programming, modular programming, and aspect oriented programming. 

 	- OOP deals with INTERNAL designing, NOT EXTERNAL.
 	- In no way is it related to the user of the software but the users but moreso intended for the programmers of said software.
 	

- C programming supports PROCEDURAL and MODULAR programming 


- Say you're developing an app for a bank:


Modular Programming: 
____________________

	- openAcc()
	- deposit()
	- withdraw()
	- checkbal()
	- applyloan()

		* As you can see we are using nothing but functions, the user of this application will be utilyzing the above functions  



Object-Oriented Programming: 
____________________________


- GOVT  <- software

	 	- The items listed below are departments

	
	* Electric
		newConnection()  <- functions
		close() 		 <- functions
		billPay()

	* Water


	* Education  <- Objects


	* Transport


	* Banks
		deposit() 		<- functions
		withdraw()     



 - A complete system/software is complete set of objects, each function has its own functions as well as data related to those funnctions




 			______________________________________________

				 	Principles of Object-Oriented 
			______________________________________________


SET OF PRINCIPLES:



1. Abstraction	 


2. Ecapsulation
	
		- Data Hiding


3. Inheritance


4.Polymorphism




- There are TWO elements of programming:
	 
	 1. Data

	 2. Functions()


  

class myClass
{
	private:
	 	1. Data

	public: 	
		2. Functions	

}


- The only user of a class is programmer (for an outside user does not need to know how the said item works only its functions) 

- When a class helps the class keep the function and the data together that is encapsulation




			______________________________________________

						 	Class vs Object 
			______________________________________________

- class is coming from classification

- Objects belong to cars

- So classes contain data (which are properties) and functions




			______________________________________________

						 	Writing a class
			______________________________________________


#include <iostream>
using namespace std;

// by Defualt all the functions within the class will be labeld as PRIVATE
class rectangle
{

public:

	int length; // 2 bytes
	int breadth; // 2 bytes
	
	int area() // functions occupy zero memory space
	{
		return length * breadth;
	}

	
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};


int main()
{

// creating our object
rectangle r1,r2;
int x,y;

cout << "Please enter the dimensions: " << endl;
cin >> x >> y;

// We ve assigned the user input (x,y) to .length and .breadth of r2
// which r2 is the object of rectangle(class)
r2.length = x;
r2.breadth = y;

// We got to use dot operators to access the members
r1.length = 10;
r1.breadth = 5;

cout << "The area of R1 is: " << r1.area() << endl; 
cout << "The parimeter of R1 is: " << r1.perimeter() << endl; 

cout << "The area of R2 is: " << r2.area() << endl; 
cout << "The parimeter of R2 is: " << r2.perimeter() << endl; 



return 0;
}


// r1 and r2 will  both  consist of 4 bytes of memory






			******** MEMORY ********




	HEAP:




	STACK:
		 r1 -- 10,5
		 r2 -- 15,10


	CODE:

		AREA, PERIMETER, MAIN()





			______________________________________________

						  Pointer to Object
			______________________________________________



  // See chapter README.md for NOTES
#include <iostream>
using namespace std;


class rectangle
{

public:

	int length; 
	int breadth;
	
	int area()
	{
		return length * breadth;
	}
	
`
};


int main()
{

// r is consuming 4 bytes (for length(2 bytes) and perimeters(2 bytes) within rectangle)
// This object is created in stack 
rectangle r;

// Creating a pointer 
rectangle *p;
// assigning the address of r to our p pointer
//p = &r;

// This will put object in HEAP memory
p = new rectangle;

// A pointer called 'q' which has created another object in the heap memory
// Though there is currently no name to said pointer
rectangle *q = new rectangle(); 

// we can now use our pointer to access our class memebers 
// arrow operator or a dereferencing operator 
// This is used to access the memory 
p -> length = 15;
p -> breadth = 10;

// Our pointer will now access the functions within the 'rectangle' class
cout << p -> area() << endl;
cout << p -> perimeter() << endl;

return 0;
}

			______________________________________________

					Philosophy Behind Data Hiding
			______________________________________________


- Data hiding is related to encapsulation 

- DATA within classes should not be punblic, for data may be mishandled outside of the class


			______________________________________________

						Data Hiding in C++
			______________________________________________

# Property Function

public:

# SET... / Considered an ACCESSOR
	void setLeng(int l)
	{	

		if(l >= 10)
 			length = l;
		}
		else if(l < 10)
		{
			cout << "You suck!" << endl;
		}	
	}

	void setBread(int b)
	{	
		// here length will take in an argument
		breadth = b;
	}

# GET... / Considered MUTATOR
	int getLeng()
	{
		return length;
	}

	int getBread()
	{
		return breadth; 
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}
}; 


			______________________________________________

					  Philosophy Behind Constructors
			______________________________________________



# That the following are considered overloader constructors
# Examples below will be linked to the class within 
# getting the room dimensions.cpp

- Object orientation is more philsophy



CONSTRUCTORS: 

# Default Constructor:
	
		roomDim r1; 

// Building constructor
// This creating the an object witin your main func. This will include the  
// variables within said function but will only include junk values


# Non-parameterized Constructor:

		class roomDim
		{
			private:
				int length;
				int breadth;

			public:

			roomDim()
			{
				length = 0;
				breadth = 0;
			}	
		}

		// Here when called, you will not get get garbage values but valid 
		// values

# Parameterized Constructor:

		class roomDim
		{
			private:
				int length;
				int breadth;

			public:

			roomDim(int l,int b)
			{
				length = l;
				breadth = b;
			}	



# Copy Constructor:

		class roomDim
		{
			private:
				int length;
				int breadth;

			public:


# We have made a function that consists of the values of one object within in 
# your main function, and may be assigned to a new object    
			roomDim(roomDim &r)
			{
				length = r.length;
				breadth = r.breadth;
			}	



		int main(){





# Parameterized Constructor
		roomDim r1(15,10);

## Copied constructor
## This will copy the values of r1 though will as its own(new) object
		roomDim r2(r1);  


		return 0;	
		} 




			______________________________________________

							Deep Copy Constructor
			______________________________________________




#include<string>
#include<cmath>
using namespace std;


class test{

int a;
int *p;

test(int x)
{
	a = x;
# Dynamic memory
	p = new int[a]	
}

test(test &t)

	a = t * a;
# p = t * p; <- Need to create a new array
# Dynamic memory	
	p = new int[a];
}


}; 


int main()
{

return 0;
}


			______________________________________________

					Types of Functuions in a Class
			______________________________________________


class rectangle{
private:
	int length;
	int breadth;

public:

### constructs
	
# Non parameterized constructor
	rectangle();

# Parameterized constructor
	rectangle(int l); 

# Copy constructor
	rectangle(rectangle &r);

# Mutators method
	void setLength(int l);

# Accessor method
	void getLength(int l);

# Facilitators
	int area();
	int perimeter();

# Deconstructor function
	~rectangle();

};




			______________________________________________

						Scope Resolution Operator
			______________________________________________


			class rectangle
			{	
			private:
				int length;
				int breadth;
			
			public;
				int area()
				{
					return length * breadth;
				}   
				int perimeter();

			 	
			}; 
				
				
				int rectangle
				{
					return 2 * (length + breadth);
				}
