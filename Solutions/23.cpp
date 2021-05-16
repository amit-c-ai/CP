#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(void){
	int i;
	string s;
	cin>>s;
	sort(all(s));
	for(i=1; i<s.length(); i++){
		if(s[i]==s[i-1]){
			s.erase(s.begin()+i);
			i--;
		}
	}
	if(s.length()%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}
