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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll can[n], org[n];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> can[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> org[i];
        }

        ll a = *min_element(can, can + n);
        for (i = 0; i < n; i++)
        {
            can[i] -= a;
        }
        ll b = *min_element(org, org + n);
        for (i = 0; i < n; i++)
        {
            org[i] -= b;
        }
        ll count = 0;
        for (i = 0; i < n; i++)
        {
            if (can[i] > org[i])
                count += can[i];
            else
                count += org[i];
        }

        cout << count << endl;
    }
    return 0;
}