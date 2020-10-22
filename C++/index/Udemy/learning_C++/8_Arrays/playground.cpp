
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

int dig_net;
int chum_bucket = 0;
int dig_bucket = 0;

int arr[] = {32,422,43,246,2,1,54,3,23,21,212,53,44,7,876}; 

	for (dig_net = 0;dig_net < 15;dig_net++) {
		chum_bucket = chum_bucket + arr[dig_net];	

	}

cout << "You currently have. the following in your pocket: " << chum_bucket << endl;


return 0;
}





					

		



						  ____________________________________
				
							The Multiplication of 2 Matrixes
						  ____________________________________

# In the following example we will be multipling two 2 matrixes
	
	- A Matrix is an array of numbers, which can have a several rows and columns

 						[6  4  24]
 						|1 -9  8 |
 						[32 4  21]

 						- The above matrix has 3 rows and 2 columns

- In the next examples we can


		MATRIX 1 	  	MATRIX 2	
			  a      	    b
			   c1			 c2
		r1	[4,4]  		r2[3,4]
			[5,4]  		  [5,6]




			OUTPUT Matrix:
				36 36
				39 39





// multiplying matrix a and b and storing in array mult
for (i = 0; i < r1;++i){
	for (j = 0;j < c2; ++j){
		mult[i][j]=0; 
		for(k=0;k < c1;++k){
			mult[i][j] += a[i][k] // We will copy the ap[][] matrix into our 
			// blank mult[][] matrix 

			 * b[k][k];
		}
	}
}

	
________________________________________________________________________

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


________________________________________________________________________
