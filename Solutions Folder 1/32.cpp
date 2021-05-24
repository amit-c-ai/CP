#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(void){
	int i, n, m, last;
	double a, max(0);
	cin>>n>>m;
	for(i=1; i<=n; i++){
		cin>>a;
		if(ceil(a/m)>=max){           //last will that whose quotient will be maximum
			last = i;
			max = ceil(a/m);
		}
	}
	cout<<last;
	return 0;
}
