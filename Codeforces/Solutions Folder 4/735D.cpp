// Problem: D. Taxes
// Contest: Codeforces - Codeforces Round #382 (Div. 2)
// URL: https://codeforces.com/problemset/problem/735/D
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

bool isPrime(ll n){
	if(n<=2)return true;
	for(int i=2; i*i<=n; i++){
		if(n%i==0)return false;
	}
	return true;
}
    
void solve(){
	ll n;
	cin>>n;
	if(isPrime(n)){
		cout<<1<<"\n";
		return;
	}
	if(n%2){
		if(isPrime(n-2))cout<<2<<"\n";
		else cout<<3<<"\n";
		return;	
	}
	cout<<2<<"\n";
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