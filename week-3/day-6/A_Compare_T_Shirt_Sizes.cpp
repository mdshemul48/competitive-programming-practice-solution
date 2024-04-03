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



void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        string a,b; 
        cin>>a>>b; 


        int la = a.size(), lb = b.size();
        if (a.back() < b.back())cout<<">"<<endl;
        else if (a.back()> b.back())cout<<"<"<<endl;
        else {
            if (a.size()> b.size()){
                if ( b[lb-1] == 'S') cout<<"<"<<endl;
                else cout<<">"<<endl;
            }else if (a.size()< b.size()){
                if (b[lb-1] == 'S') cout<<">"<<endl;
                else cout<<"<"<<endl;
            }else cout<<"="<<endl;
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