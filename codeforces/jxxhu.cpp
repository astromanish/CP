#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int M = 1000000007;

using namespace std;

ll fun(ll n, ll x, ll y)
{
    if (n == 1)
    {
        return x;
    }
    if (n == 2)
    {
        return y;
    }
    return fun(n - 1, x, y) + fun(n + 1, x, y);
}

int main()
{
    ll x, y, n;
    cin >> x >> y;
    cin >> n;
    cout << fun(n, x, y) % M;
    return 0;
}