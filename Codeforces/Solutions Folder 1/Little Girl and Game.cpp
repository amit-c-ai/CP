#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n = s.size(), odd=0, i;
	int count[30];
	for(i=0; i<30; i++){
		count[i]=0;
	}
	for(i=0; i<n; i++){
		count[s[i]-'a']++;
	}
	for(int i=0; i<26; i++){
		if(count[i]&1)
			odd++;
	}
	if(odd==0 || (odd&1))
		cout<<"First";
	else
		cout<<"Second";
		
	return 0;
}
