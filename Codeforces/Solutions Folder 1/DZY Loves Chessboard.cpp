#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,n,m;
	string s;
	cin>>n>>m;
	while(n--){
		cin>>s;
		for(i=0; i<s.size(); i++){
			if(n%2==0){
				if(s[i]=='.'){
					if(i%2==0)
						cout<<"W";
					else
						cout<<"B";
				}
				else
					cout<<s[i];
			}
			else{
				if(s[i]=='.'){
					if(i%2==0)
						cout<<"B";
					else
						cout<<"W";
				}
				else
					cout<<s[i];
			}
		}cout<<"\n";
	}
	return 0;
}
