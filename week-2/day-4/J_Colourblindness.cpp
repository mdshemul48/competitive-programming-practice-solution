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
        string a, b; 
        cin>>a>>b; 
        bool flg = 1; 
        for (int i = 0; i<n; i++){
            if (a[i] == 'R' && b[i] == 'R'){
                continue;
            }else if (a[i] == 'R' xor b[i] == 'R'){
                flg = 0; 
                break; 
            }
        }

        if (flg)yes; 
        else no;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}