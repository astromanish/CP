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
    int n;
    int k;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        ff(i, 0, n)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[0] + k < a[n - 1] - k)
            cout << -1 << endl;
        else
        {
            cout << a[0] + k << endl;
        }
    }
    return 0;
}