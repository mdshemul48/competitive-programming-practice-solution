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
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<string> s(n); 

        for (int i = 0; i<n; i++){
            cin>>s[i];
        }

        int mn = INT_MAX;

        for (int i = 0; i<n; i++){
            for (int j = i+1; j<n; j++){
                int sum = 0; 
                for (int k = 0; k<m; k++){
                    sum+= abs(s[i][k]-s[j][k]);
                }
                mn = min(sum, mn);
            }
        }
        cout<<mn<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}