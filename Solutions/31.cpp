#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, n, finger, total=0, ways=0;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>finger;
		total+=finger;
	}
	for(i=1; i<=5; i++){
		if((total+i)%(n+1) != 1){
			ways++;
		}
	}
	cout<<ways;
	return 0;
}
