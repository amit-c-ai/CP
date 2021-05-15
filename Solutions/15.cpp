#include<bits/stdc++.h>
#include<iostream>
#define all(x) x.begin(), x.end()
using namespace std;
int main(void){
	int n, i;
	float sum, max, temp;
	vector<float> v;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>temp;
		v.push_back(temp);
	}
	cout<<((accumulate(all(v), 0))/(n*100.0)) * 100;
}
