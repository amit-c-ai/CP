// Problem: B. Chat Online
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/B
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
    
void solve(){
	int p,q,l,r,a,b;
	cin>>p>>q>>l>>r;
	vector<pair<int,int>> vp,vq;
	for(int i=0; i<p; i++){
		cin>>a>>b;
		vp.pb({a,b});
	}
	for(int i=0; i<q; i++){
		cin>>a>>b;
		vq.pb({a,b});
	}
	set<int> st;
	int ans = 0;
	for(int j=0; j<vq.size(); j++){
		for(int i=l; i<=r; i++){
			auto o1 = vq[j].fi + i;
			auto o2 = vq[j].se +i;
			// cout<<o1<<" "<<o2<<"\n";
			for(int k=0; k<vp.size(); k++){
				if(o1<=vp[k].fi and o2>=vp[k].fi or
				o1<=vp[k].se and o2>=vp[k].se or
				o1>=vp[k].fi and o2<=vp[k].se){
					st.insert(i);
				}
			}
		}
	}
	cout<<st.size()<<"\n";
	
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