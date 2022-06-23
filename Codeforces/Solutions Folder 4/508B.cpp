// Problem: B. Anton and currency you all know
// Contest: Codeforces - Codeforces Round #288 (Div. 2)
// URL: https://codeforces.com/problemset/problem/508/B
// Memory Limit: 256 MB
// Time Limit: 500 ms
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

int ci(char c){
	return c-'0';
}

void solve(){
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(ci(s[i])%2==0 && s[i]<s[s.size()-1]){
			swap(s[s.size()-1],s[i]);
			cout<<s<<"\n";
			return;
		}
	}
	for(int i=s.size(); i>=0; i--){
		if(ci(s[i])%2==0 && ci(s[i])>ci(s.back())){
			swap(s[s.size()-1],s[i]);
			cout<<s<<"\n";
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