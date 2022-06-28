// 12] Write a function that takes a string as input and returns the output
// as an integer (STOI).

#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int n=s.length(), num=0, prod=1;
    for(int i=n-1; i>=0; i--){
        num = prod*(s[i]-'0') + num;
        prod *= 10;
    }
    cout<<num;
}

int main(){
    string s="5400321";
    solve(s);
    return 0;
}