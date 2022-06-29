// Q) Merge Two arrays alternately.
//     A = [1, 2, 6, 4, 5], B = [3, 12, 4]
//     ans = [1, 3, 2, 12, 6, 4, 4, 5]

#include<bits/stdc++.h>
using namespace std;

void solve(int A[], int alen, int B[], int blen){
    int i=0, j=0, k=0, n=alen+blen;
    int ans[n];
    while(i<alen && j<blen){
        ans[k]=A[i]; i++; k++;
        ans[k]=B[j]; j++; k++;
    }
    while(i<alen){
        ans[k]=A[i];
        i++; k++;
    }
    while(j<blen){
        ans[k]=B[j];
        j++; k++;
    }

    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int A[] = {1, 2, 6, 4, 5}, alen = sizeof(A)/sizeof(A[0]);
    int B[] = {3, 12, 4}, blen = sizeof(B)/sizeof(B[0]);
    solve(A, alen, B, blen);
    return 0;
}