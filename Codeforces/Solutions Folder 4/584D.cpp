// Problem: D. Dima and Lisa
// Contest: Codeforces - Codeforces Round #324 (Div. 2)
// URL: https://codeforces.com/problemset/problem/584/D
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
Goldbach's conjecture -> every even whole number greater than 2 is the sum of two primes!
*/

bool isPrime(ll n){
	if(n<=2){
		return true;
	}
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void solve(){
	ll n,jlp=0;
	cin>>n;
	if(isPrime(n)){
		cout<<1<<"\n"<<n<<"\n";
		return;
	}
	for(ll i = n; i>=2; i--){
		if(isPrime(i)){
			jlp = i;
			break;
		}
	}
	ll diff = n - jlp;
	if(isPrime(diff)){
		cout<<2<<"\n"<<jlp<<" "<<diff<<"\n";
		return;
	}
	cout<<3<<"\n"<<jlp<<" ";
	for(int i=2; i<=n/2; i++){
		if(isPrime(diff-i) && isPrime(i)){
			cout<<i<<" "<<diff-i<<"\n";
			return;
		}
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