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
    cin>>n>>k;
    ll arr[n]; 
    for (ll i = 0; i<n; i++) cin>>arr[i];

    ll l = 0, r = 0; 
    ll ans = 0; 
    map<ll, ll> q; 

    while(r<n){
        q[arr[r]]++; 

        if (q.size()<=k) ans+= (r-l+1);
        else {
            while(l<r){
                if (q.size()<=k) break; 
                
                q[arr[l]]--; 
                if (q[arr[l]] == 0) q.erase(arr[l]); 
                l++;
            }
            if (q.size() <= k) ans+= (r-l+1);
        }

        r++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}