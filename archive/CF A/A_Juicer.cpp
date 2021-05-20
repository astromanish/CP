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
    int n, b, d;
    cin >> n >> b >> d;
    int w = 0;
    int a;
    int cnt = 0;
    ff(i, 0, n)
    {

        cin >> a;
        if (a <= b)
        {
            w += a;
        }
        if (w > d)
        {
            w = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}