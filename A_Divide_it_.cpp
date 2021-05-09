
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
    int t;
    cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        while (n != 1)
        {
            if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
            {
                if (n % 2 == 0)
                {
                    n = n / 2;
                    cnt++;
                }
                else
                {
                    if (n % 3 == 0)
                    {
                        n = (2 * n) / 3;
                        cnt++;
                    }
                    else
                    {
                        n = (4 * n) / 5;
                        cnt++;
                    }
                }
            }
            else
            {
                cnt = -1;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}