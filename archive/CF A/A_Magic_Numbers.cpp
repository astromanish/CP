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
    bool m = true;
    int cur;
    int cnt = 0;
    while (n != 0)
    {
        cur = n % 10;
        if (cur == 4 || cur == 1)
        {
            if (cur == 4)
            {
                cnt++;
                if (cnt > 2)
                {
                    m = false;
                    break;
                }
                else
                {
                    if (n == 4)
                    {
                        m = false;
                        break;
                    }
                }
            }
            else
                cnt = 0;
        }
        else
        {
            m = false;
            break;
        }

        n /= 10;
    }

    if (m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}