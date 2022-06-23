#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fill(x) for(i=0; i<n; i++){cin>>temp; x.pb(temp);}
#define all(x) x.begin(), x.end()
int main(void){
	int i, n, m, temp, sum(0), max(0);
	cin>>n>>m;
	vector<int> vi;
	fill(vi);
	sort(all(vi));
	for(i=0; i<m; i++){
		sum = sum + vi[i];
		if(sum<=max){
			max = sum;
		}
		else{
			cout<<abs(max); 
			return 0;
		}
	}
	cout<<abs(max);
	return 0;
}
