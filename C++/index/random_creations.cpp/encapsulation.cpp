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
int x,stable_speed,emergency_speed_reduction = 30;

carBackup speed_Monitoring;
//speed_Monitoring.backupBrake(emergency_speed_reduction,x)
//(emergency_speed_reduction,emergency_speed_reduction)
cout << "What is your current speed? ";
cin >> x;

if (x > 95){
    // int error_Speed = x;
    speed_Monitoring.backupBrake(x,emergency_speed_reduction);
    cout << "Your speed has been reducted: " << speed_Monitoring.current_speed() << "MPH" << endl; 
} else{
	stable_speed = x;
    cout << "You're driving at a stable speed of: " << stable_speed << "MPH" << endl;
}
//cout << error_Speed; // Removing this line will only output 30 
/*
if (error_Speed > 95){
	cout << speed_Monitoring.current_speed() << endl;
} else{
	cout << stable_speed << endl;
}

*/
return 0;
}
