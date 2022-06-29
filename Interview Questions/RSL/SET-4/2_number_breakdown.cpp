#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int arr[10000000], i=0, prod=1;
    while(n){
        arr[i] = prod*(n%10);
        prod = prod*10;
        n = n/10;
        i++;
    }
    for(int j=i-1; j>0; j--){
        cout<<arr[j]<<" + ";
    }cout<<arr[0];
}

int main(){
    int n=4321;
    solve(n);
    return 0;
}

// 4321 = 4000 + 300 + 20 + 1
