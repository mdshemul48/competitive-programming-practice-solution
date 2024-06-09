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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> arr;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (b == l)
            {
                arr.push_back(a);
            }
        }

        if (arr.size() >= k)
        {
            sort(all(arr), greater<int>());

            int sum = 0;
            map<int,bool> ck; 
            int totalS  = 0; 
            for (int i = 0; i < arr.size(); i++)
            {
                if (ck.find(arr[i]) == ck.end()){
                    sum += arr[i];
                    ck[arr[i]] = 1; 
                    totalS++;
                }
                
                if (totalS == k) break;
            }
            if (totalS==k) cout << sum << endl;
            else cout<<"-1"<<endl;
        }
        else
            cout << "-1" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}