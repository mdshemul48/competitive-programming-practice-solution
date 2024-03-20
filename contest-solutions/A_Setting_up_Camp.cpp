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
        long long int a,b,c; 
        cin>>a>>b>>c; 

        double exroom = floor(b/3);
        if (b%3!= 0 && double((b%3)+c)/3 >= 1) {
        exroom+= ceil(double((b%3)+c)/3);
        }else if (b%3 == 0) {
            exroom+= ceil(ceil(double(c)/double(3)));
        }else {
            cout<<"-1"<<endl;
            continue;
        }
       

        cout<< long(a+exroom)<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}