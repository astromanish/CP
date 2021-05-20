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
    int n, m;
    cin >> n >> m;
    cout << n + m - 1 << endl;
    ff(i, 1, n + 1)
    {
        cout << i << " " << 1 << endl;
    }
    int cnt = 1;
    ff(i, 2, m + 1)
    {
        cout << cnt << " " << i << endl;
        if (cnt == n)
        {
            cnt = 1;
        }
        else
            cnt++;
    }

    return 0;
}