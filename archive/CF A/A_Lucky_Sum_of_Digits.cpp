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
    int c4, c7;
    for (int cnt7 = n / 7; cnt7 >= 0; cnt7--)
    {
        int a = n - 7 * cnt7;
        if (a % 4 == 0)
        {
            ff(i, 0, a / 4)
            {
                cout << 4;
            }
            ff(i, 0, cnt7)
            {
                cout << 7;
            }
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}