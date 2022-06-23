// ? https://codeforces.com/problemset/status?my=on

#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mem(a, elem) memset(a, elem, sizeof(a))
#define ff first
#define ss second
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

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<ll, ll>> vpll;

bool comp(pii p1, pii p2)
{
    if (p1.ff > p2.ff)
        return true;
    return (p1.ff == p2.ff && p1.ss < p2.ss);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vpii vp;
    for (int i = 0; i < n; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        vp.pb(mp(temp1, temp2));
    }

    sort(all(vp),comp);

    pii ans;
    for (auto x : vp)
    {
        if (k != 0)
        {
            ans = x;
            k--;
        }
        else
        {
            break;
        }
    }
    int anss = count(all(vp), ans);
    deb(anss);
    // deb2(ans.ff, ans.ss);
    return 0;
}
