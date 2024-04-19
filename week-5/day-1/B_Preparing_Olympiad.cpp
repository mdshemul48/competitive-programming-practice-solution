#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define endl '\n'
#define int long long
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
       int l,r,x; 
       cin>>n>>l>>r>>x; 
       arrin(int, arr, n);

       sort(arr,arr+n);

       int ans = 0; 
       for (int i = 0; i<pow(2,n); i++){
            vector<int>sbs;
            for (int j = 0; j<n; j++){
                if (i & (1<<j)){
                    sbs.push_back(arr[j]);
                }
            }

            if (sbs.size()>=2){
                int sum = sbs[0];
                cout<<sbs[0]<<" ";

                bool xS = 1; 
                for (int j = 1; j<sbs.size(); j++){

                    if ((sbs[j]-sbs[j-1])>=x){
                    cout<<sbs[j]<<" ";
                        sum+= arr[j];
                    }else {
                        xS = 0;
                        break; 
                    }
                }
                cout<<endl;
                if (xS && sum<=r && l<=sum){
                    ans++;
                }
                // dbg(xS, sum,ans);
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