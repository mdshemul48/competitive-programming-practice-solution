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
        int arr[n]; 
        for (int i = 0; i<n; i++) cin>>arr[i];

        for (int i = 0; i<n; i++){
            int a; 
            string b; 
            cin>>a>>b; 

            for (int j= a-1; j>=0; j--){
                if (b[j] == 'U') arr[i]--; 
                else arr[i]++; 

                if (arr[i] == 10) arr[i] = 0; 
                else if (arr[i] == -1) arr[i] = 9;
            }
        }

        for (int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
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