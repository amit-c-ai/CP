#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
typedef vector<int> vi; 
int main(void){
	int i,temp, count=3;
	vi v;
	for(i=0; i<4; i++){
		cin>>temp;
		v.pb(temp);
	}
	sort(all(v));
	for(i=0; i<3; i++){
		if(v[i]!=v[i+1]){
			count--;
		}
	}
	cout<<count;
	return 0;
}
