//Q) In a marathon participants are at different position. Given an array containing time of completion
//of race by different participants. Rank is defined as minimum time taken is at rank 1, if two players
//having same time of completion, then both of their ranks are equal. Given time of completion as input,
//determine player's rank.

#include<bits/stdc++.h>
using namespace std;

void solve(float arr[], int n, float time){
	int rank=1;
	if(time<=arr[0]){
		cout<<"Rank: "<<rank;
		return;
	}
	for(int i=1; i<n; i++){
		if(arr[i]!=arr[i-1]){
			rank++;
		}
		if(time<=arr[i]){
			break;
		}
	}
	cout<<"Rank: "<<rank;
}

int main(){
	float arr[]={5.5, 6, 7, 7, 8.2, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	float timeCompletion;
	cin>>timeCompletion;
	solve(arr, n, timeCompletion);
	return 0;
}
