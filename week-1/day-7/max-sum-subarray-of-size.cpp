#include<bits/stdc++.h>

using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        long mx = 0; 
        long sum = 0;
        for (long i = 0; i<k; i++){
            sum+=arr[i];
        }
        mx = sum;
        for (long i = k; i<n; i++){
            sum-= arr[i-k];
            sum+=arr[i];
            mx = max(sum, mx);
        }
        return mx;
        
    }
};