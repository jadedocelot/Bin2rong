

#include<iostream>
#include<string>
#include<cmath>
using namespace std; 

//
int linear_func(int ar[],int key)
{
	for (int i = 0;i < 6;i++)
		if(key == ar[i])
			return i;	
	return 404;
		
	
}

int main(){

int myAr[] = {32,3,2,4,122},x;

cout << "What number are you looking for? ";
cin >> x;

int index = linear_func(myAr,x);

cout << "Element Found in index: " << index << endl;
	if (index == 404)
	{
		cout << "You are  receiving a 404 becuase number was not located" << endl;
	}	

return 0;
}
