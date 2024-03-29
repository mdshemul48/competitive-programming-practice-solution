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
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        int arr[n]; 
        for (int i = 0; i<n; i++)cin>>arr[i]; 

        int prefix[n]; 
        prefix[0] = arr[0];
        for (int i = 1; i<n; i++) prefix[i] = arr[i]+prefix[i-1];

        while(q--){
            int l, r, k;
            cin>>l>>r>>k; 
            
            int rng = (l == 1) ? prefix[r-1] : prefix[r-1] - prefix[l-2];
            if (((prefix[n-1]-rng)+(k* (r-l+1))) % 2 != 0) yes; 
            else no;
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