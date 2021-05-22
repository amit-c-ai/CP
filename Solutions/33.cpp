#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, j, n;
	cin>>n;
	int x[n], y[n], lallow, rallow, uallow, dallow, count=0;
	for(i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	for(i=0; i<n; i++){
		lallow=1; rallow=1; uallow=1; dallow=1;
		for(j=0; j<n; j++){
			if(j!=i){
				if(rallow==1 && (x[j]>x[i]&&y[j]==y[i])){
					rallow=0;
				}
				if(lallow==1 && (x[j]<x[i]&&y[j]==y[i])){
					lallow=0;
				}
				if(uallow==1 && (x[j]==x[i]&&y[j]>y[i])){
					uallow=0;
				}
				if(dallow==1 && (x[j]==x[i]&&y[j]<y[i])){
					dallow=0;
				}
				if(rallow==0 && lallow==0 && uallow==0 && dallow==0){
					count++; 
					break;
				}
			}
		}
	}
	cout<<count;
	return 0;
}
