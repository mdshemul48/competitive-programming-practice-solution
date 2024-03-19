#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    vector<bool> arr(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a] = 1; 
    }

    for (int i = 1; i<=n; i++){
        if (arr[i]== false){
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}