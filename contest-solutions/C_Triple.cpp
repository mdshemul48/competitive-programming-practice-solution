#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>>n; 
        int arr[n]; 
        int mx = -1; 
        for (int i = 0; i<n; i++) cin>> arr[i], mx = max(mx, arr[i]);

        int arr2[mx+2] = {0}; 
        int found = -1; 
        for (int i = 0; i<n; i++){
            arr2[arr[i]]+= 1; 

            
            if (arr2[arr[i]]>=3){
                found = arr[i]; 
                break; 
            }
        }

        cout<<found<<endl;
    }
    
    return 0;   
}