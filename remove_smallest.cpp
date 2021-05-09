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
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        bool e = true;
        for (i = 0; i < n; i++)
        {
            if (a[i + 1] - a[i] > 1 && i != n - 1)
            {
                cout << "NO" << endl;
                e = false;
                break;
            }
        }
        if (e)
            cout << "YES" << endl;
    }

    return 0;
}