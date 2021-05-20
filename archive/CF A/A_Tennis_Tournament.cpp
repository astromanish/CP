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
    int n, b, p;
    cin >> n >> b >> p;
    int m_cnt = 0;
    int m = n;
    int k;
    while (1)
    {
        if (m == 1)
            break;
        int cur = 1;
        while (1)
        {
            if (pow(2, cur) > m)
            {
                k = pow(2, cur - 1);
                m = k / 2 + (m - k);
                m_cnt += k / 2;
                break;
            }
            cur++;
        }
    }
    cout << m_cnt * (2 * b + 1) << " " << n * p;
    return 0;
}