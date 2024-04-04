#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define ll long long
#define pub push_back
#define pob pop_back
#define all(X) (X).begin(), (X).end()

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cout(v) cout << v << endl;
#define arrin(n) ll arr[n];for (int i = 0; i < n; i++)cin >> arr[i]

vector<int> aj[(int) 1e6+5];
vector<ll> lf;

void dfs(int cr, int pr)
{
    bool cild = false;
    for (auto i : aj[cr])
    {
        if (i == pr)
            continue;
        cild = true;
        dfs(i, cr);
        lf[cr] += lf[i];
    }
    if (!cild)
    {
        lf[cr] = 1;
    }
}

void exc()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            aj[i].clear();
        }
        lf.assign(n + 2, 0);
        for (int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            aj[u].pub(v);
            aj[v].pub(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            ll ans = lf[x] * lf[y];
            cout << ans << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}