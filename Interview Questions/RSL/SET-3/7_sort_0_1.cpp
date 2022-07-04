//25] Array contains only 0 and 1, Write a program that sort this numbers
//using single loop

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
	int low=0, high=n-1;
	while(low<=high){
		while(arr[low]==0){
			low++;
		}
		while(arr[high]==1){
			high--;
		}
		if(low<high){
			swap(arr[low], arr[high]);
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={1, 0, 0, 1, 1, 0, 1, 1, 0, 1}, n=sizeof(arr)/sizeof(arr[0]);
	solve(arr, n);
	return 0;
}
