#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define min(a,b) a<b?a:b
typedef vector<int> vi;
int main(void){
	int i, n, min_a, min_b, temp;
	vi a, b;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>temp; a.push_back(temp);
		cin>>temp; b.push_back(temp);
	}
	min_a = min(count(all(a), 1), count(all(a), 0));
	min_b = min(count(all(b), 1), count(all(b), 0));
	cout<<min_a+min_b;
	return 0;
}
