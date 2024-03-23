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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    int l = 0, r = 0;
 
    int mn = INT_MAX;
    ll sum = 0;
 
    while (r < n)
    {
        sum += arr[r];
        if (sum >= k)
        {
            mn = min(r - l + 1, mn);
            while (sum >= k && l<=r)
            {
                
                sum -= arr[l];
                l++;
                if (sum>=k){
                mn = min(r - l + 1, mn);
                }
            }
        }
        r++;
    }
    if (mn == INT_MAX) cout<<-1<<endl;
    else 
    cout<<mn<<endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}