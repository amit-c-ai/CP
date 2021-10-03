// Problem: C. Replacement
// Contest: Codeforces - Codeforces Round #316 (Div. 2)
// URL: https://codeforces.com/problemset/problem/570/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
int getConsecutive(string s, int l, int r){
	int ret = 0, ti;
	bool did = false;
	for(int i=l; i<=r; i++){
		ti = i-1;
		while(s[i]=='.'){
			++i;
			did = true;
		}
		if(did)ret += --i-ti-1;
		did = false;
	}
	return ret;
}
    
void solve(){
	int n,q,p;
	string s;
	char c;
	cin>>n>>q>>s;
	map<ii,int> mp;
	int ret = 0, ti;
	bool did = false;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='.'){
			ti = i-1;
			while(s[i++]=='.'){
				did = true;
			}
			if(did){
				--i;
				mp[{ti+1,i}] = i-ti-1;
			}
		}
	}

	int ans;
	while(q--){
		cin>>p>>c;--p;
		s[p] = c;
		// deb(s);
		ans = 0;
		for(auto x:mp){
			if(p>=x.fi.fi || p<=x.fi.se){
				x.se = getConsecutive(s,x.fi.fi,x.fi.se);
				ans += x.se; 
			}else{
				ans += x.se;
			}
		}
		cout<<ans<<"\n";
	}
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