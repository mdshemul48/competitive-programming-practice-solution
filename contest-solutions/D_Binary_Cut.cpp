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

        vector<int> pq;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            c++;
            if (s[i] != s[i + 1] || i + 1 == n)
            {
                pq.push_back(s[i] - '0');
                c = 0;
            }
        }

        if ((pq.size() == 2 && pq[0] == 0 && pq[1] == 1) || pq.size() == 1) cout<<1<<endl;
        else if (pq.size() == 2 && pq[0] == 1 && pq[1] == 0) cout<<2<<endl;
        else cout<<pq.size()-1<<endl; 
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}