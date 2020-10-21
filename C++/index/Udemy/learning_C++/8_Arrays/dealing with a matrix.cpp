// In the example below we adding up a matrix 

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
int y[2][3] = {{6,9,10},{7,9,8}};
int x[2][3] = {{4,2,3},{2,5,3}};
int z[2][3];

for (int r = 0;r < 2;r++){
	for (int c = 0;c < 3;c++){
			z[r][c] = y[r][c] % x[r][c];

			cout << z[r][c];
	}
	cout << endl;
}



return 0;	
} 

// OUTPUT:
// 9813
// 6510