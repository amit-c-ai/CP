#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, n, arr[8];
	cin>>n;
	for(i=1; i<=7; i++){
		cin>>arr[i];
		n=n-arr[i];
		if(n<=0){
			cout<<i; return 0;
		}
	}
	while(1){
		for(i=1; i<=7; i++){
			n=n-arr[i];
			if(n<=0){
				cout<<i; return 0;
			}
		}
	}
}
