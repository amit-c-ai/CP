#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n, a, b;
    cin>>n>>a>>b;
    (n-a-1)<=b?cout<<n-a:cout<<b+1;
    return 0;
}
