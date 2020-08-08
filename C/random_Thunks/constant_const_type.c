

#include <stdio.h>


extern float x,y,z; //(external) declaring (float) type variables

int main(){ 

	float x; // calling(?) external (float) type variales 
	float y; // calling(?) external (float) type variales
	float z; // calling(?) external (float) type variales

	x = 100.0; // defining called variables
		
	y = 33.53; // defining called variables

	z = 500.0; // defining called variables
	
	const float SUM = x - y; // declaring/defining constants with (const) types 
	const float DICE = z / SUM; // declaring/defining constants with (const) types 
		 
	//printf("%f\n", SUM);	// TESTER print -- JANKY, i knows

	printf("Current score is: %f\n", DICE); // OUTPUT: Current score is: 7.522190

 return 0;
}

// OUTPUT: Current score is: 7.522190