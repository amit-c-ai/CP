// Problem: A. PawnChess
// Contest: Codeforces - Codeforces Round #328 (Div. 2)
// URL: https://codeforces.com/problemset/problem/592/A
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
	char arr[8][8];
	int bm = INT_MAX, wm = INT_MAX, b = 0, w = 0;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin>>arr[j][i];
		}
	}
	bool broke = false;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(arr[i][j]=='B'){
				for(int k=j+1; k<8; ++k){
					if(arr[i][k]!='.'){
						broke = true;
						break;
					}
					++b;
				}
				if(!broke){
					bm = min(bm,b);
				}
				b = 0;
				broke = false;
			}else if(arr[i][j]=='W'){
				for(int k=j-1; k>=0; --k){
					if(arr[i][k]!='.'){
						broke = true;
						break;
					}
					++w;
				}
				if(!broke){
					wm = min(wm,w);
				}
				w = 0;
				broke = false;
			}
		}
	}
	cout<<(wm>bm?"B":"A")<<"\n";
	
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