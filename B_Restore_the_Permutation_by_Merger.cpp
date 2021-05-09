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
    int n;
    while (t--)
    {
        cin >> n;
        int i;
        int a[2 * n];
        for (i = 0; i < 2 * n; i++)
            cin >> a[i];
        int b[n] = {0};
        vector<int> v;
        for (i = 0; i < 2 * n; i++)
        {
            if (!b[a[i] - 1])
            {
                b[a[i] - 1] = true;
                v.push_back(a[i]);
            }
        }
        for (auto &it : v)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}