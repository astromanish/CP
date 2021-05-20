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
    int n;
    cin >> n;
    vi o;
    int a;
    ll sum = 0;
    int cnt = 0;
    ff(i, 0, n)
    {
        cin >> a;
        sum += a;
        if (a % 2 != 0)
        {
            o.push_back(a);
        }
    }
    sort(all(o));
    if (o.size() % 2 != 0)
        sum -= o[0];

    cout << sum << endl;

    return 0;
}