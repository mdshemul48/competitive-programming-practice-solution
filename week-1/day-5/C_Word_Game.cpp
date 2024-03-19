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
        cin>>n; 
        string arr[3][n];
        unordered_map<string, int> cnt; 

        for (int i = 0; i<3; i++){
            for (int j= 0; j<n; j++){
                cin>>arr[i][j];

                if (cnt.find(arr[i][j]) == cnt.end()){
                    cnt.insert({arr[i][j], 1});
                }else cnt[arr[i][j]]++;
            }
        }

        for (int i = 0; i<3; i++){
            int ans = 0; 
            for (int j = 0; j<n; j++){
                if (cnt[arr[i][j]] == 1) ans+=3; 
                else if (cnt[arr[i][j]] == 2) ans++;
            }
            cout<<ans<<" ";
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


