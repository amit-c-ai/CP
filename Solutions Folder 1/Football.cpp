#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, n, count(0), mark(1);
	string s, other;
	cin>>n;
	vector<string> vs;
	for(i=0; i<n; i++){
		cin>>s;
		vs.push_back(s);
		if(vs[i]==vs[0]){
			count++;
		}
		else if(mark==1){
			other.assign(vs[i]);
			mark=0;
		}
	}
	if(count>(n/2))
		cout<<vs[0];
	else
		cout<<other;
	return 0;
}
