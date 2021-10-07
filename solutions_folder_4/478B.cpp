// Problem: B. Random Teams
// Contest: Codeforces - Codeforces Round #273 (Div. 2)
// URL: https://codeforces.com/problemset/problem/478/B
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
	ll n,m;
	cin>>n>>m;
	ll kmin = 0, kmax = 0;
	ll nn = n-(m-1);
	kmax = nn*(nn-1)/2;
	nn = n/m;
	// fill teams equally
	kmin = n/m*(n/m-1)/2*(m-n%m)+(n/m+1)*n/m/2*(n%m);
	
	cout<<kmin<<" "<<kmax<<"\n";
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