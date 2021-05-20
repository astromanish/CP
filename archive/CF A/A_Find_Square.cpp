
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
    int n, m;
    cin >> n >> m;
    int a, b, c, d;
    bool first = true;
    char ch;
    ff(i, 1, n)
    {
        ff(j, 1, m)
        {
            cin >> ch;
            if (ch == 'B')
            {
                if (first)
                {
                    a = b = j;
                    c = d = i;
                    first = false;
                }
                else
                {
                    b = j;
                    d = i;
                }
            }
        }
    }
    cout << c + (d - c) / 2 << " " << a + (b - a) / 2 << endl;
    return 0;
}