#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	vector<char> v;
	int count=0;
	cin>>s1>>s2;
	if(s1.size()!=s2.size()){
		cout<<"NO\n"; return 0;
	}int size = s1.size();
	for(int i=0; i<size; i++){
		if(s1[i]!=s2[i]){
			v.push_back(s1[i]);
			v.push_back(s2[i]);
			count++;
		}
		if(count>2){
			cout<<"NO\n"; return 0;
		}
	}
	if(count!=2){
		cout<<"NO\n"; return 0;
	}
	if(v[0]==v[3] && v[1]==v[2]){
		cout<<"YES\n"; return 0;
	}
	cout<<"NO\n"; return 0;
}
