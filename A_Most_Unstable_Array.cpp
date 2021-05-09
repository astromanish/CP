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
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // if (n > 2)
        //     cout << 2 * m << endl;
        // else
        // {
        //     if (n == 1)
        //         cout << 0 << endl;
        //     else
        //         cout << m << endl;
        // }
        cout << min(2, n - 1) * m << endl;
    }
    return 0;
}