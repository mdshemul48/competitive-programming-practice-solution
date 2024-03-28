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

void exc()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    multiset<ll> q;
    ll l = 0, r = 0;
    ll ans = 0;
    while (r < n)
    {
        q.insert(arr[r]);

        if (*q.rbegin() - *q.begin() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l < r)
            {
                if (*q.rbegin() - *q.begin() <= k)
                {
                    break;
                }
                auto it = q.find(arr[l]);
                q.erase(it);
                l++;
            }
            if (*q.rbegin() - *q.begin() <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}