// 17] Print Right Angle Triangle in Single Loop

#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    string s="*";
    while(n--){
        cout<<s<<"\n";
        s += "*";
    }
}

int main(){
    int n=5;
    solve(n);
    return 0;
}