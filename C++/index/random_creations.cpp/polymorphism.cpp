// C++ Polymorphism

- Polymorphism means "means forms"
	* It occurs when we have many classes that are related to each other by inheritence

- How Inheritences were explained in the last chapter, inheritence allow us to inherit methods from another class

//- Polymorphism allows us to use those methods to perform different tasks. 
	
	//	* This allows the users to perform a single action in different ways

	// FOR EXAMPLE:

	//	- Think of a (BASE) called "animal" that has a method called animalSound()


	//		* Derived classes of Animals could be Pigs, Cats, Dogs, Birds - and they  a;so have their own implementation of animals sound (pig oink, and the cat meows, etc)

// Example


	#include <iostream>
	#include <string>
	#include <cmath>
	using namespace std;

	// Base class
	class animal_farm {
 	 public:
 		void animalSound() {
 			cout << "The animal makes a sound\n";
 		}
		};
	// Derived class
	class pig : public animal_farm {
	 public:
 		void animalSound(){
 			cout << "The pig says: Wee Wee\n"; // As you can see here we can override the (cout) that was assigend to out base class "animal_farm"
 		} 
		};
	// Derived class
	class dog : public animal_farm {
 	 public:
	 	void animalSound(){
 			cout << "The dog says: Bark Bark\n"; // And we overide the "animal_farm" class once again 
 		}
		};


	int main(){

		animal_farm chosenAnimal; //base class object
		pig Pig; // derived class object
		dog Dog; // derived class object
		
		chosenAnimal.animalSound();// 
		Pig.animalSound(); // The pig says: Wee Wee
		Dog.animalSound(); //The dog says: Bark Bark
		
		return 0;	
		}
