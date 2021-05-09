
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
    int n;
    cin >> n;
    int i;
    map<int, int> m;
    int a;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a != 0)
            m[a]++;
    }
    int cnt = 0;
    for (auto &it : m)
    {
        if (it.second > 2)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            if (it.second == 2)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}