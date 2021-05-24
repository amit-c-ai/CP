#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
	ll i, l=0, r=0;
	ll n,m;
	cin>>n;
	ll p[n];
	ll arr[n+1];
	arr[0]=0;
	for(i=0; i<n; i++){
		cin>>p[i];
		arr[p[i]]=i+1;
	}
	cin>>m;
	for(i=1; i<=m; i++){
		ll temp; cin>>temp;
		l=l+arr[temp];
		r=r+(n-arr[temp]+1);
	}
	cout<<l<<" "<<r;
	return 0;
}
