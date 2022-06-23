#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define isWub s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'
int main(void){
	int i, mark(1);
	string s;
	cin>>s;
	for(i=0; i<s.length(); i++){
		if(isWub){
			if(mark==1){
				s.replace(i, 3, " ");
				mark=0;
			}
			else{
				s.erase(i, 3);
				i--;
			}
		}
		else{
			mark=1;
		}
	}
	s[0]==' '? cout<<s.erase(0, 1): cout<<s;
	return 0;
}
