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
    string s;
    cin >> n >> s;
    int p = 0;
    int x = 0, y = 0;
    if (s[0] == 'U')
        y += 1;
    else
        x += 1;
    ff(i, 1, n)
    {
        if ((x == y && s[i] == 'R' && s[i - 1] == 'R') || (x == y && s[i] == 'U' && s[i - 1] == 'U'))
            p += 1;
        if (s[i] == 'U')
            y += 1;
        else
            x += 1;
    }
    cout << p << endl;
    return 0;
}