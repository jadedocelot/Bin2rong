#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){


int x[2][3],y[2][3],z[2][3];
//int x[2][3] = {{5,5,5},{5,5,5}},y[2][3] = {5,5,5},{5,5,5}},z[2][3];
for (int r = 0;r < 2;r++){
	for(int c = 0;c < 3;c++){
		cout << c + 1 << ". Enter a number for your x matrice: ";
		cin >> x[r][c];
	}
	cout << endl;
}

for (int r = 0;r < 2;r++){
	for(int c = 0;c < 3;c++){
		cout << c + 1 << ". Enter a number for your y matrice: ";
		cin >> y[r][c];
	}	
 	cout << endl;
 }

for (int r = 0;r < 2;r++){
	for(int c = 0;c < 3;c++){
		z[r][c] = x[r][c] * y[r][c];

		}
	}

for (int r = 0;r < 2;r++){
	for(int c = 0;c < 3;c++){
		cout << z[r][c] << endl;
	}
}


return 0;
}


// OUTPUT


/*

1. Enter a number for your x matrice: 5
2. Enter a number for your x matrice: 5
3. Enter a number for your x matrice: 5

1. Enter a number for your x matrice: 5
2. Enter a number for your x matrice: 5
3. Enter a number for your x matrice: 5

1. Enter a number for your y matrice: 5
2. Enter a number for your y matrice: 5
3. Enter a number for your y matrice: 5

1. Enter a number for your y matrice: 5
2. Enter a number for your y matrice: 5
3. Enter a number for your y matrice: 5

25
25
25
25
25
25

*/