
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define ff(a, b, c) for (int a = b; a <= c; a++)
#define fb(a, b, c) for (int a = b; a >= c; a--)

#define MOD 1e9 + 7

int main()
{
    ll A, B;
    cin >> A >> B;
    ll x, y, z;
    cin >> x >> y >> z;
    ll m = 0;
    cout << max(m, 2 * x + y - A) + max(m, y + 3 * z - B) << endl;

    return 0;
}