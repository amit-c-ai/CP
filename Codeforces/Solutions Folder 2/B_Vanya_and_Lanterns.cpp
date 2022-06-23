// ? https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define mem(a, elem) memset(a, elem, sizeof(a))
#define vi vector<int>
#define vii vector<vi>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define vl vector<ll>
#define vll vector<vl>
#define vp vector<ii>
#define F first
#define S second
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define mt make_tuple
#define bpc __builtin_popcount
#define nl '\n'
#define sp ' '
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ANS(cnd) cout << ((cnd) ? "YES\n" : "NO\n");
#define deb(x) cout << x << nl;
#define deb2(x, y) cout << #x << ":" << x << sp << #y << ":" << y << nl;
#define deb3(x, y, z) cout << #x << ":" << x << sp << #y << ":" << y << sp << #z << ":" << z << nl;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, l;
    cin >> n >> l;
    vl a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(all(a));
    ll ans = 2 * max(a[0], l - a[n - 1]);
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[i + 1] - a[i]);

   cout<<fixed<<setprecision(10)<<ans/2.0;

    return 0;
}
