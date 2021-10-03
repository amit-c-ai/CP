// Problem: A. Valera and X
// Contest: Codeforces - Codeforces Round #237 (Div. 2)
// URL: https://codeforces.com/problemset/problem/404/A
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
00 01 02 03 04
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44
*/
     
void solve(){
	int n;
	cin>>n;
	string arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	char x = arr[0][0], o = arr[0][1];
	if(x==o){
		cout<<"NO\n";
		return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j or i+j == n-1){
				if(arr[i][j]!=x){
					cout<<"NO\n";
					return;
				}
			}else{
				if(arr[i][j]!=o){
					cout<<"NO\n";
					return;
				}
			}	
		}
	}
	cout<<"YES\n";
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
