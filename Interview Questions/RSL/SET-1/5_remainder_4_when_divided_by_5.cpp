// 5] Write a function that takes an array of integers and prints the
// numbers that have a remainder of 4 when divided by 5.
// Input: [19,10,44,3,11,129]
// Output: [19, 44, 129]
// Input:[13,4]
// Output: [4]

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]%5 == 4){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={19,10,44,3,11,129};
    int n = sizeof(arr)/sizeof(int);
    solve(arr, n);
    return 0;
}