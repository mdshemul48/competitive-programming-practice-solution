#include <bits/stdc++.h>
using namespace std;



void exc()
{
    int t,n;
    cin>>t;
    while(t--){
        char c; 

        cin>>n>>c;
        string s; 
        cin>>s; 

        int f = -1; 
        int i = 0;
        int mx = -1;  
        while(i<n){
             if (s[i] == 'g' && f == -1) f = i; 

            if (c == s[i]){
                int sf = -1; 
                for (int j = i; j<n; j++){
                  
                    if (s[j] == 'g'){ 
                        sf = j-i; 
                        break;
                    }
                    
                    if  (j == n-1) sf = f+(j-i+1); 
                    if (c == s[j]) s[j] = '0';
                }
                mx = max(sf, mx);
            }
            i++;
        }
        if (c == 'g' && n == 1){
            cout<<0<<endl;
        }else {
            cout<<mx<<endl;
        }
    }

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}