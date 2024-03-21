#include<bits/stdc++.h>

using namespace std; 


class Solution{
public:
    bool check(map<char, int> &s1, map<char, int> &s2){
       for (auto i = s1.begin(); i != s1.end(); i++){
           char curnt = i->first;
           if (s1[curnt] != s2[curnt]) return 0; 
       }
       return 1;
    }
    
	int search(string pat, string txt) {
	    
        map<char, int> ck, tk;
        for (int i = 0; i<pat.size(); i++) {
            ck[pat[i]]++;
            tk[txt[i]]++;
        }
        
        
        int cnt = 0; 
        
        if (check(ck, tk)) cnt++; 
        
        for (int i = 0; i < txt.length() - pat.length() + 1; i++){
            
            tk[txt[i]]--;
            if (tk[txt[i]] == 0) tk.erase(txt[i]);
            tk[txt[i+pat.length()]]++;
            
            
            if (check(ck, tk)) cnt++;
            
            
        }
        return cnt;
	}

};