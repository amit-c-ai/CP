#include<bits/stdc++.h>
using namespace std;
#define d_int_arr(x) (int *)malloc(x*sizeof(int))
int main(void){
	int i, n, *a, *b, maxCap, max;
	cin>>n;
	a = d_int_arr(n);
	b = d_int_arr(n);
	for(i=0; i<n; i++){
		cin>>a[i]>>b[i];
	}
	maxCap=max=b[0];
	for(i=1; i<n; i++){
		if((b[i]-a[i])+max > maxCap){
			maxCap = (b[i]-a[i])+max;
			max = (b[i]-a[i]) + max;
		}
		else{
			max = (b[i]-a[i]) + max;
		}
	}
	cout<<maxCap;	
	return 0;
}
