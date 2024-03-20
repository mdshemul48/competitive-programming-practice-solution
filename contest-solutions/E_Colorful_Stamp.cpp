#include<bits/stdc++.h>

using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>>n; 
        string s; 
        cin>>s;

        int b = 0, r = 0;  
        bool yes= 1; 
        for (int i= 0; i<n; i++){
            if (s[i] == 'B') b++;
            else if (s[i] == 'R') r++;

            if  (s[i]== 'W' || i== n-1){
                if ((r == 0 && b == 0) || (r!= 0 && b != 0)) {b = 0; r = 0;} 
                else {
                    yes = 0;
                }
            }
        }

        if (yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;   
}