#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, hund=0, twohund=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]==100)
			hund++;
		else if(arr[i]==200)
			twohund++;
	}
	twohund = twohund%2; //dividing equal number of 200's and remaining
	hund = hund-(twohund*2); //2*twohund 100's are used so remaining
	if(hund>=0 && hund%2==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
