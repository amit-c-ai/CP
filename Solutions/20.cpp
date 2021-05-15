#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
int main(void){
	int i;
	string str;
	cin>>str;
	for(i=1; i<str.length(); i+=2){
		str.erase(str.begin()+i);
		i--;
	}
	sort(all(str));
	for(i=0; i<str.length(); i++){
		cout<<str[i];
		if(i!=str.length()-1)
			cout<<"+";
	}
	return 0;
}
