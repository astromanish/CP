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
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x = 0, y = 0;
        int a;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (i % 2 != a % 2)
            {
                if (i % 2 == 0)
                    x++;
                else
                    y++;
            }
        }
        if (x == y)
            cout << x << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}