#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, s;
        cin >> a >> b >> x >> s;

        if (s / x <= a && s % x <= b)
        {
            cout << "YES" << endl;
        }
        else if (s / x > a && s <= (a * x) + b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}