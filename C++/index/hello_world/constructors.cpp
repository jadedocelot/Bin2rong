		C++ CONSTRUCTORS


- A constructor in C++ is a (special method) that is automatically called when an object of a class is created

- To create a constructor, use the same name as the class, followed by parantheses ()


class myClass { // The class
 public: // Access specifier
 	myClass() { // Constructor
 		cout << "Hello C++"
 	} 
};


int main(){
	
	myClass myObj; // Create an object of the (MyClass) (this will call the constructor) 

return 0;	
}



// My Example:
// Random_thunks/untitled.cpp

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class myClass {
 public:
    myClass(){
        cout << "Hello Constructor!" << endl;
     
     }

}; 


int main(){
    myClass myObj;


return 0;
} 



// The constructor has the same name as the class, it is always (public), and it does not not have any return value.

_______________________________________________________________________________

								
								Constructor Parameters

- The Constructors can also take prarameters(just like regular functions)
	- Which can be useful for setting initial values for attributes

- The following class have 'brand', 'model', and 'year' attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand = x, etc). When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:
_______________________________________________________________________________


#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Car { 	// The class
 public:	   // Access specifier
 	string brand; // Attribute
 	string model; // Attribute
 	int year; 	 // Attribute
 	Car(string x, string y, int z){ // Constructor with parameters
 		brand = x;  // "arguments" for (car) parameters
 		model = y;	// "arguments" for (car) parameters
 		year = z;	// "arguments" for (car) parameters
 		}
};

int main() {
	// Created Car objects and call the constructor with different values
	Car timsCar("BMW","XW", 1999);
	Car mikesCar("Ford","Mustang",1978);


	// Print values
	cout << "Tims  car: "<< endl << "Brand: " << timsCar.brand << " Model: " << timsCar.model <<  " Year: "<< timsCar.year << endl;
	
	cout << endl;

	cout << "Mikes car: "<< endl << "Brand: " << mikesCar.brand << " Model: " << mikesCar.model <<  " Year: "<< mikesCar.year << endl;

return 0;
}

/*
// OUTPUT:

Tims  car:
Brand: BMW Model: XW Year: 1999

Mikes car:
Brand: Ford Model: Mustang Year: 1978

*/ 

_______________________________________________________________________________
// EXAMPLE 2

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class dinnerChoices {
 public:
 	string mainCourse; 
 	string sideCourse;
 	string desert;
 	float sumCost;

 	dinnerChoices(string x, string y, string z, float s){
 		mainCourse = x;
 		sideCourse = y;
 		desert = z; 
 		sumCost = s;
 	}
};


int main(){

dinnerChoices alex_dinner("pizza","salad","chocolate cakes",23.22);
dinnerChoices dans_dinner("pasta","salad","puding",25.00);

cout << "Dans dinner choices" << endl;
cout << "Main course: " << dans_dinner.mainCourse << endl;
cout << "Side Course: " << dans_dinner.sideCourse << endl; 
cout << "Desert: " << dans_dinner.desert << endl;
cout << "Total Sum: " << dans_dinner.sumCost << endl;

cout << endl;

cout << "Alexs dinner choices:" << endl;
cout << "Main course: " << alex_dinner.mainCourse << endl;
cout << "Side Course: " << alex_dinner.sideCourse << endl;
cout << "Desert: " << alex_dinner.desert << endl;
cout << "Total Sum: "<< alex_dinner.sumCost << endl;

return 0; 	
} 



// OUTPUT: 

Dans dinner choices
Main course: pasta
Side Course: salad
Desert: puding
Total Sum: 25

Alexs dinner choices:
Main course: pizza
Side Course: salad
Desert: chocolate cakes
Total Sum: 23.22

_______________________________________________________________________________


// Below you will see an (inside) method
// I was wondering what the difference between a method and constructor
_________________________________

#include<iostream>
#include<cmath>
#include<string>
using namespace std;


class const_car {
public:
	void dans_constant(string x){ 
		cout << "Dan's car: " << x << endl;
	}

}; 


int main(){

 const_car dans_car; 

	dans_car.dans_constant("BMW");


return 0; 	
}