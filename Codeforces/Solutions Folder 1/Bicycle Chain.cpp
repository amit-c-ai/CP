#include<bits/stdc++.h>
using namespace std;
#define fill(arr, n) for(i=0; i<n; i++)cin>>arr[i]
int main(void){
	int i, j, n, m, count(0), max(0);
	cin>>n;
	int nrr[n];
	fill(nrr, n);
	cin>>m;
	int mrr[m];
	for(i=0; i<m; i++){
		cin>>mrr[i];
		for(j=0; j<n; j++){
			if(mrr[i]%nrr[j]==0){
				if(mrr[i]/nrr[j] > max){
					max = mrr[i]/nrr[j];
					count=0; count++;
				}
				else if(mrr[i]/nrr[j] == max){
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;
}
