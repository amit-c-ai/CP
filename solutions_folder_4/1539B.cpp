// Problem: B. Love Song
// Contest: Codeforces - Codeforces Round #727 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1539/B
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
	int n,q,ans=0,l,r;
	cin>>n>>q;
	string s;
	cin>>s;
	vi v(n);
	int sum = 0;
	v[0] = s[0]-'a'+1;
	for(int i=1; i<n; i++){
		v[i] = v[i-1] + s[i]-'a'+1;
	}
	for(int i=0; i<q; i++){
		cin>>l>>r;
		l--,r--;
		cout<<v[r]-(l==0?0:v[l-1])<<"\n";
	}
	// debv(v);
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