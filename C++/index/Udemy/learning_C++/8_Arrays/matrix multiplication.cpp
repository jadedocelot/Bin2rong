
#include <iostream>
#include <string>
#include <cmath>
using namespace std; 


int main(){

int a[10][10], b[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
	
	// Storing elements for matrix 1 and 2
	cout << "Enter rows and columns for the first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for the second matrix: ";
	cin >> r2 >> c2;

	if(c1!=r2)
	{
		cout << "Cant be multiplied";
		return 0;	
	}

// Storing elements in first matrix
for (i = 0; i < r1;++i){
	for (j = 0;j < c1; ++j){
		cout << "Enter element a" << i + 1 << j + 1 << " : ";
		cin >> a[i][j];
	}
}
// Storing elements in second matrix
for (i = 0; i < r2;++i){
	for (j = 0;j < c2; ++j){
		cout << "Enter element b" << i + 1 << j + 1 << " : ";
		cin >> b[i][j];
	}
}
// multiplying matrix a and b and storing in array mult
for (i = 0; i < r1;++i){
	for (j = 0;j < c2; ++j){
		mult[i][j]=0;
		for(k=0;k < c1;++k){
			mult[i][j] += a[i][k] * b[k][k];
		}
	}
}

// Displaying the mult of two matrix
cout << endl << "Output Matrix" << endl;
for (i = 0; i < r1;++i){
	for(j = 0;j < c2;++j){
		cout << " " << mult[i][j];
		if (j == c2-1){
			cout << endl;
		}
	}
}

return 0;
} 

// OUTPUT
// Enter rows and columns for the first matrix: 2
// 3
// Enter rows and columns for the second matrix: 3
// 2
// Enter element a11 : 32
// Enter element a12 : 4
// Enter element a13 : 32
// Enter element a21 : 4
// Enter element a22 : 3
// Enter element a23 : 2
// Enter element b11 : 3
// Enter element b12 : 4
// Enter element b21 : 5
// Enter element b22 : 4
// Enter element b31 : 3
// Enter element b32 : 2
// 
// Output Matrix
//  112 112
//  24 24