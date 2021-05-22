#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(void){
	int i, n, min=1, mina, minb;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	min=abs(arr[1]-arr[0]); mina=0, minb=1;
	for(i=2; i<n; i++){
		if(abs(arr[i]-arr[i-1])<min){
			min = abs(arr[i]-arr[i-1]);
			mina = i-1; minb = i;
		}
	}
	if(abs(arr[n-1]-arr[0])<min){
		cout<<n<<" 1";
		return 0;
	}
	cout<<mina+1<<" "<<minb+1;
	return 0;
}
