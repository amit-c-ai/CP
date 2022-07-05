//27] Print all substrings which have no repeating characters

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	int arr[27]={0}, flag, count=0, countsub=0;
	string ans;
	for(int i=0; s[i]!='\0'; i++){
		for(int j=i+1; s[j]!='\0'; j++){
			ans = "";
			flag=1;
			for(int k=i; k<=j; k++){
				if(arr[s[k]-'a']==1){
					flag=0;
					break;
				}
				ans += s[k];
				arr[s[k]-'a']++;
			}
			if(flag==1){
				cout<<ans<<"\n";
			}
			for(int k=i; k<=j; k++){
				arr[s[k]-'a']=0;
			}
			if(flag==0){
				break;
			}
		}
	}
}

int main(){
	string s="hellorajasoftwarelabs";
	solve(s);
	return 0;
}
