#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	map<char, int> mp;
	for(i=0; i<s1.size(); i++){
		mp[s1[i]]++;	
	}
	for(i=0; i<s2.size(); i++){
		if(s2[i]==' ' || mp[s2[i]]>0){
			mp[s2[i]]--;
		}
		else{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	return 0;
}
