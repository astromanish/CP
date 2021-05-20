
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
    int l, r;
    while (t--)
    {
        cin >> l >> r;
        if (l * 2 <= r)
            cout << l << " " << 2 * l << endl;
        else
            cout << -1 << " " << -1 << endl;
    }
    return 0;
}