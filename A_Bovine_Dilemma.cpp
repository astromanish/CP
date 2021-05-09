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
        set<int> s;
        int d;
        for (auto &it1 : v)
            for (auto &it2 : v)
            {
                d = abs(it1 - it2);
                if (d != 0)
                    s.insert(d);
            }
        cout << s.size() << endl;
    }
    return 0;
}