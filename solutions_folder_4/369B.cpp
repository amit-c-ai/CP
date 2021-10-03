// Problem: B. Valera and Contest
// Contest: Codeforces - Codeforces Round #216 (Div. 2)
// URL: https://codeforces.com/problemset/problem/369/B
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
    
void solve(){
	ll n,k,l,r,sall,sk;
	cin>>n>>k>>l>>r>>sall>>sk;
	vll ans(n);
	auto tsk = sall-sk;
	for(int i=0; i<k; i++){
		ans[i] = sk/k;
		if (sk % k != 0) ans[i]++, sk--;		 	
	}
	for(int i=k; i<n; i++){
		ans[i] = tsk/(n-k);
 	 	if (tsk % (n - k) != 0) ans[i]++, tsk--;
	}
	bool ok = true;
	for(int i = 0; i < k; i++) {
	 	if (ans[i] < l || ans[i] > r) ok = false;
	 	for(int j = k; j < n; j++) {
	 	 	if (ans[j] > ans[i]) ok = false;
	 	 	if (ans[j] < l || ans[j] > r)
	 	 		ok = false;
	 	}
	}
	debv(ans);
	deb(accumulate(all(ans),0));
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