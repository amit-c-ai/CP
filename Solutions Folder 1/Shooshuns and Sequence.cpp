#include<bits/stdc++.h>
using namespace std;
#define pb push_back

bool isequal(vector<int> v){
	for(int i=1; i<v.size(); i++){
		if(v[i]!=v[i-1])
			return false;
	}
	return true;
}

int main(void){
	int n, k, temp, last=0, count=1;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>temp;
		if(temp==last){
			count++;
		}
		else{
			count=1;
		}
		last = temp;
	}
	(count+k > n)?cout<<n-count:cout<<"-1";
	return 0;
}
