#include<bits/stdc++.h>

using namespace std; 

int main(){
    int n, m;
    cin>>n>>m; 
    vector<int>arr(n), arr2(m), newarr;
    for (int i = 0; i<n; i++) cin>>arr[i];
    for (int i = 0; i<m; i++) cin>>arr2[i];

    int l = 0, r  = 0; 
    while(l< n && r < m){
        if (arr[l] < arr2[r]){
            newarr.push_back(arr[l]);
            l++;
        }else {
            newarr.push_back(arr2[r]);
            r++;
        }
    }

    while(l<n) newarr.push_back(arr[l]), l++; 
    while(r<m) newarr.push_back(arr2[r]), r++; 

    for (int i = 0; i<newarr.size(); i++)cout<<newarr[i]<<" ";
    return 0;   
}