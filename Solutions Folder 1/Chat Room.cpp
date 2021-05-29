#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, mark=0;
	string s;
	cin>>s;
	for(i=0; i<s.size(); i++){
		if(s[i]=='h' && mark==0)
			mark++;
		else if(s[i]=='e' && mark==1)
			mark++;
		else if(s[i]=='l' && mark==2)
			mark++;
		else if(s[i]=='l' && mark==3)
			mark++;
		else if(s[i]=='o' && mark==4){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
