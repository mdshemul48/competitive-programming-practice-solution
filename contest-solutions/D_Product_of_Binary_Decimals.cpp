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
        string s; 
        cin>>s; 
        bool a = 1; 
        for (int i = 0; i<s.size(); i++){
            if (s[i] != '0' && s[i] != '1'){
                a = 0; 
                break; 
            }
        }
 
        if (a) yes; 
        else {
            int b = stoi(s);
            bool c = 1; 
            while(b>1){
                if (b%11 == 0) {
                    b/= 11; 
                   
                }else if (b%101 == 0){
                    b/= 101; 
                }else {
                    break;
                }

                string sb = to_string(b);
                for (int i = 0; i<sb.size(); i++){
                if (sb[i] != '0' && sb[i] != '1'){
                    c = 0;
                }
                if (c == 1) break;
        }

            }
            if (c) yes; else no;
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