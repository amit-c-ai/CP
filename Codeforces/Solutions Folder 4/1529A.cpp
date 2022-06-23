// Problem: A. Eshag Loves Big Arrays
// Contest: Codeforces - Codeforces Round #722 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1529/A
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
w a x
b m c
y d z

a+b +w +m = b+d +y +m
a-d = y-w

*/
float avg = 0.0;

bool fn(int i){
	return (i>avg);
}

void solve(){
	int n;
	cin>>n;
	vi v(n);
	fill(v,n);
	sort(all(v));
	avg = (float)(v[0]+v[1])/2;
	auto ct = count_if(all(v),fn);
	cout<<ct<<"\n";
}
int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
    fast;
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}