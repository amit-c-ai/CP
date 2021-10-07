// Problem: A. Point on Spiral
// Contest: Codeforces - Codeforces Round #171 (Div. 2)
// URL: https://codeforces.com/problemset/problem/279/A
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
0 0
1 0
1 1
-1 1
-1 -1

*/

bool ch(int tx,int ty,int x,int y,int prex,int prey,int ans){
	// cout<<x<<" "<<y<<" "<<prex<<" "<<prey<<"\n";
	if((tx==x && ty==y) ||
	(prex==x && x==tx && min(y,min(ty,prey))!=ty && max(y,max(ty,prey))!=ty) ||
	(prey==y && y==ty && min(x,min(tx,prex))!=tx && max(x,max(tx,prex))!=tx)){
		cout<<ans<<"\n";
		return true;
	}
	return false;
}
    
void solve(){
	int tx=0,ty=0,x=0,y=0,ans=-1, prex=0, prey=0;
	cin>>tx>>ty;
	if(tx==0 && ty==0 ){
		cout<<0<<"\n";
		return;
	}
	for(int i=1; ; i++){
		x += (i%2?i:-1*i);
		++ans;
		if(ch(tx,ty,x,y,prex,prey,ans))return;
		prex = x;
		y += (i%2?i:-1*i);
		++ans;
		if(ch(tx,ty,x,y,prex,prey,ans))return;
		prey = y;
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