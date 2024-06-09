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
    cin >> t;
    while (t--)
    {
        int k;
        cin >> n >> k;
        int arr[n];

        int mxI = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mxI = arr[i] >= arr[mxI] ? i : mxI;
        }

        int mn = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[mxI])
            {
                float mxs = float(arr[mxI] - arr[i]) / (k * 1.0);

                int lw = (floor(mxs) * k) + arr[i];
                int uw = (ceil(mxs) * k) + arr[i];

                int x = abs(arr[mxI] - lw);
                int y = abs(arr[mxI] - uw);
                int z = abs(arr[mxI] - arr[i]);

                if (x <= y && x < z)
                {
                    arr[i] = lw;
                }
                else if (y < x && y < z)
                {
                    arr[i] = uw;
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout<<endl;
        sort(arr, arr + n);
        cout << arr[n - 1] - arr[0] << endl;
        //    break;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}