
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
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        cin >> n >> k;
        vi v;
        for (i = k + 1; i <= n; i++)
            v.push_back(i);
        if ((k - 1) % 2 == 0)
        {
            for (i = k - 1; i > (k - 1) / 2; i--)
                v.push_back(i);
        }
        else
        {
            for (i = k - 1; i >= k / 2; i--)
                v.push_back(i);
        }
        cout << v.size() << endl;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}