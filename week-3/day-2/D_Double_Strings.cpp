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
        string arr[n]; 
        map<string, bool> ck;
        for (int i = 0; i<n; i++) cin>>arr[i], ck[arr[i]] = 1; 

        for (int i = 0; i<n; i++){
            string s = arr[i];
            bool ok = 0;

            for (int j = 1; j<s.length(); j++){
                string s1 = s.substr(0, j), s2 = s.substr(j, s.length()-j);
                if (ck[s1] && ck[s2]) {ok=1; break;}
            }
            cout<<ok;
        }
        cout<<"\n";
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}