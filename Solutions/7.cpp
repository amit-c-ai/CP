#include<bits/stdc++.h>
#include<iostream>
#define all(a) a.begin(),a.end()
using namespace std;
int main(void){
	int i, u=0, l=0;
	string s;
	cin>>s;
	for(i=0; i<s.length(); i++){
		if(isupper(s[i]))
			u++;
		else
			l++;
	}
	if(l>=u){
		transform(all(s), s.begin(), ::tolower);	
		cout<<s;
	}
	else{
		transform(all(s), s.begin(), ::toupper);
		cout<<s;
	}	
	return 0;
}
