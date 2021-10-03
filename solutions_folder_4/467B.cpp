// Problem: B. Fedor and New Game
// Contest: Codeforces - Codeforces Round #267 (Div. 2)
// URL: https://codeforces.com/problemset/problem/467/B
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
bool diff(string a, string b, int k){
	for(int i=0; i<a.size(); i++){
		if(a[i]!=b[i]){
			--k;
		}
		if(k<0){
			return false;
		}
	}
	return true;
}
    
void solve(){
	int n,m,k,no;
	cin>>n>>m>>k;
	vector<string> v(m+1);
	for(int i=0; i<=m; i++){
		cin>>no;
		v.pb(bitset<64> (no).to_string());
	}
	ll ans = 0;
	for(int i=m+1; i<(m+1)*2-1; i++){
		if(diff(v[i],v[m*2+1],k))++ans;
	}
	cout<<ans<<"\n";
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