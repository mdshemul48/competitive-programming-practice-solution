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
    int n,m,k;
    cin>>n>>m>>k;
 
    int arr[m];
    for (int i = 0; i<m; i++){
        cin>>arr[i];
    }
    int s; 
    cin>>s; 
 
    int ans = 0; 
    for (int i = 0; i<m; i++){
        int diff = arr[i] ^ s;
 
        int count = 0; 
        while(diff > 0){
            int bit = diff % 2; 
            if (bit) count++;
            diff /= 2;
        }
 
        if (count<= k) ans++;
    }
    cout(ans);
 
 
    
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}