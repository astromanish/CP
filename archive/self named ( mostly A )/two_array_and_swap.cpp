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
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int i;
        int a[n], b[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (i = 0; i < k; i++)
        {
            if (a[i] < b[i])
                a[i] = b[i];
            else
                break;
        }
        int sum = 0;
        for (i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }

    return 0;
}