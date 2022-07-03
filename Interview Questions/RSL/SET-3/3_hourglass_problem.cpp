//19] 1] Hourglass problem

#include<bits/stdc++.h>
using namespace std;
const int r=5, c=5;

void solve(int arr[r][c]){
	if(r<3 || c<3){
		cout<<"hourglass not possible";
		return;
	}
	int sum=0, maximum=INT_MIN;
	for(int i=0; i<r-2; i++){
		for(int j=0; j<c-2; j++){
			sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
			if(sum > maximum){
				maximum = sum;
			}
		}
	}
	cout<<maximum;
}

int main(){
	int arr[][c] = {{1, 2, 3, 0, 0},
	               {0, 0, 0, 0, 0},
	               {2, 1, 4, 0, 0},
	               {0, 0, 0, 0, 0},
	               {1, 1, 0, 1, 0}};

	solve(arr);
	return 0;
}
