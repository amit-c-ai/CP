#include<bits/stdc++.h>
using namespace std;

bool solve(string a, string b){
	int n=a.length();
	if(n != b.length()){
		return false;
	}
	int arr[27]={0}, brr[27]={0};
	for(int i=0; i<n; i++){
		arr[a[i]-'a']++;
	}
	for(int i=0; i<n; i++){
		brr[b[i]-'a']++;
	}
	for(int i=0; i<27; i++){
		if(arr[i]!=brr[i]){
			return false;
		}
	}
	return true;
}

int main(){
	string a="listen", b="silen";
	if(solve(a, b)){
		cout<<"Anagram";
	}
	else{
		cout<<"Not Anagram";
	}
	return 0;
}
