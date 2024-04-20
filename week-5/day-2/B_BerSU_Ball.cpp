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
    int n,m;
    cin>>n;
    arrin(int, boy, n);
    cin>>m;
    arrin(int, girl, m);
    sort(boy, boy+n);
    
    map<int, int> b; 
    for (int i = 0; i<m; i++) b[girl[i]]++;
    
    int ans = 0; 

    for (int i = 0; i<n; i++){
        int x = boy[i], y = boy[i]-1, z = boy[i] +1; 
        if (b[y]){
            b[y]--;
        }else if (b[x]){
            b[x]--;
        }else if (b[z]){
            b[z]--;
        }else continue;
        ans++;
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