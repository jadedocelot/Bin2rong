
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

// global variable
//int uniNum = 0;


template<class t>
t switch_board(t arg){
	switch(arg)
	{
	case 1:
		cout << "1™" << endl;
		
		break;
	case 2:
		cout << "2™" << endl;
		break;
	case 3:
		cout << "3™" << endl;
		break;
	}
 }


int main(){

int (*fp)(int);
fp = switch_board;

int user_in;

cout << ".........." << endl;
cin >> user_in;

(fp)(user_in);





return 0;
} 