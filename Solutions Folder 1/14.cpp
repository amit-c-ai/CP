#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void){
	int n, *p, i, count=0;
	cin>>n;
	p = (int *) malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		cin>>p[i];
	}
	int max = p[0], maxindex=0, minindex=0;
	for(i=0; i<n; i++){
		if(p[i]>max){
			maxindex=i;
			max=p[i];
		}
	}	
	for(i=maxindex; i>0; i--){
		int temp=p[i];
		p[i]=p[i-1];
		p[i-1]=temp;
		count++;
	}
	int  min = p[0];
	for(i=0; i<n; i++){
		if(p[i]<=min){
			minindex=i;
			min=p[i];
		}
	}
	count = count + (n-1-minindex);
	cout<<count;
	return 0;
}
