// Problem: B. Non-square Equation
// Contest: Codeforces - Codeforces Round #144 (Div. 2)
// URL: https://codeforces.com/problemset/problem/233/B
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
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i < n; i++) \
    cin >> a[i]
    
/*
x^2 = n-s(x)x;
*/

ull s(ull i){
	ull ret = 0;
	while(i){
		ret+=i%10;
		i/=10;
	}
	return ret;
}
    
void solve(){
	ull n, i=0;
	cin>>n;
	while(++i && i<=n){
		if(n-s(i)*i == i*i){
			cout<<i<<"\n";
			return;
		}
	}
	cout<<-1<<"\n";
	
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