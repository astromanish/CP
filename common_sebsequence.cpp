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
    int t, n, m, k, i, j, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int a[n], b[m];
        vector<int> c;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                    c.push_back(a[i]);
            }
        }
        if (c.size())
        {
            cout << "YES" << endl;
            cout << 1 << " " << c[0] << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}