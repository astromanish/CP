
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
        while (v.back() == 0)
            v.pop_back();
        reverse(all(v));
        while (v.back() == 0)
            v.pop_back();
        cout << count(all(v), 0) << endl;
    }
    return 0;
}