// ? https://codeforces.com/problemset/problem/254/A

#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define all(x) x.begin(), x.end()
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    n = n * 2;
    vi v[5001];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i + 1);
    }
    vpii ans;
    for (int i = 0; i <= 5000; i++)
    {
        if (v[i].size() % 2 == 0)
        {
            for (int j = 0; j < v[i].size(); j += 2)
            {
                ans.pb(mp(v[i][j], v[i][j + 1]));
            }
        }
        else if (v[i].size() & 1)
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    for (auto t : ans)
    {
        cout << t.ff << " " << t.ss << endl;
    }

    return 0;
}
