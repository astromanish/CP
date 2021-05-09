
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
    int n;
    cin >> n;
    int cnt_p = 0, cnt_n = 0;
    int a;
    ff(i, 0, n - 1)
    {
        cin >> a;
        if (a > 0)
            cnt_p++;
        else
        {
            if (a < 0)
                cnt_n++;
        }
    }
    if (n % 2 == 0)
        n /= 2;
    else
        n = n / 2 + 1;
    if (cnt_p >= n)
        cout << 1 << endl;
    else
    {
        if (cnt_n >= n)
            cout << -1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}