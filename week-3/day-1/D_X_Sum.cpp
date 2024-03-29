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

int n, m;
int arr[200 + 1][200 + 1];

ll count(int i, int j)
{
    ll sum = 0;

    int idx = 0;
    while (i - idx > -1 && j- idx > -1)
    {
        sum += arr[i - idx][j - idx];
        idx++;
    }

    idx = 1;
    while (i - idx > -1 && j + idx < m)
    {
        sum += arr[i - idx][j + idx];
        idx++;
    }

    idx = 1;
    while (i+idx<n && j-idx>-1){
        sum+= arr[i+idx][j-idx];
        idx++;
    }

    idx = 1;
    while(i+idx <n && j+idx<m){
        sum+= arr[i+idx][j+idx];
        idx++;
    }

    return sum;
}

void exc()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, count(i,j));
            }
        }
        cout<<ans<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}