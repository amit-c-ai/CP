#include<bits/stdc++.h>
using namespace std;
typedef unsigned int ui;
int main(void){
	ui i, n, m; 
	long long time(0);
	cin>>n>>m;
	ui task[m];
	cin>>task[0];
	time = time + (task[0]-1);
	for(i=1; i<m; i++){
		cin>>task[i];
		if(task[i]<task[i-1]){
			time = time + ((n-task[i-1])+task[i]);
		}
		else{
			time = time + (task[i]-task[i-1]);
		}
	}
	cout<<time;
	return 0;
}

