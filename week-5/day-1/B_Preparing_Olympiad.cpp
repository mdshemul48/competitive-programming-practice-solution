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

#define endl '\n'
#define int long long
#define pub push_back
#define pob pop_back
#define all(X) (X).begin(), (X).end()

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cout(v) cout << v << endl;
#define arrin(type, arr, n)     \
    type arr[n];                \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]

void exc()
{
    int t, n;
    int l, r, x;
    cin >> n >> l >> r >> x;
    arrin(int, arr, n);

    sort(arr, arr + n);

    int ans = 0;

    for (int i = 0; i < pow(2, n); i++)
    {
        int sum = 0;
        vector<int> sbs;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sbs.push_back(arr[j]);
                sum += arr[j];
            }
        }

        if (sbs.size() >= 2 && sum <= r && l <= sum && sbs[sbs.size() - 1] - sbs[0] >= x)
        {

            ans++;
        }
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