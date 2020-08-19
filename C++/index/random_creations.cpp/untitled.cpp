
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class carBackup {
private:
	int emergency_brake_speed;
};



class carBackup_implemented { // Setter
public:
	void backupBrake(int x, int y){
		emergency_brake_speed = x - y;
	}
public: // Getter
	int current_speed(){ 
		return emergency_brake_speed;
	}

};


int main(){

int errorSpeed;
// int speedDecrease = 30;

// carBackup_implemented myCar;

cout << "What is your current speed? ";
cin >> errorSpeed;
cout << errorSpeed;






return0
}
