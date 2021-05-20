
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
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int cur = 1;
    int cnt = 0;

    while (1)
    {
        if (cur + d >= n)
        {
            cout << cnt + 1 << endl;
            break;
        }
        bool p = false;
        fb(i, cur + d, cur + 1)
        {
            if (s[i - 1] == '1')
            {
                cur = i;
                cnt++;
                p = true;
            }
        }
        if (!p)
        {
            cout << -1 << endl;
            break;
        }
    }
    return 0;
}