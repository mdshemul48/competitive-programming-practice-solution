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
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int hour = ((s[0] - '0') * 10) + (s[1] - '0');

        if (hour == 0)
        {
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM" << endl;
        }
        else if (hour < 12)
            cout << s << " AM" << endl;
        else if (hour > 12)
        {
            s[0] = ((hour - 12) / 10) + '0';
            s[1] = ((hour - 12) % 10) + '0';
            cout << s << " PM" << endl;
        }
        else
        {
            cout << s << " PM" << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}