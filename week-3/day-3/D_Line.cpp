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
        string s; 
        cin>>n>>s; 

        vector<ll> dis; 
        int mc = 0;
        ll total = 0; 
        for (int i = 0; i<n; i++){
            ll l = i; 
            ll r = n-i-1;

            if (s[i] == 'L'){
                if (l<r){
                    total+= r; 
                    dis.pub(r-l);
                    mc++;
                }else total+= l; 
            }else {
                if (l>r){
                    total+= l; 
                    dis.pub(l-r);
                    mc++;
                }else total+= r; 
            }

        }

        vector<ll> ans(n+1);

        for (int i = mc; i<=n; i++){
           ans[i] = total; 
        }

        sort(all(dis), greater<ll>());

        for (int i = mc-1; i>=1; i--){
            total-=dis.back();
            dis.pob();
            ans[i] = total;
        }

        for (int i = 1; i<=n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}