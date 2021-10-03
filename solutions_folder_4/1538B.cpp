// Problem: B. Friends and Candies
// Contest: Codeforces - Codeforces Round #725 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1538/B
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
	ll n,s=0;
	cin>>n;
	vll v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
		s+=v[i];
	}
	auto same = (float)s/n;
	if(same!=(ll)same){
		cout<<-1<<"\n";
		return;
	}
	ll ans = 0;
	for(int i=0; i<n; i++){
		if(v[i]>same)++ans;
	}
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