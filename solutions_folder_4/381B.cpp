// Problem: B. Sereja and Stairs
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define PI 3.1415926535897932384626433832795
#define all(a) a.begin(),a.end()
#define deb(a) cout<<#a<<"->"<<a<<endl
#define nl endl
#define debv(v) for(auto x : v)cout<<x<<" "; cout<<endl;
#define debv2(v) for(auto x:mp)cout<<x.fi<<" "<<x.se<<"\n";
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
    
/*

*/
    
void solve(){
	int n,no;
	cin>>n;
	map<int,int> mp;
	for(int i=0; i<n; i++){
		cin>>no;
		mp[no]++;
	}
	vi ans;
	for(auto i=mp.begin(); i!=mp.end(); ++i){
		if(i->se>0){
			ans.pb(i->fi);
			i->se-=1;
		}
	}
	auto i = mp.rbegin();
	++i;
	for(; i!=mp.rend(); ++i){
		if(i->se>0){
			ans.pb(i->fi);
		}
	}
	cout<<ans.size()<<"\n";
	debv(ans);
	
}
int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
    fast;
    int t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}