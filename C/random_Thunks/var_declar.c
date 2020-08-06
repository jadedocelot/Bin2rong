#include <stdio.h>

extern int x; 
extern int y;
extern float fundsOne;
extern float fundsTwo;


int main(){

int x;
int y; 
double fundsOne; 
float sum;


x = 32; 
y = 54; 

fundsOne = 19.32;

sum = x * fundsOne;

printf("Your pay for Tuesday is : %f",sum);


return 0; 	
}