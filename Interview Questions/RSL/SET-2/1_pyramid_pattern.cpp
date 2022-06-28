// 10] Function to print a pyramid pattern.

#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int i, j;
    for(i=n; i>0; i--){
        for(j=0; j<i-1; j++){
            cout<<" ";
        }
        for(j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int n=5;
    solve(n);
    return 0;
}

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *