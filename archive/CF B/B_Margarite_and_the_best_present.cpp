#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a < c; a++)
#define fb(a, b, c) for (int a = b; a > c; a--)

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    int l, r;
    while (t--)
    {
        cin >> l >> r;
        if (l % 2 == 0)
        {
            if (r % 2 == 0)
            {
                cout << (r + l) / 2 << endl;
            }
            else
            {
                cout << -(r - l + 1) / 2 << endl;
            }
        }
        else
        {
            if (r % 2 == 0)
            {
                cout << (r - l + 1) / 2 << endl;
            }
            else
            {
                cout << -(r + l) / 2 << endl;
            }
        }
    }
    return 0;
}