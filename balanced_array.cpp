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
    int n, i;
    while (t--)
    {
        cin >> n;
        if ((n / 2) % 2 == 0)
        {
            cout << "YES" << endl;
            for (i = 0; i < n / 2; i++)
            {
                cout << (i + 1) * 2 << " ";
            }
            for (i = 0; i < (n / 2) - 1; i++)
            {
                cout << (i + 1) * 2 - 1 << " ";
            }
            cout << n + n / 2 - 1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}