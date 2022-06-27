// 3] Write a function that takes a string as an input and you have to
// return the frequency of characters.

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int n=s.length(), arr[26]={0};
    for(int i=0; i<n; i++){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i]!=0){
            cout<<char(i+'a')<<": "<<arr[i]<<"\n";
        }
    }
}

int main(){
    string s="this string contains many alphabets";
    solve(s);
    return 0;
}