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


bool solve(vector<int> &arr){
    int s = 0, e = arr.size()-1; 
    while(s<e) {
        if (arr[s] != arr[e]) return 0; 
        s++;
        e--;
    }
    return 1;
}

void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int arr[n]; 
        for (int i = 0; i<n; i++) cin>>arr[i];

        bool ans = 1;
        int s = 0, e = n-1, se = -1, ee = -1; 

        while(s<e){
            if (arr[s] != arr[e]){
                ans = 0; 
                se = arr[s]; 
                ee = arr[e];
                break;
            }
            s++;
            e--;
        }

        if (ans) yes;
        else {
            vector<int> va,vb; 
            for (int i = 0; i<n; i++){
                if (arr[i] != se) va.push_back(arr[i]);
                if (arr[i] != ee) vb.push_back(arr[i]);
            }

            if (solve(va) || solve(vb)) yes;
            else no; 
        }
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}