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
    int n, t;
    cin >> n >> t;
    if (t != 10)
    {
        cout << t;
        ff(i, 0, n - 1)
        {
            cout << 0;
        }
    }
    else
    {
        if (n != 1)
        {
            cout << t;
            ff(i, 0, n - 2)
            {
                cout << 0;
            }
        }
        else
            cout << -1;
    }
    return 0;
}