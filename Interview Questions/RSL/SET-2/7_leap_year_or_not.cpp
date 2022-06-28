// 14] Given an input year then print year is either leap year or not leap
// year.

#include<bits/stdc++.h>
using namespace std;

bool solve(int year){
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

int main(){
    int year;
    cin>>year;
    solve(year)?cout<<"True":cout<<"False";
    return 0;
}
