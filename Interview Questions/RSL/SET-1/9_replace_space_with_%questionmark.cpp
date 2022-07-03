#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	string ans="";
	for(int i=0; s[i]!='\0'; i++){
		if(s[i]==' '){
			ans += "%?";
		}
		else{
			ans += s[i];
		}
	}
	cout<<ans;
}

int main(){
	string s="welcome to geeksforgeeks";
	solve(s);
	return 0;
}
