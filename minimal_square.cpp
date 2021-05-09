#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a <= b)
        {
            if (2 * a >= b)
                cout << 4 * a * a << endl;
            else
                cout << b * b << endl;
        }
        else
        {
            if (2 * b >= a)
                cout << 4 * b * b << endl;
            else
                cout << a * a << endl;
        }
    }
    return 0;
}