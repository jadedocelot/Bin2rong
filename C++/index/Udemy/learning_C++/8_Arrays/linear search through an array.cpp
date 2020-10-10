
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
int z;
int i = 0;
int x;
int arr[] = {32,422,43,246,2,900,54,3,23,21,212,53,44,7};

cout << "Please enter the number you are searching for: " << endl;
cin >> x; 

for(int i = 0;i < 14;i++){
	if (arr[i] == x){
		z = arr[i];
		cout << "Success!" << endl;
		break;		
	}
}

if (z != x){ 
	cout << "Not Successful..." << endl;
}

return 0;	
}
