// Problem: A. Guess a number!
// Contest: Codeforces - Codeforces Round #241 (Div. 2)
// URL: https://codeforces.com/problemset/problem/416/A
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
	int q;
	cin>>q;
	string s;
	char host;
	ll l=-2*1000000000,r=-l,n;
	while(q--){
		cin>>s>>n>>host;
		if(host == 'N'){
			if(s=="<")s=">=";
			else if(s=="<=")s=">";
			else if(s==">")s="<=";
			else s = "<";
		}
		if(s=="<"){
			r = min(r,n-1);
		}else if(s=="<="){
			r = min(r,n);
		}else if(s==">"){
			l = max(l,n+1);
		}else{
			l = max(n,l);
		}
	}
	// deb(r);
	// deb(l);
	if(r<l){
		cout<<"Impossible\n";
	}else{
		cout<<r<<"\n";
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