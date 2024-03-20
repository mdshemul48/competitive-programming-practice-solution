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



void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n; 
        ll arr[n]; 
        for (ll i = 0; i<n; i++){
            cin>>arr[i];
        }

        ll mx = arr[0]*2; 
        ll sum = arr[0]*2; 
        for (ll i = 1; i<n; i++){
            ll pre = (sum - arr[i-1]);
            pre+= (arr[i]*2);
            sum= pre;
            mx = max(mx, sum);
        }
        cout<<mx<<endl;
       
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}

// mx = 2;
// sm = 9-3+(4*2); 

// i = 1 
// 1 2 3 4 1 2 3 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1