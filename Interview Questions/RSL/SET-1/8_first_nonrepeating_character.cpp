// 8] Write a function that takes a string as an input and returns the first
// non-repeating character.

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int arr[127]={0};
    for(int i=0; s[i]!='\0'; i++){
        arr[s[i]]++;
    }
    for(int i=0; s[i]!='\0'; i++){
        if(arr[s[i]] == 1){
            cout<<"first non repeating character: "<<s[i];
            return;
        }
    }
    cout<<"No non repeating character";
}

int main(){
    string s="no non repeating character";
    solve(s);
    return 0;
}