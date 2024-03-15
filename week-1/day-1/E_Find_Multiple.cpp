#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; 
    cin>>a>>b>>c;

    int i = 1;
    while(i*c<=b){
        if (a<= i*c && i*c<=b){
            cout<<i*c<<endl;
            return 0;
        }else i++;
    }
    cout << -1 << endl;
    return 0;
}