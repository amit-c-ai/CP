#include<bits/stdc++.h>
using namespace std;
int main(void){
	long long i, n, min, index=1, repeat=0;
	cin>>n; long long arr[n];
	cin>>arr[0]; min=arr[0];
	if(n==1){
		cout<<"1"; return 0;
	}
	for(i=1; i<n; i++){
		cin>>arr[i];
		if(arr[i]<min){
			min=arr[i]; index=i+1; repeat=0;
		}
		else if(arr[i]==min){
			repeat=1;
		}
	}
	if(repeat==1)
		cout<<"Still Rozdil";
	else
		cout<<index;
	return 0;
}
