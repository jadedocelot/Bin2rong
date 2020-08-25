// untitled.cpp 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Base Class
class employeeId {
 protected:
	int emp_ID;	
};

// Derived class
class user_admin: public employeeId {
 public:
	//int logIn;
	void setEmployeeID(int x){
		emp_ID = x;
	}
	int Edgar_SetID(){
		return emp_ID;
	}
}; 


int main(){

user_admin edgars_ID; // (user_admin) object created
edgars_ID.setEmployeeID(760448); 

	cout << "Edgar Ortegas employee ID: " << edgars_ID.Edgar_SetID() << endl; 

return 0;	
}

// OUTPUT: Edgar Ortegas employee ID: 760448

////// W3school example
/*
#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}
*/