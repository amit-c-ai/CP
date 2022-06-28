// 4] Write a function that takes an array of integers as input and prints
// the second maximum difference between any two elements from an array.
// Input: arr[] = {14,12,70,95,65,22,30};
// Output: 81
// [1st max difference = 95-12=83
// 2nd max difference = 95-14 = 81]

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int max=INT_MIN, max2=INT_MIN, min=INT_MAX, min2=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }

        if(arr[i]<min){
            min2 = min;
            min = arr[i];
        }
        else if(arr[i]<min2){
            min2 = arr[i];
        }
    }
    (max-min2 > max2-min)?(cout<<max-min2):(cout<<max2-min);
}

int main(){
    int arr[] = {5, 3, 2, 9, 8, 4, 1};
    int n = sizeof(arr)/sizeof(int);
    solve(arr, n);
    return 0;
}