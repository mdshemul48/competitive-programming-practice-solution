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
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n; 
        map<int, int> feq; 
        for (int i = 0; i<n; i++){cin>>a; if (feq.find(a) == feq.end()) feq[a] = 1; else feq[a]++; }
        
        int mx_feq = 0; 
        for (auto f: feq){
            mx_feq = max(f.second, mx_feq);
        }

        int ans = 0; 
        while(mx_feq < n){
            int rem = n - mx_feq; 
            int can_add = mx_feq;
            ans++;
            ans+= min(rem, can_add);
            mx_feq += min(rem, can_add);
        }
        cout<<ans<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}