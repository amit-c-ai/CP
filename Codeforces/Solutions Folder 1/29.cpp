#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i, n, sum=0;
	string s;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>s;
		if(s=="X++" || s=="++X"){
			sum++;
		}
		else if(s=="X--" || s=="--X"){
			sum--;
		}
	}
	cout<<sum;
	return 0;
}
