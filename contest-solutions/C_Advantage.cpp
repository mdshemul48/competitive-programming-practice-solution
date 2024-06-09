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
    vector<type> arr(n);        \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]

void exc()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arrin(int, arr, n);
        int mx = 0;
        int mx2 = 0;

        if (arr[0]> arr[1]) mx = 0, mx2 = 1; 
        else if (arr[1]> arr[0]) mx = 1, mx2 =0;

        for (int i = 2; i < n; i++)
        {
            if (arr[i] > arr[mx])
            {
                if (arr[mx2] < arr[mx])
                    mx2 = mx;
                mx = i;
            }
            else if (arr[i] > arr[mx2])
                mx2 = i;

        }

        for (int i = 0; i<n; i++){
            if (i != mx){
                cout<<arr[i]-arr[mx]<<" ";
            }else {
                cout<<arr[i]-arr[mx2]<<" ";
            }
        }
        cout<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}