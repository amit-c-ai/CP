#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define PI 3.1415926535897932384626433832795
#define all(a) a.begin(),a.end()
#define deb(a) cout<<#a<<"->"<<a<<endl
#define nl endl
#define sp " "
#define debugV(v) for(auto x : v)cout<<x<<" "; cout<<endl
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
#define fill(a, n)              \
    for (int i = 0; i <n; i++) \
    cin >> a[i]
 
void solve(){
	int arr[3][3];
	int ans[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>arr[i][j];
			ans[i][j]=1;
		}
	}
	cout<<((arr[0][0]+arr[0][1]+arr[1][0])%2==0 ? "1":"0")<<((arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1])%2==0 ?"1":"0")<<((arr[0][1]+arr[0][2]+arr[1][2])%2==0? "1":"0")<<endl;
	cout<<((arr[0][0]+arr[1][0]+arr[2][0]+arr[1][1])%2==0 ? "1":"0")<<((arr[0][1]+arr[1][1]+arr[1][0]+arr[1][2]+arr[2][1])%2==0 ? "1":"0")<<((arr[1][1]+arr[0][2]+arr[1][2]+arr[2][2])%2==0 ? "1":"0")<<endl;
	cout<<((arr[2][0]+arr[2][1]+arr[1][0])%2==0 ? "1":"0")<<((arr[2][0]+arr[2][1]+arr[2][2]+arr[1][1])%2==0 ? "1":"0")<<((arr[1][2]+arr[2][2]+arr[2][1])%2==0 ? "1":"0")<<endl;
}
int main() {
 
    fast;
    int t=1;
    // cin>>t;
    while(t--)
        solve();
        
    return 0;
}
