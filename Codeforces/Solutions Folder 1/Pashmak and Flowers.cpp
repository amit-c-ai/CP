#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(x) x.begin(), x.end()
int main(void){
	long long i, n, temp, max,  countL(1), countR(1), sum(0);
	vector<int> vi;
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>temp;
		vi.pb(temp);
	}sort(all(vi));
	
	max=vi[n-1]-vi[0];
	for(i=1; i<n; i++){
		if(vi[i]==vi[i-1])
			countL++;
		else
			break;
	}
	if(countL==n){
		for(i=n-1; i>0; i--){
			sum += i;
		}
		cout<<max<<" "<<sum;
		return 0;
	}
	for(i=n-1; i>1; i--){
		if(vi[i]==vi[i-1])
			countR++;
		else
			break;
	}
	cout<<max<<" "<<countL*countR;
	return 0;
}
