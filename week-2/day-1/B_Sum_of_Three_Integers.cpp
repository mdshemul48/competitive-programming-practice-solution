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
    int n, q ;
    cin>>n>>q; 
    int ans = 0; 

    for (int i = 0; i<=n; i++){
        unordered_map<int, bool> ck; 
        for (int j = 0; j<=n; j++){
                if (q-i-j>=0 &&q-i-j<=n && ck.find(q-i-j) == ck.end()){
                    ans++;
                    ck[q-i-j] = 1;
                }
        }
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