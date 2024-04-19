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

bool cmp1(pair<char, int> a, pair<char, int> b)
{
    return a.first < b.first || (a.first == b.first && a.second < b.second);
}

bool cmp2(pair<char, int> a, pair<char, int> b)
{
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}

void exc()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        vector<pair<char, int>> arr;
        for (int i = 0; i < s.size(); i++)
        {
            arr.pub({s[i], i});
        }

        if (*s.begin() <= *s.rbegin())
        sort(all(arr), cmp1);
        else  sort(all(arr), cmp2);

        auto f = find(all(arr), make_pair(s[0], 0));

        char c = s[s.size() - 1];
        int ic = s.size() - 1;

        auto l = find(all(arr), make_pair(c, ic));

        int fidx = f - arr.begin();
        int eidx = l - arr.begin();

        vector<int> ans;
        int cst = 0;
        if (*s.begin() <= *s.rbegin())
        {
            ans.pub(arr[fidx].second);
            for (int i = fidx + 1; i <= eidx; i++)
            {
                ans.pub(arr[i].second);
                cst += abs(arr[i].first - arr[i - 1].first);
            }
        }
        else
        {
            ans.pub(arr[fidx].second);
            for (int i = fidx - 1; i >= eidx; i--)
            {
                ans.pub(arr[i].second);
                cst += abs(arr[i + 1].first - arr[i].first);
            }
        }

        cout << cst << " " << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}