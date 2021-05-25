#include<bits/stdc++.h>
using namespace std;
#define isSquare(n) ceil((double)sqrt(n))==floor((double)sqrt(n))?1:0
int main(void){
	int i, n, m, count(0), a, b;
	cin>>n>>m;
	if(m<n){
		for(i=m; i>=0; i--){
			if(isSquare(i)){
				a=sqrt(i); b=(m-i);
				if((b*b)+a==n){
					count++;
				}	
			}
		}
	}
	else{
		for(i=n; i>=0; i--){
			if(isSquare(i)){
				a=sqrt(i); b=(n-i);
				if((b*b)+a==m){
					count++;
				}	
			}
		}		
	}
	cout<<count;
	return 0;
}
