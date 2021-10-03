// Problem: B. A and B and Compilation Errors
// Contest: Codeforces - Codeforces Round #294 (Div. 2)
// URL: https://codeforces.com/problemset/problem/519/B
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
	int n,t=3;
	ll s1=0, s2=0, s3=0, no;
	cin>>n;
	int tn = n;
	while(t--){
		for(int i=0; i<n; i++){
			cin>>no;
			tn==n?s1+=no:n==tn-1?s2+=no:s3+=no;
		}
		--n;
	}
	cout<<s1-s2<<"\n"<<s2-s3<<"\n";
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