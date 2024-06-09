#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
#define arrin(type,arr,n) type arr[n]; for (int i =0; i<n; i++) cin>>arr[i]



void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n; 
        arrin(int, arr, n);


        int lastOne = -1; 
        vector<int>ckr(n,-1), ck(n,-1);

        for (int i = n-1; i>=0; i--){
            if (lastOne != -1){
                if (arr[i]>arr[lastOne]){
                    ck[i] = lastOne;
                }else if (arr[i]<arr[lastOne]){
                    lastOne = i;
                }
                else ck[i] = -1; 
            }else {
                ck[i] = -1; 
                lastOne = i;
            }
        }
        lastOne = -1;
        for (int i = 0; i<n; i++){
            if (lastOne != -1){
                if (arr[i]>arr[lastOne]){
                    ckr[i] = lastOne;
                }else if (arr[i]<arr[lastOne]){
                    lastOne = i;
                }
                else ckr[i] = -1; 
            }else {
                ckr[i] = -1; 
                lastOne = i;
            }

        }

        int a = -1; int b = -1; int c = -1; 
        for (int i = 0; i<n; i++){
            if (ckr[i] != -1  && ck[i] != -1){
                a = ckr[i];
                b = i; 
                c = ck[i];
            }
        }

        if (a != -1 && b!= -1&& c!= -1){
        yes;
        cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
        } else {
            no;
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