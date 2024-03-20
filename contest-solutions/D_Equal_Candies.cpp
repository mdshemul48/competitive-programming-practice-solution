#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin>>t ;
    while(t--){
        int n; 
        cin>>n; 
        int sum = 0; 
        int mx = INT_MAX; 
        int a; 

        for (int i = 0; i<n; i++)cin>> a, mx = min(a,mx), sum+=a;
        cout<< sum - (mx*n) <<endl;
    }
    
    return 0;   
}