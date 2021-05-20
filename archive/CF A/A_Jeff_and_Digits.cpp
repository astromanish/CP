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
    int cnt = 0;
    int a;
    ff(i, 0, n)
    {
        cin >> a;
        if (a == 5)
            cnt++;
    }
    if (cnt == n)
        cout << -1;
    else
    {
        if (cnt < 9)
            cout << 0;
        else
        {
            int cnt0 = n - cnt;
            cnt -= cnt % 9;
            ff(i, 0, cnt)
            {
                cout << 5;
            }
            ff(i, 0, cnt0)
            {
                cout << 0;
            }
        }
    }

    return 0;
}