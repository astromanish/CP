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

    int i, j;
    while (t--)
    {
        cin >> i >> j;
        int cnt = 0;
        while (i > 0 && j > 0)
        {
            if (i >= j)
            {
                cnt += i / j;
                i = i % j;
            }
            else
            {
                cnt += j / i;
                j = j % i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}