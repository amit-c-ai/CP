// Problem: C. Photographer
// Contest: Codeforces - Codeforces Round #128 (Div. 2)
// URL: https://codeforces.com/problemset/problem/203/C
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
#define debv2(v) for(auto x:v)cout<<x.fi<<" "<<x.se<<"\n";
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
	ll n,d,a,b,x,y;
	cin>>n>>d>>a>>b;
	vector<ii> v(n);
	for(int i=0; i<n; i++){
		cin>>x>>y;
		v[i] = {x*a+y*b,i};
	}
	sort(all(v));
	int i;
	for(i=0; i<n; i++){
		if(d>=v[i].fi){
			d-=v[i].fi;
		}else{
			break;
		}
	}
	cout<<i<<"\n";
	for(int j=0; j<i; j++){
		cout<<v[j].se+1<<" ";
	}
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