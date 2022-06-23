// Problem: B. Prison Transfer
// Contest: Codeforces - Codeforces Round #244 (Div. 2)
// URL: https://codeforces.com/problemset/problem/427/B
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
	int n,t,c,no,safe=0,ans=0;
	cin>>n>>t>>c;
	vi segs;
	for(int i=0; i<n; ++i){
		cin>>no;
		if(no<=t)++safe;
		else{
			segs.pb(safe);
			safe = 0;
		}
	}
	segs.pb(safe);

	for(auto x:segs){
		t = x-c+1;
		if(t>0){
			ans+=t;
		}
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