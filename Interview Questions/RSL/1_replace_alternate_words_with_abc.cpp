// 1] Write a function that takes an input parameter as a string and return
// the alternate words in it with “abc”. Words are separated by dots.
// Input: "i.like.this.program.very.much"
// Output: "i.abc.this.abc.very.abc"

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int n=s.length(), flag=1, count=0;
    string ans="";
    for(int i=0; i<n; i++){
        if(s[i]=='.'){
            count++;
            ans+=".";
            if(count%2==1){
                ans += "abc";
            }
        }
        else if(count%2==0){
            ans += s[i];
        }
    }
    cout<<ans;
}

int main(){
    string s="i.like.this.program.very.much";
    solve(s);
    return 0;
}