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
    int t,n;
    cin>>t;
    while(t--){
       cin>>n; 
       arrin(int, om, n);
       arrin(int, addy, n);


        int mxOm = 0, mxAddy=0; 
        int cnt = 0; 
       for (int i = 0; i<n; i++){
            if (om[i] != 0)cnt++;

            if (om[i] == 0 || i ==n-1){
                mxOm = max(mxOm, cnt);
                cnt = 0; 
            }
       }

        cnt = 0; 
        for (int i = 0; i<n; i++){
            if (addy[i] != 0)cnt++;

            if (addy[i] == 0 || i ==n-1){
                mxAddy = max(mxAddy, cnt);
                cnt = 0; 
            }
       } 

        if (mxOm>mxAddy) cout("Om")
        else if (mxAddy>mxOm) cout("Addy")
        else cout("Draw")


    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}