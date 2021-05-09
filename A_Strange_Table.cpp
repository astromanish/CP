
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
    int n, m;
    ll x, a, b;
    int i, j;
    while (t--)
    {
        cin >> n >> m >> x;
        ll num = 1;
        bool mg = false;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (num == x)
                {
                    a = i;
                    b = j;
                    mg = true;
                    break;
                }
                num++;
            }
            if (mg)
                break;
        }
        num = 1;
        bool hg = false;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == a && j == b)
                {
                    cout << num << endl;
                    hg = true;
                    break;
                }
                num++;
            }
            if (hg)
                break;
        }
    }
    return 0;
}