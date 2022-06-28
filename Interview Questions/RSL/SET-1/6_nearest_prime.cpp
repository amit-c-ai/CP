// 6] Write a function that takes an integer as an input and returns the
// nearest prime number.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<n; i+=6){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int rightPrime(int n){
    if(n<=1){
        return -1;
    }
    while(!isPrime(n) && n>=2){
        n++;
    }
    return n;
}

int leftPrime(int n){
    if(n<=1){
        return -1;
    }
    while(!isPrime(n) && n>=2){
        n--;
    }
    return n;
}

void solve(int n){
    int left, right;
    left = leftPrime(n-1);
    right = rightPrime(n+1);

    if(n-left > right-n){
        cout<<right;
    }
    else if(right-n > n-left){
        cout<<left;
    }
    else{
        cout<<left<<" "<<right;
    }
}

int main(){
    int n=20;
    solve(n);
    return 0;
}