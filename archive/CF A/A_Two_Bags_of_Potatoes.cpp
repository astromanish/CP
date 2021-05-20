
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
    int y, k, n;
    cin >> y >> k >> n;
    vi v;
    for (int i = 1; i < (n - y); i++)
    {
        if ((i + y) % k == 0)
            v.push_back(i);
    }

    if (v.size())
        cout << -1 << endl;
    else
    {
        sort(all(v));
        for (auto &it : v)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}