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
    int t,n,k, c;
    cin>>t;
    while(t--){
        cin>>n>>k; 

        map<ll, int> a,b; 
        
        for (int i = 0; i<n; i++){
            cin>>c; 
            if (a.find(c) == a.end()) a[c] = i; 
            b[c] = i;
        }
        for (int i = 0; i<k; i++){
            int e,f; 
            cin>>e>>f; 
            if (a.find(e) != a.end() && b.find(f) != b.end()&& a[e]<b[f])yes; 
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