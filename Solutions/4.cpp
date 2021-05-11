#include<iostream>
using namespace std;
int main(void){
	int i;
	string s;
	cin>>s;
	for(i=0; i<s.length(); i++){
		if(s[i]=='.')
			cout<<'0';
		else if(s[i]=='-' && s[i+1]=='.'){
			cout<<'1';
			i++;
		}
		else if(s[i]=='-' && s[i+1]=='-'){
			cout<<'2';
			i++;
		}
	}
}
