#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
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
#define arrin(type, arr, n)     \
    type arr[n];                \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]

void exc()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arrin(int, arr, n);

        if (n<=2){
            yes;
        }
        else {
            vector<int> arr2; 
            for (int i =0;i<n; i++){
                if (arr[i] != arr[i+1] || i+1 == n) arr2.push_back(arr[i]);
            }

            if (arr2.size()<=2)yes;
            else {
                bool b = 0; 
                for (int i = 1; i<arr2.size()-1; i++){
                    if (arr2[i-1]<arr2[i] && arr2[i]>arr2[i+1]){
                        b = 1; 
                    }
                }

                if (b)no;
                else yes;
            }

           
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