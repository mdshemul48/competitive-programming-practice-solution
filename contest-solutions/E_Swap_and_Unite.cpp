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
        string s;
        cin >> s;
        if (s.size() == 1){ cout<<0<<endl; continue;}
        int arr[26] = {0};
        int mx = 0; 
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
        }

        int check[s.size()];

        int c = 0; 
        for (int i = 0; i<s.size(); i++){
            c++; 
            check[i] = arr[s[i] - 'a'] - c;
            if (s[i] != s[i+1]) c = 0; 
        }

        int ans = INT_MAX;
        for (int i = 0; i<s.size(); i++) {
            cout<<check[i]<<" ";
            ans = min(check[i], ans);
        }
        cout<<endl;
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