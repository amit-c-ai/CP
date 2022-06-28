// 7] Write a function that takes two inputs, year, and n and returns n leap
// year after the given year.

#include<bits/stdc++.h>
using namespace std;

bool isLeap(int year){
    if(year%400 == 0){
        return true;
    }
    if(year%100 == 0){
        return false;
    }
    if(year%4 == 0){
        return true;
    }
    return false;
}

void solve(int year, int n){
    while(n--){
        year++;
        while(!isLeap(year)){
            year++;
        }
        cout<<year<<"\n";
    }
}

int main(){
    int year=1947, n=5;
    solve(year, n);
    return 0;
}