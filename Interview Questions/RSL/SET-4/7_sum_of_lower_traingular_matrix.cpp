//1.print the sum of elements of lower triangular matrix
//0  1  2  3
//4  5  6  7
//8  9  10 11
//12 13 14 15
//sum=0+4+5+8+9+10+12+13+14+15=90

#include<bits/stdc++.h>
using namespace std;

void solve(int matrix[4][4], int row, int col){
	int sum=0;
	for(int i=0; i<row; i++){
		for(int j=0; j<=i; j++){
			sum += matrix[i][j];
		}
	}
	cout<<"Sum: "<<sum;
}

int main(){
	int matrix[][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}, {12, 13, 14, 15}};
	solve(matrix, 4, 4);
	return 0;
}
