#include<iostream>
#define isOdd(a) a%2==1
using namespace std;
int main(void){
	int arr[3][3], i, j;
	int trr[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>arr[i][j];
			if(isOdd(arr[i][j])){
				trr[i][j] = !trr[i][j];
				if(i<2){
					trr[i+1][j] = !trr[i+1][j];
				}
				if(j<2){
					trr[i][j+1] = !trr[i][j+1];
				}
				if(i>0){
					trr[i-1][j] = !trr[i-1][j];
				}
				if(j>0){
					trr[i][j-1] = !trr[i][j-1];
				}
			}
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<trr[i][j];
		}
		cout<<endl;
	}
	return 0;
}
