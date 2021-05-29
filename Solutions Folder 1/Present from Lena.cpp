#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(void){
	short int i, j, n;
	cin>>n;
	for(i=0; i<=n; i++){
		for(j=0; j<(n-i); j++)
			cout<<"  ";

		for(j=0; j<i; j++)
			cout<<j<<" ";

		for(j; j>=0; j--){
			cout<<j;
			if(j!=0)
				cout<<" ";
		}
		
		cout<<endl;
	}
	for(i=n-1; i>=0; i--){
		for(j=0; j<(n-i); j++)
			cout<<"  ";
		
		for(j=0; j<i; j++)
			cout<<j<<" ";
		
		for(j; j>=0; j--){
			cout<<j;
			if(j!=0)
				cout<<" ";
		}
		
		if(i!=0)
			cout<<endl;
	}
	return 0;
}
