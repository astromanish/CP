
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
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        bool e = false;
        for (auto &i1 : v)
        {
            for (auto &i2 : v)
            {
                for (auto &i3 : v)
                {
                    if (i1 + i2 < i3 || i2 + i3 < i1 || i1 + i3 < i2)
                    {
                        cout << i1 << " " << i2 << " " << i3 << endl;
                        e = true;
                        break;
                    }
                }
                if (e)
                    break;
            }
            if (e)
                break;
        }
        if (!e)
            cout << -1 << endl;
    }
    return 0;
}