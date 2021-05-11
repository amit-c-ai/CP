#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int i, j, row, col, arr[5][5];
	for(i=0; i<5; i++){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3]>>arr[i][4];
		for(j=0; j<5; j++){
			if(arr[i][j]==1){
				row = i+1;
				col = j+1;
			}
		}
	}
	cout<<abs(row-3) + abs(col-3);
}
