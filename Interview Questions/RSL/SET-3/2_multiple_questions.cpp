// 18] finding a sum of only even numbers from array discarding odd numbers,
// convert a decimal number to its binary equivalent, printing table of an
// inputted number, check given string is palindrome or not and one question
// on printing on condition.

#include<bits/stdc++.h>
using namespace std;

void evenSum(int A[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if(A[i]%2 == 0){
            sum += A[i];
        }
    }
    cout<<"\nsum: "<<sum;
}

void decimalToBinary(int n){
    int prod=1, bin=0;
    while(n){
        bin = prod*(n%2) + bin;
        n = n/2;
        prod = prod*10;
    }
    cout<<"\nbinary: "<<bin;
}

void table(int n){
    for(int i=1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
    }
}

bool checkPalindrome(string s){
    int n=s.length();
    for(int i=0; i<n/2+1; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int A[] = {3, 44, 32, 6, 23, 55, 9}, n=sizeof(A)/sizeof(A[0]);
    evenSum(A, n);

    n=543;
    decimalToBinary(n);

    int num=5;
    table(num);

    string s="abcba";
    cout<<"\n"<<checkPalindrome(s);

    return 0;
}