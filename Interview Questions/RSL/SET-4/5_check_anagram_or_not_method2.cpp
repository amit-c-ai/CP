#include<bits/stdc++.h>
using namespace std;

bool solve(string a, string b){
	int n=a.length();
	if(n != b.length()){
		return false;
	}
	int arr[27]={0};
	for(int i=0; i<n; i++){
		arr[a[i]-'a']++;
	}
	for(int i=0; i<n; i++){
		arr[b[i]-'a']--;
	}
	for(int i=0; i<27; i++){
		if(arr[i]!=0){
			return false;
		}
	}
	return true;
}

int main(){
	string a="listen", b="silent";
	if(solve(a, b)){
		cout<<"Anagram";
	}
	else{
		cout<<"Not Anagram";
	}
	return 0;
}
