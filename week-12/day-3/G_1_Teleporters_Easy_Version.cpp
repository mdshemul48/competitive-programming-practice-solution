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
    int t;
    cin>>t;
    while(t--){
        int n,a; 
        cin>>n>>a; 
        arrin(int, arr, n); 
        
        int arr2[n]; 
        for (int i = 0; i<n; i++){
            arr2[i] = arr[i] + i+1; 
        }
        sort(arr2, arr2+n);

        int ans  = 0; 
        for (int i = 0; i<n; i++){
            if (a>=arr2[i])ans++, a-=arr2[i];
            else break; 
        }
        cout<<ans<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}