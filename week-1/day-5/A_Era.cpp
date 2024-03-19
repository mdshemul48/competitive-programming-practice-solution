#include <bits/stdc++.h>
using namespace std;


void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n; 
        int arr[n+1]; 
        for (int i = 1; i<n+1; i++) cin>>arr[i]; 

        int ans = 0; 
        for (int i = 1; i<n+1; i++){
            ans = max(ans, arr[i]-i);
        }
        cout<<ans<<endl;
    }

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}