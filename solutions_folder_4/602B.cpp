// Problem: B. Approximating a Constant Range
// Contest: Codeforces - Codeforces Round #333 (Div. 2)
// URL: https://codeforces.com/problemset/problem/602/B
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
	int n;
	cin>>n;
	vi v(n);
	fill(v,n);
	int i=0, j=1;
	int mn = min(v[i],v[j]), mx = max(v[i],v[j]); 
	int ans = 0;
	while(i<n && j<n){
		do{
			++j;
			mn = min(v[j],mn);
			mx = max(v[j],mx);
		}while(abs(mx-mn)<=1);
		ans = max(j-i,ans);
		do{
			++i;
		}while(abs(mx-v[i])>1);
	}
	deb(ans);
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