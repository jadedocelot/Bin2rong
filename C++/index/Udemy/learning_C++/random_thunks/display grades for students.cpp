// Display Grades for Students

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

float a,b,c;
float avg,sum;

	cout << "Please enter in your most recent 3 scores to Determine";
	cin >> a >> b >> c; 

avg = a + b + c; 
sum = avg / 3; 

	if (sum >= 60 ){
		cout << "A" << endl;
	} 
	else if (sum >= 35 && sum < 60) {
		cout << "B" << endl;
	}
	else if (sum < 35){
		cout << "C << endl;			
	} 

return 0;	
}




