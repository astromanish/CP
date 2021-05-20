
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
    int t;
    cin >> t;
    ll a, b, k;
    while (t--)
    {
        cin >> a >> b >> k;
        if (k % 2 == 0)
        {
            if (a >= b)
                cout << (a - b) * (k / 2) << endl;
            else
                cout << -(b - a) * (k / 2) << endl;
        }
        else
        {
            if (a >= b)
                cout << (a - b) * ((k - 1) / 2) + a << endl;
            else
                cout << -(b - a) * ((k - 1) / 2) + a << endl;
        }
    }
    return 0;
}