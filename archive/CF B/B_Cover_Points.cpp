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
    ll mx = 0;
    // vector<pair<int, int>> p;
    ff(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        if ((a + b) > mx)
            mx = (a + b);
        // p.push_back(make_pair(a, b));
    }
    cout << mx;
    return 0;
}