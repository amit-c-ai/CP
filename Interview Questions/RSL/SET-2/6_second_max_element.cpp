// 13] Find Second Max Element from an array on following conditions:
// array modification not allowed,
// all integers are positive

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int max=arr[0], max2=max;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max){
            max2 = arr[i];
        }
    }
    cout<<"second maximum: "<<max2;
}

int main(){
    int arr[]={5, 3, 2, 9, 8, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr, n);
    return 0;
}
