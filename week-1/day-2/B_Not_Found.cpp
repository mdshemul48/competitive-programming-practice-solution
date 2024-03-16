#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool check[26];
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        check[s[i]-'a'] = 1; 
    }

    for (int i = 0; i<26; i++){
        if (!check[i]){
            cout<<char(i+'a')<<endl;
            return 0; 
        }
    }
    cout<<"None"<<endl;
    return 0;
}