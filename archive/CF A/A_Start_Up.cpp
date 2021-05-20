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
    string s, t;
    cin >> s;
    t = s;
    int l = t.length();
    reverse(all(s));
    if (t == s)
    {
        ff(i, 0, l)
        {
            if (t[i] != 'A' && t[i] != 'H' && t[i] != 'I' && t[i] != 'M' && t[i] != 'O' && t[i] != 'T' && t[i] != 'U' && t[i] != 'V' && t[i] != 'W' && t[i] != 'X' && t[i] != 'Y')
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}