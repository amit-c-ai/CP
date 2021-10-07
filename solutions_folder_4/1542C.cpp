// Problem: C. Strange Function
// Contest: Codeforces - Codeforces Round #729 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1542/C
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
#define MAX 10000000000000001
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
    
/*

*/
    
void solve(){
	ll n,ans=0;
	cin>>n;
	ans += (n/2+(n%2))*2; // odd
	ll no6 = n/6;
	ans += (no6/2)*5;
	ans += (no6/2+(no6%2))*4;
	ans += (n/2-no6)*3;
	ans%=MOD;
	cout<<ans<<"\n";
	
}
int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}