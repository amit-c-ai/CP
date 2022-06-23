// Problem: B. Chris and Magic Square
// Contest: Codeforces - Codeforces Round #369 (Div. 2)
// URL: https://codeforces.com/problemset/problem/711/B
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
ll arr[500][500] = {0};

map<ll,ll> check(ll add, ll n, ll x, ll y){
	arr[x][y] = add;
	ll row[n]={0}, col[n]={0}, d1=0, d2=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			row[i]+= arr[i][j];
			col[j]+= arr[i][j];
			if(i==j)d1+=arr[i][j];
			if(i+j==n-1)d2+=arr[i][j];
		}
	}
	map<ll,ll> mp;
	for(int i=0; i<n; i++)mp[row[i]]++;
	for(int i=0; i<n; i++)mp[col[i]]++;
	mp[d1]++, mp[d2]++;
	return mp;
}
void solve(){
	ll n, no, x, y;
	cin>>n;
	if(n==1){
		cin>>no;
		cout<<1<<"\n";
		return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
			if(arr[i][j]==0){
				x = i, y = j;
			}
		}
	}
	auto m = check(0,n,x,y);
	ll mx = 0, mxOcc=0, add;
	for(auto i = m.begin(); i!=m.end(); i++){
		if(mx<i->se){
			mxOcc = i->fi;
			mx = i->se;
		}
	}
	for(auto i = m.begin(); i!=m.end(); i++){
		if(i->fi==mxOcc)continue;
		add = abs(mxOcc-i->fi);
		auto mp = check(add,n,x,y);
		if(mp.size()==1){
			cout<<add<<"\n";
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