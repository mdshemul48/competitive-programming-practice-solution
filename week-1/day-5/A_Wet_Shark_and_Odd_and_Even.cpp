#include<bits/stdc++.h>

using namespace std; 

int main(){
    int a,b,c; 
    int n,t; 
    cin>>n;
    long long int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());

    long long int sum = 0, lod = -1; 
    for (int i = 0; i<n; i++){
        if (arr[i]%2 == 0) sum+= arr[i]; 
        else if (arr[i]%2 !=0 && lod == -1) lod = arr[i];
        else if (arr[i]%2 !=0 && lod != -1)sum+= lod+arr[i], lod = -1; 
    }
    cout<<sum<<endl;

    
    return 0;   
}