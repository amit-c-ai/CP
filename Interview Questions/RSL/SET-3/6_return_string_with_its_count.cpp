//22] For “aabcccccaaa” input, your method will return “a2b1c5a3” but for
//“abcd” input, your
//method will return “abcd”

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int count=1, i, flag=0;
	string ans="";
	for(i=1; s[i]!='\0'; i++){
		if(s[i]==s[i-1]){
			flag=1;
			count++;
		}
		else{
			ans += s[i-1];
			ans += to_string(count);
			count=1;
		}
	}
	if(flag==0){
		cout<<s;
	}
	else{
		ans += s[i-1]; ans += to_string(count);
		cout<<ans;		
	}
}

int main(){
	string s="aabcccccaaa";
	solve(s);
	return 0;
}
