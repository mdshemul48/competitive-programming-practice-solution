#include <bits/stdc++.h>
using namespace std; 


class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.size();
        
        int l = 0, r = 0;
        map<char, int> q; 

        int lg = -1; 
        while(r<n){
            q[s[r]]++;
            
            if (q.size() == k) lg = max(lg, r-l+1);
            else if (q.size() > k){
                while(l<r){
                    if (q.size() == k) break; 
                    q[s[l]]--; 
                    if (q[s[l]] == 0) q.erase(s[l]); 
                    l++;
                }
                if (q.size() == k) lg = max(lg, r-l+1);
            }
            r++;
        }
        return lg; 
    }
};