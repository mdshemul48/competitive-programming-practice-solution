#include <bits/stdc++.h>

using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k)
{

    vector<long long> ans;

    queue<long long> pik;`
    for (int i = 0; i < k; i++)
    {

        if (arr[i] < 0)
        {
            pik.push(arr[i]);
        }
    }

    for (int i = 0; i < n - k + 1; i++)
    {
        if (pik.size() > 0)
            ans.push_back(pik.front());
        else
            ans.push_back(0);

        if (arr[i + k] < 0)
            pik.push(arr[i + k]);

        if (arr[i] == pik.front())
            pik.pop();
    }

    return ans;
}
