
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        cin >> w >> h >> n;
        int cnt = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            cnt *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            cnt *= 2;
        }
        if (cnt >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}