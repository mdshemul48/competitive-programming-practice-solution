#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define ll long long
#define pub push_back
#define pob pop_back
#define all(X) (X).begin(), (X).end()

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cout(v) cout << v << endl;
#define arrin(n) ll arr[n]; for (int i =0; i<n; i++) cin>>arr[i]



void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n; 
        arrin(n);

        ll sum = arr[n-1] - arr[0];
        
        for (int i = 1; i<n;i++){
            sum = max(sum, arr[i]-arr[0]);
        }

        for (int i = 0; i<n-1; i++){
            sum = max(sum, arr[n-1] -arr[i]);
        }
        for (int i = 0; i<n-1; i++){
            sum = max(sum, arr[i]-arr[i+1]);
        }

        cout(sum);
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}