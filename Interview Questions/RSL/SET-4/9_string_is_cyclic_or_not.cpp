//Q) Check whether the given string is cyclic or not i.e. check second
//string is rotation of first string or not

#include<bits/stdc++.h>
using namespace std;

void solve(string s1, string s2){
	s2 += s2;
	int idx=0;
	for(int i=0; s2[i]!='\0'; i++){
		if(s2[i]==s1[idx]){
			idx++;
			if(idx==s1.length()){
				cout<<"Yes it is rotation of first string";
				return;
			}
		}
		else{
			idx=0;
		}
	}
	cout<<"No it is not rotation of first string";
}

int main(){
	string s1="hello", s2="llohe";
	solve(s1, s2);
	return 0;
}

