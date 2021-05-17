#include<bits/stdc++.h>
using namespace std;
#define all(s) s.begin(), s.end()
int main(void){
	int diff;
	string s1, s2;
	cin>>s1>>s2;
	transform(all(s1), s1.begin(), ::tolower);
	transform(all(s2), s2.begin(), ::tolower);
	if(s1.compare(s2)<0)
		cout<<"-1";
	else if(s1.compare(s2)>0)
		cout<<"1";
	else 
		cout<<"0";
	return 0;
}
