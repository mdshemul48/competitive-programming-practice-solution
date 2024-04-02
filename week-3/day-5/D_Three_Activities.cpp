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
#define arrin(n) ll arr[n]; for (int i =0; i<n; i++) cin>>arr[i]


bool com(pair<int, int> &a, pair<int, int> &b) {
    return a.first > b.first;
}


void exc()
{
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n; 
        vector<pair<int, int>> arr(n), arr2(n), arr3(n);
        for (int i = 0; i<n; i++) {
            cin>>a;
            arr.pub({a, i});
        } 
        for (int i = 0; i<n; i++) {
             cin>>a;
            arr2.pub({a, i});
        }; 
        for (int i = 0; i<n; i++) {
             cin>>a;
            arr3.pub({a, i});
        };

        sort(all(arr), com); 
        sort(all(arr2), com); 
        sort(all(arr3), com); 
        int maxSum = 0; 
        for (int i = 0; i<3; i++){
            for (int j = 0; j<3; j++){
                for (int k = 0; k<3; k++){
                    if (arr[i].second != arr2[j].second && arr[i].second != arr3[k].second && arr3[k].second !=arr2[j].second){
                        maxSum= max(arr[i].first+arr2[j].first+arr3[k].first, maxSum);
                    }
                }
            }
        }
        cout<<maxSum<<endl;

    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}