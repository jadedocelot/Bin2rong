
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class carBackup {
private:
	int emergency_brake_speed;

public:
	void backupBrake(int x, int y){
		emergency_brake_speed = x - y; /// Its not subtracting speed but rather outputting safety redution 
	}

	int current_speed(){ 
		return emergency_brake_speed;
	}
};

int main(){
int x;
int stable_speed;
int emergency_speed_reduction = 30;
int error_Speed;	

carBackup speed_Monitoring;
speed_Monitoring.backupBrake(emergency_speed_reduction,error_Speed);
//(emergency_speed_reduction,emergency_speed_reduction)
//(emergency_speed_reduction,emergency_speed_reduction)
cout << "What is your current speed? ";
cin >> x;

if (x > 95){
	error_Speed = x;
} else{
	stable_speed = x;
}

cout << error_Speed;

if (error_Speed > 95){
	cout << speed_Monitoring.current_speed() << endl;
} else{
	cout << stable_speed << endl;
}


return 0;
}

