j-i// Q2 : Maximum distance between two occurrences of the same element in array
// Input : arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}
// // maximum distance for 2 is 11-1 = 10
// // maximum distance for 1 is 4-2 = 2
// // maximum distance for 4 is 10-5 = 5
// Output: 10

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if(arr[j] == arr[i]){
                ans = max(ans, j-i);
            }
        }
    }
    cout<<ans;
}

int main(){
    int arr[]={3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2}, n=sizeof(arr)/sizeof(arr[0]);
    solve(arr, n);
    return 0;
}
