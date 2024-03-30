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
        int arr[n][n-1];
        for (int i = 0; i<n; i++){ 
            for (int j = 0; j<n-1; j++) {
                cin>>arr[i][j];

            }
        }

        map<int,int> cnt, inx; 

        for (int i = 0; i<n; i++){
            cnt[arr[i][n-2]]++;
            inx[arr[i][n-2]] = i; 
        }

        int indx, val;
        for (auto c :cnt){
            if (c.second == 1) indx = inx[c.first];
            else val = c.first;
        }

        for (int i = 0; i<n-1; i++){
            cout<<arr[indx][i]<<" ";
        }
        cout<<val<<endl;


    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}