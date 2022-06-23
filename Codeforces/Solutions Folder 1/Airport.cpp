#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define pb push_back
typedef unsigned short int usi;
int main(void){
	usi i,n,m,temp;
	unsigned int cost(0);
	cin>>n>>m;
	vector<usi> vi, vii;
	for(i=0; i<m; i++){
		cin>>temp;
		vi.pb(temp);
		vii.pb(temp);
	}temp=n;
	
	while(temp>0){
		usi index = std::max_element(all(vi)) - vi.begin();
		cost += vi[index];
		vi[index]--;
		temp--;
	}cout<<cost<<" ";
	
	cost=0;
	sort(all(vii));
	temp=n;
	for(i=0; i<m; ){
		if(temp>0){
			cost += vii[i];
			vii[i]--;
			if(vii[i]==0)i++;
			temp--;
		}
		else{
			break;
		}
	}cout<<cost;
	return 0;
}
