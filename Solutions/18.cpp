#include<bits/stdc++.h>
using namespace std;
#define d_int_arr(x) (int *)malloc(x*sizeof(int))
int main(void){
	int i, n, *p, max, min, count=0;
	cin>>n;
	p = d_int_arr(n);
	for(i=0; i<n; i++){
		cin>>p[i];
	}
	max=min=p[0];
	for(i=0; i<n; i++){
		if(p[i]>max){
			max=p[i]; count++;
		}
		if(p[i]<min){
			min=p[i]; count++;
		}
	}
	cout<<count;
	return 0;
}

