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
#define ll long long
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n], g1, g2;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        g1 = *max_element(a, a + n);
        int c = 0, c2 = 0;
        while (g1 > 0)
        {
            g1 /= 2;
            c++;
        }
        g2 = pow(2, c - 1);
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= g2)
                c2++;
        }
        if (c2 % 2 == 1)
            cout << (c2 / 2) + 1 << endl;
        else
            cout << c2 / 2 << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}