// Problem: B. Bear and Three Musketeers
// Contest: Codeforces - Codeforces Round #318 [RussianCodeCup Thanks-Round] (Div. 2)
// URL: https://codeforces.com/problemset/problem/574/B
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
    
void solve(){
	int n,m;
	cin>>n>>m;
	int a,b;
	vi rec(n+1,-2);
	map<int,vi> mp;
	for(int i=0; i<m; i++){
		cin>>a>>b;
		++rec[a], ++rec[b];
		mp[a].pb(b);
	}
	ll minsum = INT_MAX, s=0;
	int dd = 0;
	for(auto i=mp.begin(); i!=mp.end(); i++){
		if(i->se.size()<2)continue;
		s = rec[i->fi];
		for(auto x: i->se)s+=rec[x];
		if(s<minsum){
			minsum = s;
			dd = i->fi;
		}
	}
	// deb(dd);
	cout<<(minsum==INT_MAX?-1:minsum)<<"\n";
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