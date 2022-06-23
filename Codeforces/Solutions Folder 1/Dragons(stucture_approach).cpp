#include<bits/stdc++.h>
using namespace std;
struct dragons{
	unsigned int kStrength;
	unsigned int dStrength;
};

bool compare(dragons a, dragons b){
	return a.kStrength<b.kStrength;	
}

int main(void){
	unsigned int i, s, n;
	cin>>s>>n;
	dragons arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i].kStrength>>arr[i].dStrength;
	}
	sort(arr, arr+n, compare);
	for(i=0; i<n; i++){
		if(arr[i].kStrength<s){
			s += arr[i].dStrength;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}


