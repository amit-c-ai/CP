#include<iostream>
using namespace std;
int main(void){
	int n, i, count=0;
	string s;
	cin>>n>>s;
	for(i=0; i<s.length(); i++){
		if(s[i]==s[i+1]){
			s.erase(i,1);
			i--;
			count++;
		}
	}
	cout<<count;
	return 0;
}
