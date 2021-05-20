
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
    string s;
    cin >> s;
    int cnt = 0;
    int p = 0;
    ff(i, 0, n - 1)
    {
        if (s[i] == '+')
        {
            cnt++;
            p++;
        }
        else
        {
            if (p > 0)
            {
                cnt--;
                p--;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}