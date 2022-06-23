#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
int main(void){
	int i, k, count(0);
	char ch;
	string s, new_s;
	cin>>k>>s;
	sort(all(s));
	for(i=0; i<s.length(); i++){
	    if(i%k==0){
	       ch=s[i];
		   new_s.pb(ch); 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(count==s.length() && count%k==0){
		for(i=0; i<k; i++){
			cout<<new_s;
		}
	}else{
		cout<<"-1";
	}
	return 0;
}
