#include<bits/stdc++.h>

using namespace std; 
#define lli long long int


int main(){
    lli a,b; 
    cin>>a>>b;

    lli ans = 1; 
    lli sum = a; 
    while(1){
        if (sum*2<=b)ans++, sum = sum*2;
        else break; 
    
    }
    cout<<ans<<endl;
    return 0;   
}