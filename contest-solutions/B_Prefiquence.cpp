#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
#define arrin(type,arr,n) type arr[n]; for (int i =0; i<n; i++) cin>>arr[i]



void exc()
{
    int t;
    cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        string s1, s2; 
        cin>>s1>>s2;
        
        int in = 0; 
        for (int i = 0; i<m; i++) if (s1[in] == s2[i]) in++;
        cout<<in<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}