
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
    int a, b;
    cin >> a >> b;
    int d = abs(a - b);
    if (d % 2 == 0)
    {
        d /= 2;
        cout << d * (d + 1) << endl;
    }
    else
    {
        d = (d - 1) / 2;
        cout << (d + 1) * (d + 1) << endl;
    }
    return 0;
}