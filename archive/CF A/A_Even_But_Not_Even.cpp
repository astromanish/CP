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

int val(char c)
{
    return c - '0';
}

int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin >> n >> s;
        string m = "";
        ff(i, 0, n)
        {
            if (val(s[i]) % 2 != 0)
                m.push_back(s[i]);
        }
        if (m.length() > 1)
        {
            cout << m[0] << m[1] << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}