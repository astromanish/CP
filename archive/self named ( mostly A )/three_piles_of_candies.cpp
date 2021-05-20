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
    int t, n, m, k, i, j;
    cin >> t;
    ll a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a + b + c) % 2 == 0)
            cout << (a + b + c) / 2 << endl;
        else
            cout << (a + b + c - 1) / 2 << endl;
    }

    return 0;
}