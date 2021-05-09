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
    ll k1, k2, k3, k4;
    cin >> k1 >> k2 >> k3 >> k4;
    if (k3 < k4)
    {
        if (k1 < k3)
        {
            cout << k1 * 256 << endl;
        }
        else
        {
            if (k2 > (k1 - k3))
                cout << k3 * 256 + (k1 - k3) * 32;
            else
                cout << k3 * 256 + k2 * 32;
        }
    }
    else
    {
        if (k1 < k4)
        {
            cout << k1 * 256 << endl;
        }
        else
        {
            if (k2 > (k1 - k4))
                cout << k4 * 256 + (k1 - k4) * 32;
            else
                cout << k4 * 256 + k2 * 32;
        }
    }
    return 0;
}