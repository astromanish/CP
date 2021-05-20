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
    string a, b;
    cin >> a >> b;
    int c = a[1] - b[1];
    int d = a[0] - b[0];
    char m, n;
    if (c >= 0)
    {
        m = 'D';
    }
    else
    {
        m = 'U';
    }
    if (d >= 0)
    {
        n = 'L';
    }
    else
    {
        n = 'R';
    }
    string s = "";
    s.push_back(n);
    s.push_back(m);
    if (abs(c) <= abs(d))
    {
        cout << abs(c) + (abs(d) - abs(c)) << endl;
        ff(i, 0, abs(c))
        {
            cout << s << endl;
        }
        ff(i, 0, abs(d) - abs(c))
        {
            cout << n << endl;
        }
    }
    else
    {
        cout << abs(d) + (abs(c) - abs(d)) << endl;
        ff(i, 0, abs(d))
        {
            cout << s << endl;
        }
        ff(i, 0, abs(c) - abs(d))
        {
            cout << m << endl;
        }
    }

    return 0;
}