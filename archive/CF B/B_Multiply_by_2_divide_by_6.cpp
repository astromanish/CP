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
    int n;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        while (1)
        {
            if (n == 1)
            {
                break;
            }
            if (n % 6 == 0)
            {
                n /= 6;
                cnt++;
            }
            else
            {
                if (n % 6 == 3)
                {
                    n *= 2;
                    cnt++;
                }
                else
                {
                    cnt = -1;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}