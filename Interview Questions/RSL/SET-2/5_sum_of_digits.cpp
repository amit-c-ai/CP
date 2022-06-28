// Q) print the sum of every digits of the given number

#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    int sum=0;
    while(num){
        sum += num%10;
        num /= 10;
    }
    cout<<sum;
}

int main(){
    int num=12345;
    solve(num);
    return 0;
}