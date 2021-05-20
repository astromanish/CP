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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int min_d = 0;
    bool r = true, e = false, o = false;
    n -= 1;
    while (n--)
    {
        if (r)
        {
            r = false;
            if (a <= b)
            {

                e = false;
                o = true;
                min_d += a;
            }
            else
            {
                e = true;
                o = false;
                min_d += b;
            }
        }
        else
        {
            if (e)
            {
                e = false;
                if (b <= c)
                {
                    r = true;
                    o = false;
                    min_d += b;
                }
                else
                {
                    r = false;
                    o = true;
                    min_d += c;
                }
            }
            else
            {
                o = false;
                if (c <= a)
                {
                    r = false;
                    e = true;
                    min_d += c;
                }
                else
                {
                    r = true;
                    e = false;
                    min_d += a;
                }
            }
        }
    }
    cout << min_d << endl;
    return 0;
}