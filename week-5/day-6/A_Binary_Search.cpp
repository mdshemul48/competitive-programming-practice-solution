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
    int n, k;
    
    cin >> n >> k;
    arrin(int, arr, n);

    int a;
    for (int i = 0; i < k; i++)
    {
        cin >> a;

        int s = 0, e = n - 1;
        bool f = 0;

        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == a)
            {
                f = 1;
                break;
            }
            else if (arr[mid] < a)
                s = mid + 1;
            else if (a < arr[mid])
                e = mid - 1;
        }

        if (f)
            yes;
        else
            no;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}