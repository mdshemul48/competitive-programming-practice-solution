#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n), arr2(m);

    for (int i = 0; i<n; i++) cin>>arr[i]; 
    for (int i = 0; i<m; i++) cin>>arr2[i];

    int l = 0, r = 0; 
    while(r<m){
        while(arr[l]<arr2[r] && l<n){
            l++;
        }
        r++;
        cout<<l<<" ";
    }



    return 0;
}