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
    int k;
    string s;
    cin >> k >> s;
    int l = s.length();
    int a[26] = {0};
    int b;
    ff(i, 0, l)
    {
        b = s[i] - 'a';
        a[b]++;
    }
    ff(i, 0, 26)
    {
        if (a[i] > 0)
        {
            if (a[i] % k != 0)
            {
                cout << -1 << endl;
                return 0;
            }
            else
            {
                a[i] = a[i] / k;
            }
        }
    }

    while (k--)
    {
        ff(j, 0, 26)
        {
            ff(p, 0, a[j])
            {
                cout << char(j + 'a');
            }
        }
    }
    return 0;
}