#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, i, zero(0), five(0), temp;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>temp;
		if(temp==0)
			zero++;
		else
			five++;
	}
	if(zero==0){
		cout<<"-1"; return 0;
	}
	if(five<9){
		cout<<"0"; return 0;
	}
	five = five-(five%9);
	for(i=0; i<five; i++)
		cout<<"5";
	for(i=0; i<zero; i++)
		cout<<"0";
	return 0;

}
