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
        int a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        vector<int> d;
        for (i = 0; i < n - 1; i++)
        {
            int dif = a[i + 1] - a[i];
            d.push_back(dif);
        }
        cout << *min_element(all(d)) << endl;
    }
    return 0;
}