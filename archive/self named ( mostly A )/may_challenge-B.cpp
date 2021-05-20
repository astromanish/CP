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
    int N, x, k;
    while (t--)
    {
        cin >> N >> x >> k;
        if (x % k == 0 || (N + 1 - x) % k == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}