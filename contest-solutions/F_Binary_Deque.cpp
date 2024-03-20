#include<bits/stdc++.h>

using namespace std; 
#define lli long long int

int main(){
    int t; 
    cin>> t; 
    while(t--){
        lli n, k;
        cin>> n>>k;
        lli arr[n]; 
        lli sum = 0; 
        for (lli i = 0; i<n; i++)cin>>arr[i], sum+=arr[i]; 

        
        if (sum<k)cout<<"-1"<<endl;
        else if (sum == k) cout<<"0"<<endl;
        else {
        lli prefix[n]; 
        int c = 0;  
        for (lli i = 0; i<n; i++){
            if (arr[i] == 1) prefix[i] = 0, c = 0; 
            else {
                c++;
                prefix[i] = c; 
            }
        }

        lli sufix[n]; 
        c = 0;  
        for (lli i = n-1; i>=0; i--){
            if (arr[i] == 1) sufix[i] = 0, c = 0; 
            else {
                c++;
                sufix[i] = c; 
            }
        }

            lli l = 0, r = n-1; 
            lli ans = 0;
            while(sum > k){
                
                if (sufix[l] == 0){
                    sum--; 
                    l++; 
                }else if (prefix[r] == 0) sum--, r--; 
                else{
                    if (sufix[l] <= prefix[r]){
                        l++;
                    }else {
                        r--;
                    }
                }
                
                ans++;
            }
            cout<<ans<<endl;
        }

        


    }
    
    return 0;   
}


