// 2]Write a function that takes a number as input if the given number is a
// Fibonacci number, prints the number otherwise, print the sum of all even
// Fibonacci numbers less than the given number.
// Input: 20
// Output: 10
// Input: 21
// Output: 21

#include<bits/stdc++.h>
using namespace std;

void solve(int num){
    if(num==0 || num==1){
        cout<<"num: "<<num;
        return;
    }
    int prev=0, prev2=1, sum=0, fibo=1;
    while(fibo<=num){
        fibo = prev + prev2;
        prev2 = prev; prev = fibo; 
        if(fibo==num){
            cout<<"num: "<<num;
            return;
        }
        if(fibo%2==0){
            sum += fibo;
        }
    }
    cout<<"sum: "<<sum;
}

int main(){
    int num=21;
    solve(num);
    return 0;
}