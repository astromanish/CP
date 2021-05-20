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

const int N = 2e5;
vi v[N];

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[1] = 1;
    ff(i, 2, n + 1)
    {
        cin >> a[i];
    }
    vi w;
    int cur = n;
    while (1)
    {
        w.push_back(cur);
        cur = a[cur];
        if (cur == 1)
            break;
    }
    cout << 1 << " ";
    for (auto it = w.rbegin(); it < w.rend(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}