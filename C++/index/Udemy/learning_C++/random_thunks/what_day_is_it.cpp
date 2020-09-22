#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

int x;

Beginning: // Label used to repeat the program
// Need to working on repeating scripts 
  
cout << "What day is it? (enter 1-7):" << endl;

cin >> x; 


if (x == 1){ 
    cout << "Monday" << endl;
}
else if (x == 2){
    cout << "Tuesday" << endl;
}
else if (x == 3){
    cout << "Wednesday" << endl;
}
else if (x == 4){
    cout << "Thursday" << endl;
}
else if (x == 5){
    cout << "Friday" << endl;
}
else if (x == 6){
    cout << "Saturday" << endl;
}
else if (x == 7){
    cout << "Sunday" << endl;
}
else{
	cout << "Not a valid number" << endl;
	{
		goto Beginning;	// Will go back to the beginning (beginning label above)
 	}

} 
		

return 0;
} 
