																			C++ Classes and Objects

	// Just another surprising reminder that C++ is an object oriented programming languge, so its only fair that its added that EVERYTHING C++ is associated with classes and objects

  // For example; in real life, a car is an (object), the car has (attributes) such as WEIGHT and COLOR. And (METHODS) such as DRIVE amd


		Attributes and Methods are basically (variables) and (functions) that belong to a class. These are oftern refferred to as "CLASS MEMBERS"

		class 
			|
			|		<= A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a blue-print for creating objects
			|
			|
			|_ Functions
			|_ Variables

					// Side NOTE: CLASS kind of remind me of what TABLES are to SQL

			CREATE A CLASS 

				To create a class, use. the class keyword:

						class myClass { // The (class) // OBJECT
						 	public: 	//Access specifier
						 		int myNum;	// Attribute (int varibale)
						 		string myString; // Attribute (string variable)
							};

							- (class) keyword: is used to create a class called my (myClass). Similar to how a user creates a FUNCITON (though it is missing the (parameters))
							- (public) keyword: is an ACCESS SPECIFIER, which specify the mememers (attributs and methods) of the class are are accessible from outside your class
							- Inside the class, there is an int variable titled myNum (with no value), when variables are declared WITHIN a class, they are called ATTRIBUTES
							- AND OF COURESE, end the class definition with a semicolon ;.


		    CREATE AN OBJECT

		    - In C++ an object is created from a class. We have already created a class named (myClas), so we can now use this to create objects.

		    - To create an object of (myClass), specify the class name, followed by the object name.

		    - To access the class attributes (myNum) and (myString) use the dot syntax (.) on the object



		 #include <iostream>
		 #include <string>
		 #include <cmath>
		 using namespace std;
		 
		 
		 class myClass { // Class has been created with an identifier
		  public: // Allows the specifier to be located
		   int myAge; // ATTRIBUTE ((valuelesss int variable))
		    string myGreet; // ATTRIBUTE ((valuelesss STRING variable))
		 }; 
		 
		 
		 int main() {
		 
		 	myClass myObj; //object has now been created and linked to class (myClass)
		 	
		 	myObj.myGreet = "My name is Edgar Ortega I am ";
		 	myObj.myAge = 28;
		 
		 cout << myObj.myGreet;
		 cout << myObj.myAge << endl;
		 
		 
		 return 0;
		 }
		 
		 // OUTPUT:
		 // My name is Edgar Ortega I am 28




		 // IN the example below we use not only a custom object and class, but a function as well



		 #include <iostream>
		 #include <cmath>
		 #include <string>
		 using namespace std;
		 
		 string CustomerGeetYear() {
		 	return "The year my car was made was: ";
		 
		 } 
		 
		 
		 string CutomerGreetModel() {
		 	return "The car model is: ";
		 }
		 
		 
		 
		 class usCars {
		 	public:
		 		int carYear;
		 		string model;
		 		string carMake;
		 };
		 
		 
		 int main(){
		 
		 	usCars newCar;
		 	 newCar.carMake = "Tesla";
		 	 newCar.model = "Model 3";
		 	 newCar.carYear = 2020;
		 	 
		 	usCars oldCar; 
		 	 oldCar.carMake = "Toyota";
		 	 oldCar.model = "Prius";
		 	 oldCar.carYear = 2010;
		 
		 
		 cout << CustomerGeetYear() << newCar.carYear << endl; 
		 cout << CutomerGreetModel() << oldCar.model << endl;
		 
		 
		 
		 return 0;	
		 }



		 												C + +  C lass  ME THODS  

 - Class methods are functions that belong to the class




