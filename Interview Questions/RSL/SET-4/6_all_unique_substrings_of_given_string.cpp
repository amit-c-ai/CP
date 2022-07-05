#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	unordered_set<string> us;
	string ss;
	for(int i=0; s[i]!='\0'; i++){
		ss="";
		for(int j=i; s[j]!='\0'; j++){
			ss += s[j];
			us.insert(ss);
		}
	}
	for(auto i: us){
		cout<<i<<"\n";
	}
}

int main(){
	string s="abcab";
	solve(s);
	return 0;
}
