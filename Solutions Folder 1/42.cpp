#include<bits/stdc++.h>
using namespace std;
#define is_1   (s[i]=='1')
#define is_14  (s[i]=='1' && s[i+1]=='4')
#define is_144 (s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
int main(void){
	int i;
	string s;
	cin>>s;
	for(i=0; i<s.length(); i++){
		if is_144
			i+=2;

		else if is_14
			i+=1;

		else if is_1
			continue;

		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
