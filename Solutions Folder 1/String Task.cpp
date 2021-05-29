#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define isVowel(ch) ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y' ||\
					ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y'
int main(void){
	int i;
	string s, new_s;
	cin>>s;
	for(i=0; i<s.length(); i++){
		if(isVowel(s[i])){
			continue;
		}
		else{
			new_s += '.';
			new_s += tolower(s[i]);
		}
	}
	cout<<new_s;
	return 0;
}
